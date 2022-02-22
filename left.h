#ifndef LEFT_H_
#define LEFT_H_
#include "command.h"
#include <string>
class left : public Command {

	void run();
	friend std::istream& operator>>(std::istream& in, left& left);
};


#endif /* LEFT_H_ */
