//incompletion code
#include <iostream>
using namespace std;
main() {
    int N, M, min_i, min_j, B, W;
    cin >> N >> M;
    int min = N * M;
    char a[N][M];
    for (int i = 0; i < N - 8; i++) {
        for (int j = 0; j < M - 8; j++) {
            B = 0; W = 0;
            for (int p = 0; p < 8; p++) {
                for (int q = 0; q < 8; q++) {
                    if (a[i + p][j + q] == 'B') {
                        B++;
                    }
                    else {
                        W++;
                    }
                }
            }
            if (abs(B - W) < min) {
                min = abs(B - W);
            }
        }
    }
    cout << min / 2;
}
