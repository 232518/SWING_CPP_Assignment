#include <iostream>
using namespace std;

class Shape {
private:
	string NAME;
	int A;	// 가로(사다리꼴 윗변)
	int B;	// 세로
	int C;	// 사다리꼴 밑변
public:
	Shape() {}	// Shape a
	Shape(int a, int b) {}	// Shape b
	Shape(int a, int b, int c) {}	// Shape c

	~Shape() {
		cout << "Shape 소멸 " << NAME << " 클래스" << endl;
	};


	int getA(int a) {	// A 값 리턴
		A = a;
		return A;
	}

	int getB(int b) {	// B 값 리턴
		B = b;
		return B;
	}

	int getC(int c) {	// C 값 리턴
		C = c;
		return C;
	}

	void AreaOval() {	// 타원의 넓이 출력 함수
		double Area;
		Area = (A/2) * (B/2) * (3.14);
		cout << "타원의 넓이는 " << Area << "이다." << endl;
		NAME = "CircleA";
	}

	void AreaLadder() {	// 사다리꼴 넓이 출력 함수
		int Area;
		Area = (A + C) * B / 2;
		cout << "사다리꼴의 넓이는 " << Area << "이다." << endl;
		NAME = "Ladder";
	}

	void AreaRect() {	// 사각형 넓이 출력 함수
		int Area;
		Area = A * B;
		cout << "사각형의 넓이는 " << Area << "이다." << endl;
		NAME = "Rectangular";
	}

	int setTwo(int a, int b) {	// 타원의 A, B 혹은 사각형의 A, B 설정해주는 함수
		getA(a);
		getB(b);
		
		return 0;
	}

	int setThree(int a, int b, int c) {	// 사다리꼴의 A, B, C 길이 설정해주는 함수
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