#include "BinaryEncoder.h"
#include <iostream>

std::deque<bool> BinaryEncoder::encode(const std::string& value)
{
		std::string s{ };	
		std::transform(value.begin(), value.end(), std::back_insert_iterator<std::string>(s), [](const char& ch){ return ch - '0';});
		std::deque<bool> deq{};
		while(s != "")
		{
			deq.push_front(static_cast<int>(s.back() )%2==0? 0: 1);	
			divide(s);
		}
	return deq;
}
void BinaryEncoder::divide(std::string& value)
{
		auto pass = 0;
		auto rec_pass = 0;
		for(auto& s: value)
		{
			if(static_cast<int>(s ) % 2 == 1) pass = 5;
			else pass = 0;
			s = static_cast<int>( s ) / 2 + rec_pass ;
			rec_pass = pass;
		}
		auto trim_pos = value.find_first_not_of('\0');
		if(trim_pos == std::string::npos) value = "";
		else value = value.substr( trim_pos);
}
uint32_t BinaryEncoder::decode(const std::deque<bool>& deq)
{
		uint32_t res { 0};
		auto multiplicator = 1;
	for(auto digit = deq.crbegin(); digit != deq.crend(); digit++)
	{
		if(*digit)
		{
				res += multiplicator;
		}
		multiplicator *= 2;
	}
	return res;
}


