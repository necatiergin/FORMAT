#include <format>
#include <iostream>
#include <locale>

int main()
{
	using std::locale, std::cout, std::format;

	locale::global(locale{ "turkish" }); // locale changed
	cout << 123.96585 << '\n'; // 123.96585
	cout << format("{:L}\n", 4.56) << '\n';  // 4,56
}
