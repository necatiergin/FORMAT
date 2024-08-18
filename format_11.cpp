#include <iostream>
#include <format>
#include <string>

int main()
{
	using namespace std;

	string name{ "necati ergin" };
	char buffer[64];

	auto result = format_to_n(buffer, std::size(buffer) - 1, "{} isminin uzunlugu {}.", name, name.length());

	cout << buffer << '\n'; //UB. Not null terminated byte stream.

	cout << result.out << '\n'; // UB.

	cout << result.size << '\n'; // 33

	cout << result.out - buffer << '\n'; // 33

	//---------------------------------------------------------------------------------------------------------- -

	*result.out = '\0';
	// buffer[result.size] = '\0';

	cout << "|" << buffer << "|"; //valid
}
