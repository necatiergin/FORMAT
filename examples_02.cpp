#include <iostream>
#include <format>

int main()
{
	using std::string, std::cout, std::format;

	string name{ "Necati Ergin" };
	cout << format("|{}|", name) << '\n'; // Necati Ergin

	name = { "murat hepeyiler" };
	cout << format("{}", name) << '\n'; //	murat hepeyiler
	cout << format("|{:24s}|", name) << '\n'; //    |murat hepeyiler         |   
	cout << format("|{:<24s}|", name) << '\n'; //   |murat hepeyiler         |
	cout << format("|{:>24s}|", name) << '\n'; //   |	  murat hepeyiler|
	cout << format("|{:^24s}|", name) << '\n'; //   |     murat hepeyiler    |
	cout << format("|{:.^24s}|", name) << '\n'; //  |.....murat hepeyiler....|
	cout << format("|{:<24.5s}|", name) << '\n'; // |murat		         |
	cout << format("|{:+>24.5s}|", name) << '\n'; //|+++++++++++++++++++murat|
	cout << format("|{:!^24.5s}|", name) << '\n'; //|!!!!!!!!!!murat!!!!!!!!!|
}
