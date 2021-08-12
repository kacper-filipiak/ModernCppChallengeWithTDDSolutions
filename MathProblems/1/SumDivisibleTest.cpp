#include "gmock/gmock.h"
#include <gmock/gmock-matchers.h>
#include <stdexcept>
#include "SumDivisible.h"

using testing::Eq;
class SumDivisibleBy3And5 : public testing::Test{
		public:
				SumDivisible sumDivisible{{3,5}};
};
TEST_F(SumDivisibleBy3And5, GetSumOfDivisibleLessThan4){
		ASSERT_THAT(sumDivisible.get(4), 3);
}
TEST_F(SumDivisibleBy3And5, GetSumOfDivisibleLessThan6){
		ASSERT_THAT(sumDivisible.get(6), 14);
}
TEST_F(SumDivisibleBy3And5, GetSumWithNegativeLimit){
		ASSERT_THAT(sumDivisible.get(-19), -78);
}
TEST_F(SumDivisibleBy3And5, GetSumBasedOnPreviousCalculations){
		sumDivisible.get(4);
		ASSERT_THAT(sumDivisible.get(6), Eq(14));
}
TEST(SumDivisibleBy2And7, GetSumOfDivisibleLessThan11){
	SumDivisible sumDivisible({2, 7});
	ASSERT_THAT(sumDivisible.get(11), 37);
}
TEST_F(SumDivisibleBy3And5, GetSumWithLimitSameAsDividors){
		ASSERT_THAT(sumDivisible.get(3), Eq(3));
}
