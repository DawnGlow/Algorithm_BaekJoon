#include <iostream>
using namespace std;
main () {
    int A, B, C, D, E[10] = { 0 };
    cin >> A >> B >> C;
    D = A * B * C;
    while (D != 0) {
        E[D % 10]++;
        D /= 10;
    }
    for (int Y : E) {
        cout << Y << "\n";
        Y++;
    }
}
/*
D라는 변수를 굳이 생성하지 않고 A = A * B * C로 진행하면 메모리를 좀더 아낄 수 있었다.
using namespace std보단 std::cin, std::cout을 쓰자.(cin과 cout이 많이 없을때)
or using std::cout using std::cin을 써보자.
*/
