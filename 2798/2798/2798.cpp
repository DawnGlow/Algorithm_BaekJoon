#import <iostream>
using namespace std;
int main(void) {
    int N, M, max = 0;
    cin >> N >> M;
    int *arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int a = 0; a < N - 2; a++) {
        for (int b = a + 1; b < N - 1; b++) {
            for (int c = b + 1; c < N; c++) {
                int t = arr[a] + arr[b] + arr[c];
                if ((t > max) && (t <= M) ) {
                    max = t;
                }
            }
        }
    }
    cout << max;
}
/*
//수정한 부분
a의 범위를 N까지가 아니라 N-2까지, b의 범위를 N-1까지로 설정하면, 좀더 조건 탐색하는데 시간이 줄어든다.
*/
