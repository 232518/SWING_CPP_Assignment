#ifndef Shape_H
#define Shape_H
using namespace std;

class Shape {
private:
	string NAME;
	int A;
	int B;
	int C;

public:
	Shape() {}
	Shape(int a, int b) {}
	Shape(int a, int b, int c) {}

	~Shape() {
		cout << "Shape ¼Ò¸ê " << NAME << " Å¬·¡½º" << endl;
	};
	
	int getA(int a);
	int getB(int b);
	int getC(int c);

	void AreaOval();
	void AreaLadder();
	void AreaRect();

	int setTwo(int a, int b);
	int setThree(int a, int b, int c);
};

#endif circle_H