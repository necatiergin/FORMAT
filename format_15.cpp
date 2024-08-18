#include <iostream>
#include <format>
#include <string>

class Person {
public:
	Person(std::string name, int id) : m_name(std::move(name)), m_id(id) { }

	std::string get_name()const { return m_name; }
	int get_id()const { return m_id; }
private:
	std::string m_name;
	int m_id;
};

template<>
class std::formatter<Person> {
public:
	constexpr auto parse(auto& context)
	{
		auto iter{ context.begin() };
		const auto iter_end{ context.end() };
		if (iter == iter_end || *iter == '}') // Eğer birşey girilmemişse default olma durumu
		{
			m_ftype = FormatType::All;
			return iter;
		}
		switch (*iter)
		{
			//a all için, isim için n, id için i olacak.
		case 'n': m_ftype = FormatType::Name; break;
		case 'i': m_ftype = FormatType::Id; break;
		case 'a': m_ftype = FormatType::All; break;
		default: throw std::format_error{ "Person format error!" };
		}

		++iter;
		if (iter != iter_end && *iter != '}') // Burası hata durumu
		{
			throw std::format_error{ "Person format error!" };
		}
		return iter;
	}

	constexpr auto format(const Person& per, auto& context)
	{
		using enum FormatType;

		switch (m_ftype)
		{
		case Name: return std::format_to(context.out(), "{}", per.get_name());
		case Id: return std::format_to(context.out(), "{}", per.get_id());
		case All: return std::format_to(context.out(), "[{}, {}]", per.get_id(), per.get_name());
		}
	}
private:
	enum class FormatType { Name, Id, All };
	FormatType m_ftype;
};

int main()
{
	Person p1{ "necati",876 };
	Person p2{ "harun",567 };
	Person p3{ "murat",789 };

	std::cout << std::format("{:n}\n{:i}\n{:a}", p1, p2, p3);
}
