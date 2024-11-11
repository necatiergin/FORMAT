#include <iostream>
#include <format>
#include <string>

int main()
{
	std::string name{ "necati ergin" };
	char buffer[64];

	auto result = format_to_n(buffer, std::size(buffer) - 1, "{} isminin uzunlugu {}.", name, name.length());

	std::cout << buffer << '\n';	//UB. Not null terminated byte stream.
	std::cout << result.out << '\n'; // UB.
	std::cout << result.size << '\n'; // 33
	std::cout << result.out - buffer << '\n'; // 33

	//---------------------------------------------------------------------------------------------------------- -

	*result.out = '\0';
	// buffer[result.size] = '\0';

	std::cout << "|" << buffer << "|"; //valid
}
