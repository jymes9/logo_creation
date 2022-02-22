#ifndef RIGHT_H_
#define RIGHT_H_

#include "command.h"
#include <string>
class right : public Command {

	void run();
	friend std::istream& operator>>(std::istream& in, right& right);
};

#endif /* RIGHT_H_ */
