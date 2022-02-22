#include "repeat.h"
#include "program.h"

Program::Program()
{
}

void Program::run() {
	for (const auto& command : cmds) //loop through the different commands
		command->run();

}
Program::~Program()
{
    for (auto obj : cmds)	// loop through commands vector, deleting objects
        delete obj;
}

std::istream& operator>>(std::istream& in, Program& prog)
{
	std::string input;
	while (!in.eof()) {
		in >> input >> std::ws;// take input and eatup trailing whitespace
		if (input == "LEFT") {
			Left* ob = new Left;
			in >> *ob;			//send value to left object
			prog.cmds.push_back(ob); //add left command to commands vector

		}
		else if (input == "RIGHT") {
			Right* ob = new Right;
			in >> *ob;			//send value to right object
			prog.cmds.push_back(ob); //add right command to commands vector

		}
		else if (input == "JUMP") {
			Jump* ob = new Jump;
			in >> *ob;		//send value to jump object	
			prog.cmds.push_back(ob);  //add jump command to commands vector

		}
		else if (input == "FORWARD") {
			Forward* ob = new Forward;
			in >> *ob;		//send value to forward object
			prog.cmds.push_back(ob); //add forward command to commands vector

		}
		else if (input == "REPEAT") {
			Repeat* ob = new Repeat;
			in >> *ob;		//transfer control to repeat object
			prog.cmds.push_back(ob); //add repeat command to commands vector
		}
		else if (input == "]") //check for closing parentheses
				break;			
		else {
			std::cerr << "Unknown command: "<<input << std::endl; //exit on any wrong input i.e double spaces, incorrect commands
			exit(EXIT_FAILURE);
		}
	}
	return in;
}