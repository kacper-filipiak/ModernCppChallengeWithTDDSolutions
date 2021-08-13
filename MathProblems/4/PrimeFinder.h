#ifndef PRIME_FINDER_H
#define PRIME_FINDER_H
#include <set>
#include <functional>
#include <stdexcept>

class PrimeFinder
{
		std::set<int, std::greater<int>> primes{2};

		bool isPrime(const int&);
		public:
		int find(const int&);
};
#endif
