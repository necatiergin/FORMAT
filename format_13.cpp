#include <iostream>
#include <format>
#include <vector>

int main()
{
	using namespace std;

	int x{ 65234 };
	double dval = 123.654;

	const char* p{ "{:#X} {:.2f}" };
	const auto n = formatted_size(p, x, dval); // formatted string size

	vector<char> buf(n);

	format_to(buf.begin(), p, x, dval);

	for (auto c : buf)
		cout << c << ' ';   // 0 X F E D 2   1 2 3 . 6 5
}
