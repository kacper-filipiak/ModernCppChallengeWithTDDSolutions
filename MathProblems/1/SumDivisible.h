#ifndef SUM_DIVISIBLE_H
#define SUM_DIVISIBLE_H
#include <functional>
#include <cmath>
#include <map>
#include <vector>

class SumDivisible
{
		std::vector<int> dividors;
		bool divisibleByNumber(const int&);
		std::map<int, int, std::greater<int>> divisibleMap{{0, 0}};
public:
		SumDivisible(std::vector<int> vec): dividors(vec){}
	int get(const int&);


};
#endif
