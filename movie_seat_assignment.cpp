#include <iostream>
using namespace std;

int main(void) {
	int reser;	//���� �Է�
	int seat1, seat2;	//�¼� ��, ��
	int s[3][10] = {};	//�迭(��ü �¼�)

	cout << "�¼� �����Ͻðڽ��ϱ�?(0�̳� 1����)";
	cin >> reser;
	cout << endl;

	while (reser == 1) {
		cout << "1 2 3 4 5 6 7 8 9 10" << endl;
		cout << "-------------------------------------" << endl;
		for (int k = 0; k < 3; k++) {	//�迭 ���
			for (int i = 0; i < 10; i++) {
				cout << s[k][i] << " ";
			}
			cout << endl;
		}
		cout << "�, ���° �¼��� �����Ͻðڽ��ϱ�?";
		cin >> seat1;	//��
		cin >> seat2;	//��
		
		if (s[seat1 - 1][seat2 - 1] == 0) { //�ε����� 0���� �����ϱ� ������ �Է¹��� ����� ��Ÿ������ 1�� ���־�� ��,
			s[seat1 - 1][seat2 - 1] = 1;	//�Է¹��� ���� ���� 0�̾��� �¼��� 1�� ��ȯ
			cout << "����Ǿ����ϴ�." << endl;
			cout << endl;

			//�Է¹��� �¼��� ��ġ Ȯ��
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "-------------------------------------" << endl;
			for (int k = 0; k < 3; k++) {
				for (int i = 0; i < 10; i++) {
					cout << s[k][i] << " ";
				}
				cout << endl;
			}
		}

		//���� �̹� ����� �ڸ��� �������� ��
		else if (s[seat1 - 1][seat2 - 1] == 1) {
			cout << "�̹� ����� �ڸ��Դϴ�." << endl;
			cout << endl;
		}

		cout << "�¼� �����Ͻðڽ��ϱ�?(0�̳� 1����)";
		cin >> reser;
		cout << endl;
	}

	if (reser == 0)	
		cout << "�¼� ���� ����" << endl;

	return 0;
}