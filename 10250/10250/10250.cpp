#include <iostream>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int i = 0; i++ < T;) {
        int H, W, N;
        cin >> H >> W >> N;
        if (N % H == 0) {
            cout << H * 100 + N / H << "\n";
        }
        else {
            cout << N % H * 100 + (N / H) + 1 << "\n";
        }
    }
}

/*
구현은 잘했다.
        cout.width(2);
        cout.fill('0');
        이 두문장은 숫자 출력의 형식을 지정해준다.
 하지만 이 문제는 단순히 *100을 하면 되는 문제라 크게 신경쓰지 않아도 x.
 횟수 반복에서는 for문보다 while문을 쓰는게 코드 길이를 줄이는데 도움이 된다.
*/
