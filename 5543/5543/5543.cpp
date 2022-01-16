#import <iostream>
#import <algorithm>
using namespace std;
main() {
    int m = 2000, t, a, b;
    for (int i = 0; i < 3; i++) {
        cin >> t;
        if (m > t) {
            m = t;
        }
    }
    cin >> a >> b;
    a = min(a, b);
    cout << m + a - 50;
}
// 후위연산자는 pre-value의 사본이므로 l-value가 될 수 없다.
