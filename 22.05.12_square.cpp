#include <iostream>
using namespace std;

class Box {
private:
	char character = 42;

public:
	Box(int w, int h) {}	// ������

	void setFil(char f) {	// ���� ����
		character = f;
	}

	void setSize(int w, int h) {	// �簢�� ũ�� ����
		int i, k;
		
		for (i = 1; i <= h; i++) {
			for (k = 1; k <= w; k++) {
				draw();
			}
			cout << endl;
		}
		cout << endl << endl;
	}

	void draw() {	// �簢�� ���
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