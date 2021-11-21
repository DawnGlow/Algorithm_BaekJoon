//incompletion code
#include <iostream>
using namespace std;
int main(void) {
    int T;
    cin >> T;
    while (T--) {
        int k, n;
        cin >> k >> n;
        int array[k + 1][n + 1];
        for (int i = 0; i < n + 1; i++) {
            array[0][i] = i;
        }
        for (int i = 1; i < k + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                for (int z = 1; z <= j; z++) {
                    array[i][j] += array[i - 1][z];
                }
            }
        }
        cout << array[k][n] << "\n";
    }
}
