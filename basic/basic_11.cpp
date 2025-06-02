#include <format>
#include <iostream>

int main()
{
	using std::cout, std::format;

	int x{ 26 };
	cout << format("|{:07d}|", x) << '\n';   // |0000026|
	cout << format("|{:+07d}|", x) << '\n';  // |+000026|
	cout << format("|{: 07d}|", -x) << '\n'; // |-000026|
	cout << format("|{:-07d}|", -x) << '\n'; // |-000026|
	cout << format("|{:07X}|", x) << '\n';   // |000001A|
	cout << format("|{:#07X}|", x) << '\n';  // |0X0001A|
}
