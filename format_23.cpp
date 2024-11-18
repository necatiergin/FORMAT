// dynamic output width

#include <iostream>
#include <format>

int main()
{
	int x = 42;

	for (int i = 4; i <= 20; i += 2) {
		std::cout << std::format("|{:{}}|\n", x, i);
	}
}
