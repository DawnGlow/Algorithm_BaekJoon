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
