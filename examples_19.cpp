#include <iostream>
#include <format>

int main()
{
	double d = 23.123457;
	
	std::cout << std::format("|{:24}|", d) << '\n';
	std::cout << std::format("|{:24g}|", d) << '\n';
	std::cout << std::format("|{:24G}|", d) << '\n';
	std::cout << std::format("|{:24f}|", d) << '\n';
	std::cout << std::format("|{:24F}|", d) << '\n';
	std::cout << std::format("|{:24a}|", d) << '\n';
	std::cout << std::format("|{:24A}|", d) << '\n';
}
