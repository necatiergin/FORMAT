#include <iostream>
#include <format>
#include <string>
#include <list>

int main()
{
	std::string name{ "Ali Aksoy" };
	int id{ 78945 };
	double dval{ 54.213455 };
	std::string str;

	format_to(back_inserter(str), "|{} {} {:.2f}|", id, name, dval);

	std::cout << str << '\n';   // |78945 Ali Aksoy 54.21|

	//------------------------------------------------------------------------------------

	std::list<char> clist;

	format_to(front_inserter(clist), "|{} {} {:.2f}|", id, name, dval);

	for (auto c : clist)
		std::cout.put(c);		// |12.45 yoskA ilA 54987|
}
