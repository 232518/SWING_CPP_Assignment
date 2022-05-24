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

int Shape::getC(int c) {	// C �� ����
	C = c;
	return C;
}

void Shape::AreaOval() {	// Ÿ���� ���� ��� �Լ�
	double Area;
	Area = (A / 2) * (B / 2) * (3.14);
	cout << "Ÿ���� ���̴� " << Area << "�̴�." << endl;
	NAME = "CircleA";
}

void Shape::AreaLadder() {	// ��ٸ��� ���� ��� �Լ�
	int Area;
	Area = (A + C) * B / 2;
	cout << "��ٸ����� ���̴� " << Area << "�̴�." << endl;
	NAME = "Ladder";
}

void Shape:: AreaRect() {	// �簢�� ���� ��� �Լ�
	int Area;
	Area = A * B;
	cout << "�簢���� ���̴� " << Area << "�̴�." << endl;
	NAME = "Rectangular";
}

int Shape::setTwo(int a, int b) {	// Ÿ���� A, B Ȥ�� �簢���� A, B �������ִ� �Լ�
	getA(a);
	getB(b);

	return 0;
}

int Shape::setThree(int a, int b, int c) {	// ��ٸ����� A, B, C ���� �������ִ� �Լ�
	getA(a);
	getB(b);
	getC(c);

	return 0;
}