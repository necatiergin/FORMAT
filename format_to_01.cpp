#include <iostream>
#include <format>
#include <iterator>
#include <fstream>
#include <cmath>

int main()
{
	using namespace std;

	int x = 47802;
	format_to(ostream_iterator<char>(cout), "|{:>16X}|", x); // |		BABA|

	//-------------------------------------------------------------------------------------------- -

	ofstream ofs{ "output.txt" };

	if (!ofs) 	{
		cerr << "cannot create file\n";
		return 1;
	}

	for (int i = 0; i < 1000; ++i)
	{
		//format_to(ostream_iterator<char>(ofs), "{:>6} {}\n", i, sqrt(i));
		//format_to(ostream_iterator<char>(ofs), "{:<6} {}\n", i, sqrt(i));
		format_to(ostream_iterator<char>(ofs), "{:<6} {:>12.4f}\n", i, sqrt(i));
	}
}
