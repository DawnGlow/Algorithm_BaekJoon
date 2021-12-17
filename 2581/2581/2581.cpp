#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool ck(int a) {
    if (a == 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}
main() {
    int M, N, sum = 0;
    cin >> M >> N;
    vector<int> a;
    for (int i = M; i <= N; i++) {
        if (ck(i)) {
            a.push_back(i);
        }
    }
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
    }
    if (a.size() == 0) {
        cout << -1;
    }
  //이부분에서 a.size() == 0 말고도 sum == 0으로도 조건 판별이 가능하다
    else {
        cout << sum << "\n";
        cout << a[0];
    }
}

/*
알고리즘은 잘 짠 코드.
for문을 N(큰수)부터 M(작은수)까지 돌렸으면 vector까진 쓸 필요는 없었다고 보인다.
*/
