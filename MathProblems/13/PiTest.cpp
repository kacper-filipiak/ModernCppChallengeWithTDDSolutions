#include "gmock/gmock.h"
#include <cmath>
#include "Pi.h"

using testing::Eq;

class ComputePi : public testing::Test{
public:
	Pi pi;

};

TEST_F(ComputePi, GetPiWithTwoDigitsOfPrecision){
	ASSERT_THAT(pi.get(2), Eq("3.14"));
}
TEST_F(ComputePi, GetPiWithOneDigitsOfPrecision){
		ASSERT_THAT(pi.get(1), Eq("3.1"));
}
TEST_F(ComputePi, DISABLED_GetPiWithBigPrecision){
	ASSERT_THAT(pi.get(8), Eq("3.14159265"));
}
