#include <iostream>
#include <format>

int main()
{
	int x = 23;
	double d = 4.5;
	std::cout << std::format("{} {} {}", x, d, "ali") << '\n';
}
