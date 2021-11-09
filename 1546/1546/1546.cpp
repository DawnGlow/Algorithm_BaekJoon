#include <iostream>
using namespace std;
main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    int max;
    double sum;
    cin >> num;
    int array[num];
    for (int i = 0; i++ < num;) {
        cin >> array[i];
    }
    for (int i = 0; i++ < num;) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    for (int i = 0; i++ < num;) {
        sum += (double)array[i] / (double)max * 100.0 ;
    }
    cout << fixed;
	cout.precision(6);
    cout << sum / static_cast<double>(num);
}