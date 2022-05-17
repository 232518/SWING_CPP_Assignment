#include <iostream>
using namespace std;

void swap_value(int a, int b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;

	cout << "swap_value() �Լ� ���ο����� �� = a: " << a << " b: " << b << endl;
}

void swap_address(int* a, int* b) {
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	cout << "swap_address() �Լ� ���ο����� �� = a: " << *a << " b: " << *b << endl;
}

void swap_reference(int& a, int& b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;

	cout << "swap_reference() �Լ� ���ο����� �� = a: " << a << " b: " << b << endl;
}

int main(void) {
	int m_v = 3, n_v = 0;
	int m_a = 3, n_a = 0;
	int m_r = 3, n_r = 0;

	cout << "swap_value() �Լ� ���� ���� �� = m: " << m_v << " n: " << n_v << endl;
	swap_value(m_v, n_v);
	cout << "swap_value() �Լ� ���� ���� �� = m: " << m_v << " n: " << n_v << endl;
	cout << endl;

	cout << "swap_address() �Լ� ���� ���� �� = m: " << m_a << " n: " << n_a << endl;
	swap_address(&m_a, &n_a);
	cout << "swap_address() �Լ� ���� ���� �� = m: " << m_a << " n: " << n_a << endl;
	cout << endl;

	cout << "swap_reference() �Լ� ���� ���� �� = m: " << m_r << " n: " << n_r << endl;
	swap_reference(m_r, n_r);
	cout << "swap_reference() �Լ� ���� ���� �� = m: " << m_r << " n: " << n_r << endl;
}