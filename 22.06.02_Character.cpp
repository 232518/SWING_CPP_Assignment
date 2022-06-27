#include <iostream>
#include <stdlib.h>
using namespace std;

class GameCharacter {
private:
	string name[100];
	string age[100];
	string job[100];
	int q = 0;
	int p = 0;
	int n;
	int s = 0;

public:
	void menu();
	int Set_Character();
	void Copy_Character();
	GameCharacter() { s = 0; }
	GameCharacter(const GameCharacter& g);
	void Check_Character();
	void Correction_Character();
	~GameCharacter() { cout << "�Ҹ��� ����" << endl << endl; };
};

void GameCharacter::menu() {
	int choice;

	cout << "========ĳ���� ����========" << endl;
	cout << "1. ĳ���� ����" << endl;
	cout << "2. ĳ���� ����" << endl;
	cout << "3. ĳ���� ���� Ȯ��" << endl;
	cout << "4. ĳ���� ���� ����" << endl;
	cout << "5. ����" << endl;
	cout << "��ȣ�� �������ּ���: ";
	cin >> choice;
	cout << endl;

	if (choice == 1) {
		Set_Character();
	}

	else if (choice == 2) {
		Copy_Character();
	}

	else if (choice == 3) {
		Check_Character();
	}

	else if (choice == 4) {
		Correction_Character();
	}

	else if (choice == 5) {
		exit(1);
	}

	else
		cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
}

int GameCharacter::Set_Character() {
	cout << "������ ĳ���Ϳ� �̸�, ����, ������ ������� �Է����ּ���.(�������� ����)" << endl;
	cout << "�������: ������ ������ �����Ӱ�!" << endl;
	cout << "--> ";
	cin >> name[p] >> age[p] >> job[p];
	cout << "ĳ���Ͱ� �����Ǿ����ϴ�." << endl;
	cout << endl << endl;
	p++;

	return p;
}

void GameCharacter::Copy_Character() {
	GameCharacter src;
	GameCharacter dest(src);
	n = p - 1;

	name[p] = name[n];
	age[p] = age[n];
	job[p] = job[n];

	p++;

	cout << "ĳ���Ͱ� ����Ǿ����ϴ�." << endl << endl;
}

GameCharacter::GameCharacter(const GameCharacter& g) {
	s = g.s;
}

void GameCharacter::Check_Character() {
	for (q = 0; q != p; q++) {
		cout << "******ĳ���� ����******" << endl;
		cout << "ĳ���� �̸�: " << name[q] << endl;
		cout << "ĳ���� ����: " << age[q] << endl;
		cout << "ĳ���� ����: " << job[q] << endl;
		cout << endl;
	}
}

void GameCharacter::Correction_Character() {
	int c;

	cout << "�����ϰ� ���� ĳ���͸� �����ϼ���: ";
	cin >> c;
	cout << endl << "�����ϰ� ���� �̸�, ����, ������ �Է����ּ���." << endl << "--> ";
	cin >> name[c - 1] >> age[c - 1] >> job[c - 1];
}

int main() {
	int i;

	GameCharacter game;

	for (i = 0; ; i++) {
		game.menu();
	}
}