#include <iostream>
using namespace std;

int main(void) {
	int reser;	//예약 입력
	int seat1, seat2;	//좌석 열, 행
	int s[3][10] = {};	//배열(전체 좌석)

	cout << "좌석 예약하시겠습니까?(0이나 1선택)";
	cin >> reser;
	cout << endl;

	while (reser == 1) {
		cout << "1 2 3 4 5 6 7 8 9 10" << endl;
		cout << "-------------------------------------" << endl;
		for (int k = 0; k < 3; k++) {	//배열 출력
			for (int i = 0; i < 10; i++) {
				cout << s[k][i] << " ";
			}
			cout << endl;
		}
		cout << "몇열, 몇번째 좌석을 예약하시겠습니까?";
		cin >> seat1;	//열
		cin >> seat2;	//행
		
		if (s[seat1 - 1][seat2 - 1] == 0) { //인덱스는 0부터 시작하기 때문에 입력받은 값대로 나타내려면 1씩 빼주어야 함,
			s[seat1 - 1][seat2 - 1] = 1;	//입력받은 값에 따라 0이었던 좌석을 1로 변환
			cout << "예약되었습니다." << endl;
			cout << endl;

			//입력받은 좌석의 위치 확인
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "-------------------------------------" << endl;
			for (int k = 0; k < 3; k++) {
				for (int i = 0; i < 10; i++) {
					cout << s[k][i] << " ";
				}
				cout << endl;
			}
		}

		//만약 이미 예약된 자리를 선택했을 때
		else if (s[seat1 - 1][seat2 - 1] == 1) {
			cout << "이미 예약된 자리입니다." << endl;
			cout << endl;
		}

		cout << "좌석 예약하시겠습니까?(0이나 1선택)";
		cin >> reser;
		cout << endl;
	}

	if (reser == 0)	
		cout << "좌석 예약 종료" << endl;

	return 0;
}