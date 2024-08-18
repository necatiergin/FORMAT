#include <iostream>
#include <format>
#include <string>

int main()
{
	using namespace std;

	string name{ "ahmet aksoy" };
	int age{ 25 };

	auto n = formatted_size("{} {}", name, age); // n is length of string
	std::cout << "n = " << n << '\n'; // 14
}
