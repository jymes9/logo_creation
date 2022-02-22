#include "right.h"

std::istream& operator>>(std::istream& in, right& right)
{
	std::string line;
	getline(in, line);
	right.value = stof(line);
	return in;
}

void right::run()
{
	glRotatef(value, 0, 0, -1);
}
