#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "PrimeFinder.h"

using testing::Eq();

class FindPrimeUnderLimit : public testing::Test{
	public:
			PrimeFinder primeFinder;
};
