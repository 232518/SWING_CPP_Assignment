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
	~GameCharacter() { cout << "소멸자 실행" << endl << endl; };
};

void GameCharacter::menu() {
	int choice;

	cout << "========캐릭터 관리========" << endl;
	cout << "1. 캐릭터 생성" << endl;
	cout << "2. 캐릭터 복사" << endl;
	cout << "3. 캐릭터 정보 확인" << endl;
	cout << "4. 캐릭터 정보 수정" << endl;
	cout << "5. 종료" << endl;
	cout << "번호를 선택해주세요: ";
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
		cout << "잘못 입력하셨습니다. 다시 입력해주세요." << endl;
}

int GameCharacter::Set_Character() {
	cout << "생성할 캐릭터와 이름, 나이, 직업을 순서대로 입력해주세요.(공백으로 구분)" << endl;
	cout << "참고사항: 직업의 종류는 자유롭게!" << endl;
	cout << "--> ";
	cin >> name[p] >> age[p] >> job[p];
	cout << "캐릭터가 생성되었습니다." << endl;
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

	cout << "캐릭터가 복사되었습니다." << endl << endl;
}

GameCharacter::GameCharacter(const GameCharacter& g) {
	s = g.s;
}

void GameCharacter::Check_Character() {
	for (q = 0; q != p; q++) {
		cout << "******캐릭터 정보******" << endl;
		cout << "캐릭터 이름: " << name[q] << endl;
		cout << "캐릭터 나이: " << age[q] << endl;
		cout << "캐릭터 직업: " << job[q] << endl;
		cout << endl;
	}
}

void GameCharacter::Correction_Character() {
	int c;

	cout << "수정하고 싶은 캐릭터를 선택하세요: ";
	cin >> c;
	cout << endl << "설정하고 싶은 이름, 나이, 직업을 입력해주세요." << endl << "--> ";
	cin >> name[c - 1] >> age[c - 1] >> job[c - 1];
}

int main() {
	int i;

	GameCharacter game;

	for (i = 0; ; i++) {
		game.menu();
	}
}