#include <iostream>
using namespace std;
main() {
    int a, b, i;
    cin >> a >> b;
    if (a >= b) {
        i = b;
    }
    else {
        i = a;
    }
    while (i) {
        if (a % i == 0 && b % i == 0) {
            cout << i << '\n';
            break;
        }
        else {
            i--;
        }
    }
    cout << a * b / i;
}
//놓친 케이스가 있는지 살펴보자
