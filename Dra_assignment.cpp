#include <iostream>
#include <cstdlib>   //난수 값을 입력하기 위함
using namespace std;

int main(void) {
    srand((unsigned)time(NULL));   //난수 값을 현재 시간으로 사용

    int num, num1, num2;
    int dra;
    num = rand() % 101;   //100까지만 랜덤 범위 설정

    cout << "랜덤한 수 : " << num << endl;
    cout << "특정 배수 개수 : ";
    cin >> num1;

    cout << "\n<특정 배수만 출력하는 프로그램>" << endl;

    for (num2 = 0; num2 < num1; num2++)   /*개수를 입력받은 만큼 출력*/ {
        cout << "\n" << num2 << "번째 특정 배수 : ";
        cin >> dra;
        cout << "<특정 배수만 출력하는 프로그램>" << endl;

        int a;   //곱하기 값(배수xa)
        for (a = 1; a <= num; a++) {
            if (a * dra <= num)   //배수x값이 random값보다 같거나 작을 때
                cout << a * dra << ",";   //배수x값을 출력
            else {
                continue;
            }
        }
        cout << "\n<특정 배수 제외 출력하는 프로그램>" << endl;

        for (a = 1; a <= num; a++) {
            if (a % dra != 0)   //a를 dra로 나눴을 때 0이 아니다 => 곱하기 값(정수)을 특정 배수로 나눴을 때 0이 아니다 => 나누어 떨어지지 않는다. => 배수가 아님.
                cout << a << ",";
            else
                continue;
        }
    }
}