#include <iostream>
#include <format>

int main()
{
	int x = 42;
	int y = -42;

	std::cout << std::format("|{:<9}|\n", x);
	std::cout << std::format("|{:<9}|\n", y);
	std::cout << std::format("|{:<+9}|\n", x);
	std::cout << std::format("|{:<+9}|\n", y);
	std::cout << std::format("|{:< 9}|\n", x);
	std::cout << std::format("|{:< 9}|\n", y);
}
