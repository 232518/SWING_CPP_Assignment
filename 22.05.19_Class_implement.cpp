#include <iostream>
using namespace std;

#include "22.05.19_Class_header_file.h"

int Shape::getA(int a) {
	A = a;
	return A;
}

int Shape::getB(int b) {
	B = b;
	return B;
}

int Shape::getC(int c) {	// C 값 리턴
	C = c;
	return C;
}

void Shape::AreaOval() {	// 타원의 넓이 출력 함수
	double Area;
	Area = (A / 2) * (B / 2) * (3.14);
	cout << "타원의 넓이는 " << Area << "이다." << endl;
	NAME = "CircleA";
}

void Shape::AreaLadder() {	// 사다리꼴 넓이 출력 함수
	int Area;
	Area = (A + C) * B / 2;
	cout << "사다리꼴의 넓이는 " << Area << "이다." << endl;
	NAME = "Ladder";
}

void Shape:: AreaRect() {	// 사각형 넓이 출력 함수
	int Area;
	Area = A * B;
	cout << "사각형의 넓이는 " << Area << "이다." << endl;
	NAME = "Rectangular";
}

int Shape::setTwo(int a, int b) {	// 타원의 A, B 혹은 사각형의 A, B 설정해주는 함수
	getA(a);
	getB(b);

	return 0;
}

int Shape::setThree(int a, int b, int c) {	// 사다리꼴의 A, B, C 길이 설정해주는 함수
	getA(a);
	getB(b);
	getC(c);

	return 0;
}