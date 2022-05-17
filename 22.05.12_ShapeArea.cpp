#include <iostream>
using namespace std;

class Shape {
private:
	string NAME;
	int A;	// ����(��ٸ��� ����)
	int B;	// ����
	int C;	// ��ٸ��� �غ�
public:
	Shape() {}	// Shape a
	Shape(int a, int b) {}	// Shape b
	Shape(int a, int b, int c) {}	// Shape c

	~Shape() {
		cout << "Shape �Ҹ� " << NAME << " Ŭ����" << endl;
	};


	int getA(int a) {	// A �� ����
		A = a;
		return A;
	}

	int getB(int b) {	// B �� ����
		B = b;
		return B;
	}

	int getC(int c) {	// C �� ����
		C = c;
		return C;
	}

	void AreaOval() {	// Ÿ���� ���� ��� �Լ�
		double Area;
		Area = (A/2) * (B/2) * (3.14);
		cout << "Ÿ���� ���̴� " << Area << "�̴�." << endl;
		NAME = "CircleA";
	}

	void AreaLadder() {	// ��ٸ��� ���� ��� �Լ�
		int Area;
		Area = (A + C) * B / 2;
		cout << "��ٸ����� ���̴� " << Area << "�̴�." << endl;
		NAME = "Ladder";
	}

	void AreaRect() {	// �簢�� ���� ��� �Լ�
		int Area;
		Area = A * B;
		cout << "�簢���� ���̴� " << Area << "�̴�." << endl;
		NAME = "Rectangular";
	}

	int setTwo(int a, int b) {	// Ÿ���� A, B Ȥ�� �簢���� A, B �������ִ� �Լ�
		getA(a);
		getB(b);
		
		return 0;
	}

	int setThree(int a, int b, int c) {	// ��ٸ����� A, B, C ���� �������ִ� �Լ�
		getA(a);
		getB(b);
		getC(c);

		return 0;
	}
};

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