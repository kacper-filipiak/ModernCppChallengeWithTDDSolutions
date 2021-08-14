#ifndef BINARY_ENCODER_H
#define BINARY_ENCODER_H

#include <string>
#include <deque>
#include <algorithm>
#include <iterator>
#include <functional>

class BinaryEncoder
{
		void divide(std::string&);
public:
		std::deque<bool> encode(const std::string&);

		uint32_t decode(const std::deque<bool>&);
};
#endif
