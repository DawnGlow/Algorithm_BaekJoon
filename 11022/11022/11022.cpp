#include <iostream>
using namespace std;
main() {
    int T, a, b;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << '\n';
    }
}
