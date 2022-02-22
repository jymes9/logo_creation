#ifndef PROGRAM_H_
#define PROGRAM_H_

#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <vector>
#include "left.h"
#include "right.h"
#include "forward.h"
#include "jump.h"
#include <string>
#include <sstream>

class Program {
	friend std::istream& operator>>(std::istream& in, Program& prog);
private:
	std::vector<Command*> cmds;
public:
	Program();
	void run();
	~Program();
};

#endif /* PROGRAM_H_ */ 