#ifndef FORWARD_H_
#define FORWARD_H_

#include "command.h"
#include <string>
class forward :public Command{
	void run();
	friend std::istream& operator>>(std::istream& in, forward& forward);
};


#endif /* FORWARD_H_ */
