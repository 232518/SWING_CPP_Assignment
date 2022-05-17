#include <iostream>
using namespace std;

class Box {
private:
	char character = 42;

public:
	Box(int w, int h) {}	// 생성자

	void setFil(char f) {	// 문자 세팅
		character = f;
	}

	void setSize(int w, int h) {	// 사각형 크기 세팅
		int i, k;
		
		for (i = 1; i <= h; i++) {
			for (k = 1; k <= w; k++) {
				draw();
			}
			cout << endl;
		}
		cout << endl << endl;
	}

	void draw() {	// 사각형 출력
		cout << character;
	}
};

int main(void) {
	char caret(94);
	char asterisk(42);

	Box a(3, 4);
	a.setFil(asterisk);
	a.setSize(3, 4);

	Box b(6, 10);
	b.setFil(caret);
	b.setSize(6, 10);
}