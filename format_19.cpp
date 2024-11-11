#include <format>
#include <iostream>

int main()
{
	using std::cout, std::format;

	double dval{ 3.14159 / 1.7 };
	cout << format("|{:12g}|", dval) << '\n';                         // |     1.84799|
	cout << format("|{:12.2}|", dval) << '\n';                        // |         1.8|
	cout << format("|{:12e}|", dval) << '\n';                         // |1.847994e+00|

	int width{ 20 };
	int precision{ 4 };
	cout << format("|{2:{0}.{1}f}|", width, precision, dval) << '\n'; // |              1.8480|
}
