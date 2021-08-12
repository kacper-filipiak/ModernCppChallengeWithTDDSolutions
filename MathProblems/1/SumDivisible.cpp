#include "SumDivisible.h"
#include <cmath>

bool SumDivisible::divisibleByNumber(const int& number)
{
		auto divisible = false;
		for(const auto& elem : dividors)
		{
			if(number % elem == 0) 
			{
				divisible = true;
				break;
			}
		}
	return divisible;
}
int SumDivisible::get(const int& limit)
{
		int sum{};
		if(std::abs(limit) > divisibleMap.begin()->first)
		{
				sum = divisibleMap.begin()->first;
				for(auto i = divisibleMap.begin()->first + 1; i <= std::abs(limit); i++)
				{
					if(divisibleByNumber(i))
					{
						sum += i;
						divisibleMap.insert(divisibleMap.begin(), {i, sum});
					}
				}
		}else{
				auto iter = --divisibleMap.lower_bound(std::abs(limit));
				sum = iter->second;
		}
		
		if(limit < 0) sum = (-sum);
	return sum;
}


