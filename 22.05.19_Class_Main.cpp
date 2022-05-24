#include <iostream>
using namespace std;

#include "22.05.19_Class_header_file.h"

int main(void) {
	Shape a;
	a.setTwo(10, 2);
	a.AreaOval();

	Shape b(10, 20);
	b.setTwo(10, 20);
	b.AreaRect();

	Shape c(3, 7, 4);
	c.setThree(3, 7, 4);
	c.AreaLadder();
	c.setThree(5, 10, 6);
	c.AreaLadder();

	return 0;
}