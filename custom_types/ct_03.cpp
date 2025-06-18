#include <format>
#include <iostream>
#include "date.h"



struct Point {
	int x, y;
};



template <>
struct std::formatter<Point> {

	char presentation = 'd';
	//std::format_parse_context::iterator parse(std::format_parse_context & ctx)
	constexpr auto parse(std::format_parse_context& ctx)
	{

		auto it = ctx.begin();
		auto end = ctx.end();

		if (it != end && *it != '}') {
			if (*it != 'd' && *it != 'h')
				throw std::format_error{ "invalid format!" };

			presentation = *it;
			++it;
		}

		if (it != end && *it != '}')
			throw std::format_error{ "error in format string!" };

		return it;
	}


	auto format(const Point& p, auto& ctx)const
	{
		if (presentation == 'd') {
			return std::format_to(ctx.out(), "({}, {})", p.x, p.y);
		}
		else {
			return std::format_to(ctx.out(), "({:#X}, {:#X})", p.x, p.y);
		}
	}

};


int main()
{
	using namespace std;

	Point pt1{ 2, 6 }, pt2{ 15, 12 }, pt3{ 3, 7 };

	std::cout << format("{:d} {:h}  {}", pt1, pt2, pt3) << '\n';
}
