#include <iostream>
using namespace std;
main () {
    int R;
    cin >> R;
    cout << fixed;
    cout.precision(6);
    cout << 3.14159265358979 * R * R << '\n' << 2 * R * R;
}
/*
실수했던 부분
출력값(넓이)의 정확도가 0.0001 이내인데, R의 값이 10000까지 이다. R의 제곱인 100000000이 파이에 곱해지므로,
그 만큼 파이의 정확한 값을 곱해줘야 했다.
*/
