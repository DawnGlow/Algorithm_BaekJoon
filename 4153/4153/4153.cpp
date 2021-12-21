#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void swap(int &q, int &w) {
    int tmp = q;
    q = w;
    w = tmp;
}
main () {
    int x, y, z;
    while (1) {
        cin >> x >> y >> z;
        if (x == 0) {
            break;
        }
        if (y < z) {
            swap(y, z);
        }
        if (x < y) {
            swap(x, y);
        }
        if (y < z) {
            swap(y, z);
        }
        if ((x * x == y * y + z * z)) {
            cout << "right\n";
        }
        else {
            cout << "wrong\n";
        }
    }
}

/*
//개선해야할 부분
x, y, z를 크기순으로 정렬하고 계산했는데,
if(a==b+c || b==a+c || c==a+b) puts("right");//제곱한 값을 다시 a b c에 넣은 상태
이런식으로 or 연산을 했으면 좀더 깔끔했을 수도 있다.
*/
