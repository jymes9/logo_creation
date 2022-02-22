#include "forward.h"

void forward::run()
{
	
	glBegin(GL_LINE_LOOP);
		glVertex3f(0.0f, 0.0f, 0.0f);                // Start
		glVertex3f(value, 0.0f, 0.0f);                  // End
	glEnd();
	glTranslatef(value, 0, 0);

}

std::istream& operator>>(std::istream& in, forward& forward)
{
	std::string line;
	getline(in, line);
	forward.value = stof(line);
	return in;
}
