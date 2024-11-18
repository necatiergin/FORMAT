#include <iostream>
#include <format>

int main()
{
	int x = 47802;
	
	std::cout << std::format("|{:24}|", x) << '\n';
	std::cout << std::format("|{:24d}|", x) << '\n';
	std::cout << std::format("|{:24b}|", x) << '\n';
	std::cout << std::format("|{:#24b}|", x) << '\n';
	std::cout << std::format("|{:#24B}|", x) << '\n';
	std::cout << std::format("|{:24o}|", x) << '\n';
	std::cout << std::format("|{:#24o}|", x) << '\n';
	std::cout << std::format("|{:24x}|", x) << '\n';
	std::cout << std::format("|{:24X}|", x) << '\n';
	std::cout << std::format("|{:#24x}|", x) << '\n';
	std::cout << std::format("|{:#24X}|", x) << '\n';
}
