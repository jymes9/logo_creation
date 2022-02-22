#include "jump.h"

void jump::run()
{
	glTranslatef(value, 0, 0);
}

std::istream& operator>>(std::istream& in, jump& jump)
{
	std::string line;
	getline(in, line);
	jump.value = stof(line);
	return in;
}
