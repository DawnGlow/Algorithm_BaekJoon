//incompletion code
#import <iostream>
using namespace std;
bool check(int a, int b, int N) {
    if (N == 1) {
        return true;
    }
    if ((a > N / 3) && (a <= N * 2 / 3)  && (b > N / 3) && (b <= N * 2 / 3)) {
        return true;
    }
    else {
        if (check(a, b, N / 3)) {
            return true;
        }
        else {
            return false;
        }
    }
}
main () {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++ ) {
            if (check(i, j, N)) {
                cout << " ";
            }
            /*
            if ((i > N / 3) && (i <= N * 2 / 3)  && (j > N / 3) && (j <= N * 2 / 3)) {
                cout << " ";
            }
            */
            else {
                cout << "*";
            }
        }
        cout << '\n';
    }
}
