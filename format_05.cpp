#include <iostream>
#include <format>

int main()
{
	using std::cout, std::format;

	double dval = 3. / 7;
	int width = 12;
	int precision = 5;

	cout << format("|{2:<{0}.{1}f}|", width, precision, dval);    //  |0.42857     |
	// 2 ==> position
	// 0 ==> width
	// 1 ==> precision
}
