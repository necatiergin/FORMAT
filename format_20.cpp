#include <format>
#include <iostream>

int main()
{
	using namespace std;

	int i{ 356 };
	cout << format("|{:<7}|", i) << endl;   // |356    |
	cout << format("|{:<+7}|", i) << endl;  // |+356   |
	cout << format("|{:< 7}|", i) << endl;  // | 356   |
	cout << format("|{:< 7}|", -i) << endl; // |-356   |
}
