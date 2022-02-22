#ifndef REPEAT_H_
#define REPEAT_H_

#include "command.h"
#include "program.h"

class repeat :
	public Command, public Program
{
private:
	Program prog;
public:
	void run();
	friend std::istream& operator>>(std::istream& in, repeat& repeat);
};

#endif /* REPEAT_H_ */
