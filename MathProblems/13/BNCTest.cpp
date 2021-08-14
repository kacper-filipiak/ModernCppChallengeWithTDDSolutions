#include "gmock/gmock.h"
#include <cmath>
#include <gtest/gtest-matchers.h>
#include "BNC.h"

class BigNumberContainer : public testing::Test{

		public:
				BNC bnc{2};
};

TEST(BigNumberContainerInitialization, initializeWithNumber){
	BNC bnc{1};	
}
TEST_F(BigNumberContainer, returnNumberAsString){
		ASSERT_THAT(bnc.getAsString(), testing::Eq("2"));
}
TEST_F(BigNumberContainer, assignSmallNumber){
		bnc = 3;
		ASSERT_THAT(bnc.getAsString(), testing::Eq("3"));
}
TEST(BigNumberContainerInitialization, DISABLED_initializeWithSmallNumberAsString){
		BNC bnc{"4"};
}
