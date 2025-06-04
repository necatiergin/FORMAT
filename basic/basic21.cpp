#include <format>
#include <iostream>

int main() 
{
	int width = 10;
	int precision = 2;
	for (double val : {1.0, 12.345678, -777.7}) {
		std::cout << std::format("{:+{}.{}f}\n", val, width, precision);
	}
}
