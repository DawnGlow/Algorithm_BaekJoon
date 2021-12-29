//틀린문제
#include <iostream>
#include <cmath>
using namespace std;
void hanoi(int n, int start, int mid, int end) {
	if (n == 1) cout << start << " " << end << '\n';
	else {
		hanoi(n - 1, start, end, mid);
		cout << start << " " << end << '\n';
		hanoi(n - 1, mid, start, end);
	}
}

main () {
    int N;
    cin >> N;
    cout << (int)pow(2, N) - 1 << '\n';
    hanoi(N, 1, 2, 3);
}
