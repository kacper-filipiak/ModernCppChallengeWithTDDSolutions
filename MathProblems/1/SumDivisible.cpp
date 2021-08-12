#include "SumDivisible.h"

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
		int sum =  divisibleMap.begin()->second;
		for(auto i = 0; i <= std::abs(limit); i++)
		{
			if(divisibleByNumber(i))
			{
				sum += i;
				divisibleMap.insert(divisibleMap.begin(), {i, sum});
			}
		}
		if(limit < 0) sum = (-sum);
	return sum;
}


