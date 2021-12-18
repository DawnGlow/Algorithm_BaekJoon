#include <iostream>
using namespace std;
main () {
    int N, k = 2;
    cin >> N;
    while (N > 1) {
        if (N % k == 0) {
            cout << k << "\n";
            N /= k;
        }
        else {
            k++;
        }
    }
}

/*
Perfect code
*/
