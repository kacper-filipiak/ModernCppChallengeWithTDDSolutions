#include "gmock/gmock.h"
#include <cmath>
#include <gtest/gtest-matchers.h>
#include <gtest/gtest.h>
#include "BNC.h"
#include "BinaryEncoder.h"

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
class BinaryEncoding : public testing::Test{
		public:
				BinaryEncoder encoder;
};
TEST_F(BinaryEncoding, EncodeNumberUnder2To32ndPower){
		EXPECT_THAT(encoder.encode("342534"), testing::Eq(std::deque<bool>{1,0,1,0,0,1,1,1,0,1,0,0,0,0,0,0,1,1,0}));
		ASSERT_THAT(encoder.encode("2345343"), testing::Eq(std::deque<bool>{1,0,0,0,1,1,1,1,0,0,1,0,0,1,0,1,1,1,1,1,1,1}));
}
TEST_F(BinaryEncoding, DecodeNumberUnder2To32ndPower){

		auto deq = encoder.encode("342534");

		ASSERT_THAT(encoder.decode( deq ), testing::Eq(342534));
}
