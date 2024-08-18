#include <iostream>
#include <format>
#include <locale>

int main()
{
	using namespace std;

	cout << format(locale{ "turkish" }, "{:L}", 3.12) << '\n';  // 3,12
	cout << format(locale{ "turkish" }, "{:L}", 456'877'123) << '\n';  //   456.877.123
	cout << format(locale{ "turkish" }, "{}", 456'877'123) << '\n';  //  456877123
	cout << format("{}", 456'877'123) << '\n';  //   456877123
}
