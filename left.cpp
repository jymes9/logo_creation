
#include "left.h"

void left::run()
{
	glRotatef(value, 0, 0, 1);
}

std::istream& operator>>(std::istream& in, left& left)
{
	std::string line;
	getline(in, line);	
	left.value = stof(line);
	return in;
}
