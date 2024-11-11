#include <format>
#include <iostream>

int main()
{
	using std::cout, std::format;

	int x{ 171 };

	cout << format("|{:20d}|", x) << '\n';   // |                 171|
	cout << format("|{:20b}|", x) << '\n';   // |            10101011|
	cout << format("|{:#20b}|", x) << '\n';  // |          0b10101011|
	cout << format("|{:#20B}|", x) << '\n';  // |          0B10101011|
	cout << format("|{:20x}|", x) << '\n';   // |                  ab|
	cout << format("|{:20X}|", x) << '\n';   // |                  AB|
	cout << format("|{:#20X}|", x) << '\n';  // |                0XAB|
}
