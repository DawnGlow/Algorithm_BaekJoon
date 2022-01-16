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
