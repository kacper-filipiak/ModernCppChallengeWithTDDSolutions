#ifndef PI_H
#define PI_H
#include <cmath>

#include <string>
#include <vector>
class Pi
{
		double pi_val{4.0};
		int precission{};
		void calculate(const int&);
		std::string cutPrecision(const double&, const int&);
public:
		std::string get(const int&);
};
#endif
