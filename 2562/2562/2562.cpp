#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int max;
    int number;
    int input;
    for (int i = 0; i < 9; i++) {
        cin >> input;
        if (input > max) {
            max = input;
            number = i + 1;
        }

    }
    /* 아래와 같이 작성해도 된다
    for (int i = 0; i++ < 9;) {
        cin >> input;
        if (input > max) {
            max = input;
            number = i;
        }

    }
    */
    cout << max << "\n";
    cout << number;
}
/*
c/c++에서는 선언된 변수는 0으로 초기화된다. 따라서 초기 input을 max에 따로 저장할 필요가 없다. 또한
cout을 두번 쓰지말고 한번에 묵어 쓰자.
원래 코드
#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    int max;
    int number(1);
    int input;
    cin >> input;
    max = input;
    for (int i = 2; i <= 9; i++) {
        cin >> input;
        if (input > max) {
            max = input;
            number = i;
        }

    }
    cout << max << "\n";
    cout << number;
}
*/