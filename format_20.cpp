#include <format>
#include <iostream>

int main()
{
	using std::cout, std::format;

	int i{ 356 };
	cout << format("|{:<7}|", i) << '\n';   // |356    |
	cout << format("|{:<+7}|", i) << '\n';  // |+356   |
	cout << format("|{:< 7}|", i) << '\n';  // | 356   |
	cout << format("|{:< 7}|", -i) << '\n'; // |-356   |
}
