#include <iostream>
using namespace std;

int total(int* hana, int* oori, int* sinhan, int* kookmin) {
	int total;

	total = *hana + *oori + *sinhan + *kookmin;	//�� ���ະ ���� �����ͷ� �޾� total�� ������ ��

	return total;	//total ���� return ���ش�.
}

void myaccounts(string* hana, string* oori, string* sinhan, string* kookmin, int* hana_money, int* oori_money, int* sinhan_money, int* kookmin_money) {
	cout << "---------------- ���� �� ���� ���� ----------------" << endl;

	cout << "|   " << *hana << "   |" << "|   " << *oori << "   |" << "|   " << *sinhan << "   |" << "|   " << *kookmin << "   |" << endl;
	cout << "|   " << *hana_money << "   |" << "|   " << *oori_money << "   |" << "|     " << *sinhan_money << "    |" << "|    " << *kookmin_money << "    |" << endl;

	cout << "---------------------------------------------------" << endl;
}

int main(void) {
	string bank_name[4] = { "�ϳ�", "�츮", "����", "����" };
	int bank[4] = { 5000, 4000, 0, 10 };
	int total_money = total(&bank[0], &bank[1], &bank[2], &bank[3]);	//total �Լ��� �����ͷ� �� �ڻ� �ݾ��� �ּҷ� �����ְ� total���� return�� total�� ���� total_money�� �����Ų��.

	cout << "************** SWING �ڻ���� ���� **************" << endl;

	myaccounts(&bank_name[0], &bank_name[1], &bank_name[2], &bank_name[3], &bank[0], &bank[1], &bank[2], &bank[3]);	//���� �̸��� ���ະ �ڻ��� �����ͷ� �� �ּҸ� �����־���.
	cout << endl;

	cout << "���� SWING �ڻ���� ���񽺿� ��ϵ� ȸ������ �� �ڻ��� " << total_money << "�� �Դϴ�." << endl;
	cout << "***************************************************" << endl;
}