#include <iostream>
#include <format>

int main()
{
	using std::cout, std::format;

	cout << format("{:x}", 47802) << '\n'; // baba 
	cout << format("{:X}", 47802) << '\n'; // BABA
	cout << format("{:#x}", 47802) << '\n'; // 0xbaba
	cout << format("{:#X}", 47802) << '\n'; // 0XBABA
	cout << format("{:b}", 47802) << '\n'; // 1011101010111010
	cout << format("{:#b}", 47802) << '\n'; // 0b1011101010111010
	cout << format("{:o}", 47802) << '\n'; // 135272
	cout << format("{:#o}", 47802) << '\n'; // 0135272
	cout << format("{:f}", 5.) << '\n'; //  5.000000
	cout << format("{:#f}", 5.) << '\n'; // 5.000000
}
