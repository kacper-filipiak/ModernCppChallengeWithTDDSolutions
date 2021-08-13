#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "PrimeFinder.h"
#include <stdexcept>

using testing::Eq;

class FindPrimeUnderLimit : public testing::Test{
	public:
			PrimeFinder primeFinder;
};

TEST_F(FindPrimeUnderLimit, FindGreatestPrimeLessThan6){
		ASSERT_THAT(primeFinder.find(6), Eq(5));
}
TEST_F(FindPrimeUnderLimit, FindGreatterstPrimeLEssThan3){
		ASSERT_THAT(primeFinder.find( 3), Eq(3));
}
TEST_F(FindPrimeUnderLimit, ThrowExceptionOnToSmallOrNegativeNumber){
		EXPECT_THROW(primeFinder.find(1), std::invalid_argument);
		EXPECT_THROW(primeFinder.find(-10), std::invalid_argument);
}
