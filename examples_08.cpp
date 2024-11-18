#include <iostream>
#include <format>
#include <string>

int main()
{
	std::string s1{ "Necati" };
	std::string s2{ "Ergin" };

	std::cout << std::format("{} {}", s1, s2) << '\n';
	std::cout << std::format("{1} {0}", s1, s2) << '\n';
	std::cout << std::format("{0} {0}", s1) << '\n';
	std::cout << std::format("{0} {0}", s2) << '\n';
	std::cout << std::format("{0} {1}", s1, s2) << '\n';
}
