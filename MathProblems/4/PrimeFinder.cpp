#include "PrimeFinder.h"
#include <functional>
bool PrimeFinder::isPrime(const int& num)
{
		auto isPrimeNumber =  true;
		auto divided = num;
		if(num > *primes.begin())
		{
				for(int i = *primes.begin(); i < divided; i++)
				{
						if(isPrime(i))
						{
								primes.insert(primes.begin(), i);

								if(num % i == 0)
								{
										isPrimeNumber = false;
										break;
								}
						
								divided /= i;
						}
				}
		}
		else
		{
				auto find_res = primes.find(num);
				if( find_res == primes.end())
				{
					isPrimeNumber = false;
				}
		}
	return isPrimeNumber;
}
int PrimeFinder::find(const int& limit)
{
		for(auto i = limit; i > 1; i--)
		{
			if(isPrime(i)) return i;
		}
		throw(std::invalid_argument("To small or negative number passed as limit"));
}
