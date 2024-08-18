#include <iostream>
#include <format>
#include <string>

int main()
{
	using namespace std;

	string str;

	for (char c = 'A'; c <= 'Z'; ++c)
	{
		format_to(back_inserter(str), "{{{0}, {0:d}}}\n", c);
	}

	cout << str << '\n';
}
