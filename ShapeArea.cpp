#include <iostream>
using namespace std;

class Shape {
private:
	string NAME;
	int A;
	int B;
	int C;

public:
	Shape() {};
	Shape(int a, int b) {};
	Shape(int a, int b, int c) {};
};

int main(void) {
	Shape a;
	Shape b(10, 20);
	Shape c(3, 7, 4);
}