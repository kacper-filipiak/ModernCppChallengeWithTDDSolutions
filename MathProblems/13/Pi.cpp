#include "Pi.h"
#include <iostream>
#include <string>

void Pi::calculate(const int& precision)
{
		auto i{this->precission};
		auto sequence_member{0.0};
		auto result {this->pi_val}; 
		do{
			
				i++;
			sequence_member = (i % 2 == 0)? 4.0/(2*i + 1): -4.0/(2*i + 1);
			result += sequence_member;
		}while(std::abs(sequence_member) > std::pow(0.1, precision ));
		this->pi_val = result;
}
std::string Pi::get(const int& precision)
{
		if(precision > this->precission)
		{
				calculate(precision);
		}
		return cutPrecision(this->pi_val, precision);
}
std::string Pi::cutPrecision(const double& val, const int& precision)
{
		return std::to_string(val).substr(0 ,precision + 2);
}
