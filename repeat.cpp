#include "repeat.h"
//--------Teammember 2 to complete this section (class definition) ----------

//----------------------------------------------------------------------------


std::istream& operator>>(std::istream& in, repeat& repeat)
{
	std::string line;
    std::string str;
	getline(in, line);
    repeat.value = stoi(line.substr(0, line.find(" ")));
    str = line.substr(line.find(" ")+1,line.length()-1);
    std::stringstream ss(str);
    ss >> repeat.prog;
   
	return in;
}

void repeat::run()
{
	for (int i = 1;i <= value; ++i)
        prog.run();
}
