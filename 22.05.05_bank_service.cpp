#include <iostream>
using namespace std;

int total(int* hana, int* oori, int* sinhan, int* kookmin) {
	int total;

	total = *hana + *oori + *sinhan + *kookmin;	//각 은행별 돈을 포인터로 받아 total에 더해준 뒤

	return total;	//total 값을 return 해준다.
}

void myaccounts(string* hana, string* oori, string* sinhan, string* kookmin, int* hana_money, int* oori_money, int* sinhan_money, int* kookmin_money) {
	cout << "---------------- 은행 별 계좌 정보 ----------------" << endl;

	cout << "|   " << *hana << "   |" << "|   " << *oori << "   |" << "|   " << *sinhan << "   |" << "|   " << *kookmin << "   |" << endl;
	cout << "|   " << *hana_money << "   |" << "|   " << *oori_money << "   |" << "|     " << *sinhan_money << "    |" << "|    " << *kookmin_money << "    |" << endl;

	cout << "---------------------------------------------------" << endl;
}

int main(void) {
	string bank_name[4] = { "하나", "우리", "신한", "국민" };
	int bank[4] = { 5000, 4000, 0, 10 };
	int total_money = total(&bank[0], &bank[1], &bank[2], &bank[3]);	//total 함수의 포인터로 각 자산 금액을 주소로 보내주고 total에서 return된 total의 값을 total_money에 저장시킨다.

	cout << "************** SWING 자산관리 서비스 **************" << endl;

	myaccounts(&bank_name[0], &bank_name[1], &bank_name[2], &bank_name[3], &bank[0], &bank[1], &bank[2], &bank[3]);	//은행 이름과 은행별 자산을 포인터로 각 주소를 적어주었다.
	cout << endl;

	cout << "현재 SWING 자산관리 서비스에 등록된 회원님의 총 자산은 " << total_money << "원 입니다." << endl;
	cout << "***************************************************" << endl;
}