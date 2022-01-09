#import <iostream>
using namespace std;
main() {
    int n, k;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        k = n - i;
        while (k) {
            cout << ' ';
            k--;
        }
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}
