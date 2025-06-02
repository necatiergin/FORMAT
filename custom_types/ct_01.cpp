#include <iostream>
#include <format>
#include <string>
#include <vector>

struct Point {
	int mx, my;
};

template<>
class std::formatter<Point>
{
public:
	auto parse(std::format_parse_context& pc)
	{
		auto iter = pc.begin();
		for (; iter != pc.end() && *iter != '}'; ++iter)
		{
			if (*iter == '#')
			{
				cb_ = true;
			}
			else
			{
				throw std::format_error{ "invalid formatting character!" };
			}
		}
		return iter;
	}

	typename std::format_context::iterator format(const Point& p, std::format_context fc)
	{
		return std::format_to(fc.out(), "{}{}, {}{}", (cb_ ? '{' : '('), p.mx, p.my, (cb_ ? '}' : ')'));
	}
private:
	bool cb_{};
};

int main()
{
	Point p1{ 2,6 }, p2{ 3,5 };
	std::cout << std::format("{:#} {}", p1, p2) << '\n';
}
