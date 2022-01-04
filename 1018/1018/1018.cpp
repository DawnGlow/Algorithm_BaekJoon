//incompletion code
#include <iostream>
#include <algorithm>
using namespace std;
main() {
    int N, M, B, W;
    cin >> N >> M;
    int min = 64;
    char a[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> a[i][j];
        }
    }
    char k[8][8] = {
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
    };
    char l[8][8] = {
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
    };
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            B = 0; W = 0;
            for (int p = 0; p < 8; p++) {
                for (int q = 0; q < 8; q++) {
                    if (a[i + p][j + q] != k[p][q]) {
                        B++;
                    }
                    if (a[i + p][j + q] != l[p][q]) {
                        W++;
                    }
                }
            }
            if (B < min || W < min) {
                if (B < W) {
                    min = B;
                }
                else {
                    min = W;
                }
                //위코드는 algorithm 헤더의 min함수를 이용해 줄여보자 
            }
        }
    }
    cout << min;
}

/*
배열을 초기화 하여 비교한다는 접근은 좋았다.
개선해야할 점은, char형 2차열 배열 말고 string 1차 배열을 만들면 코드가 좀더 깔끔해진다.
또한 min의 값은 64를 넘지 않는 다는 걸 이용하여 초기값을 N * M이 아닌 8 * 8로 설정했으면 더 나았을 것이다.
B 와 W 중 작은값을 min에 넣는 코드에서 min 함수를 이용하면 코드가 간결해진다.
*/
