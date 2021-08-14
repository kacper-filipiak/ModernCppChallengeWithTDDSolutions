#ifndef BIG_NUMBER_CONTAINER_H
#define BIG_NUMBER_CONTAINER_H
#include <cstdint>
#include <deque>
#include <string>

class BNC
{
	std::deque<uint32_t> number;

		public:
	BNC(const int32_t& value){
			number.assign({static_cast<uint32_t>(value)});
	};
	BNC(const std::string&);
	std::string getAsString();	
};
#endif
