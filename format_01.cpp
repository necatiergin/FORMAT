#include <iostream>
#include <format>

int main()
{
	using namespace std;

	cout << format("{}\n", 10 > 5); // true
	cout << format("{:d}\n", 10 > 5); // 1
	cout << format("{}\n", 65); // 65
	cout << format("{:c}\n", 65); // A
	cout << format("{}\n", 'A'); // A
}
