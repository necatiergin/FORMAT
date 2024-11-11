#include <format>
#include <iostream>

int main()
{
	using std::cout, std::format, std::cin;

	int x = 41396;

	cout << "output width: ";
	int width;
	cin >> width;

	cout << format("|{:{}}|", x, width) << '\n';
	cout << format("|{:<{}}|", x, width) << '\n';
	cout << format("|{:>{}}|", x, width) << '\n';
	cout << format("|{:^{}}|", x, width) << '\n';
}
