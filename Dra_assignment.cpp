#include <iostream>
#include <cstdlib>   //���� ���� �Է��ϱ� ����
using namespace std;

int main(void) {
    srand((unsigned)time(NULL));   //���� ���� ���� �ð����� ���

    int num, num1, num2;
    int dra;
    num = rand() % 101;   //100������ ���� ���� ����

    cout << "������ �� : " << num << endl;
    cout << "Ư�� ��� ���� : ";
    cin >> num1;

    cout << "\n<Ư�� ����� ����ϴ� ���α׷�>" << endl;

    for (num2 = 0; num2 < num1; num2++)   /*������ �Է¹��� ��ŭ ���*/ {
        cout << "\n" << num2 << "��° Ư�� ��� : ";
        cin >> dra;
        cout << "<Ư�� ����� ����ϴ� ���α׷�>" << endl;

        int a;   //���ϱ� ��(���xa)
        for (a = 1; a <= num; a++) {
            if (a * dra <= num)   //���x���� random������ ���ų� ���� ��
                cout << a * dra << ",";   //���x���� ���
            else {
                continue;
            }
        }
        cout << "\n<Ư�� ��� ���� ����ϴ� ���α׷�>" << endl;

        for (a = 1; a <= num; a++) {
            if (a % dra != 0)   //a�� dra�� ������ �� 0�� �ƴϴ� => ���ϱ� ��(����)�� Ư�� ����� ������ �� 0�� �ƴϴ� => ������ �������� �ʴ´�. => ����� �ƴ�.
                cout << a << ",";
            else
                continue;
        }
    }
}