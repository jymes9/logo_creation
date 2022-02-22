#ifndef JUMP_H_
#define JUMP_H_

#include "command.h"
#include <string>

class jump : public Command {

	void run();
	friend std::istream& operator>>(std::istream& in, jump& jump);
};

#endif /* JUMP_H_ */
