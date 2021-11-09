#include <iostream>
using namespace std;
main() {
    ios_base::sync_with_stdio(false);
    int num;
    double max = 0;
    double sum = 0;
    cin >> num;
    double array[num];
    for (int i = 0; i++ < num;) {
        cin >> array[i];
        if (array[i] > max) {
            max = array[i];
        }
    }
    for (int i = 0; i++ < num;) {
        array[i] = array[i] / max * 100.0;
        sum += array[i];
    }
    cout << sum / (double)num;
}
// 고민해볼 문제
/*
비교를 할때는 초기화를 꼭 해주자.
cin.tie(NULL)은 조심해서 쓰자.
나누기 과정에서 몫을 구할때는 제외하곤 double을 이용하자.
*/
