#pragma once

#include "command.h"
#include <string>

class jump : public Command {
	void run();
	friend std::istream& operator>>(std::istream& in, jump& jump);
};