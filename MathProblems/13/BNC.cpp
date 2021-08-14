#include "BNC.h"
#include <algorithm>
#include <iterator>
#include <string>

std::string BNC::getAsString()
{
		return std::to_string(number.front());
}

BNC::BNC(const std::string& value)
{
		std::string s{};
		std::transform(value.begin(), value.end(), std::back_insert_iterator<std::string>(s), [](const char& ch){ return ch - '0';});
}
