#include <iostream>
using namespace std;
main () {
    int T, m(0);
    cin >> T;
    int a[T];
    for (int i = 0; i < T; i++) {
        cin >> a[i];
        if (a[i] > m) {
            m = a[i];
        }
    }
    int b[m + 1];
    for (int i = 2; i <= m; i++) {
	        b[i] = true;
        }
    for (int i = 2; i * i <= m; i++) {
		    if (b[i]) {
			    for (int j = i * i; j <= m; j += i) {
			        b[j] = false;
			    }
		    }
	    }
    for (int i = 0; i < T; i++) {
        int f = a[i] / 2;
        for (int j = f; j > 1; j--) {
            if (b[j] == true && b[a[i] - j] == true) {
                cout << j << " " << a[i] - j << "\n";
                break;
            }
        }
    }
}

/*
최대 사이즈가 10000이라 그냥 전부다 배열을 만들어 봤지만, 실행시간이 오래걸려 사이즈의 최댓값에 해당하는 배열만 만들었다.
에라토스테네스의 체를 제외한 루트를 씌워 확인하는 방법은 실행시간이 오래걸린다.
수정할 부분은 없을듯. (굳이 있다면 b[j] == true && b[a[i] - j] == true 에서 == 빼고 바로 b[j] && b[a[i] - j]로 해도 된다는 것
*/
