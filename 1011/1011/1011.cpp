//못푼문제
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int test_case = 0; test_case < T; test_case++) {
		double x, y, result;
		cin >> x >> y;

		double i = 1;
		for (;; i++) {
			if (y - x < i*i)
				break;
		}

		//거리가 i-1의 제곱수일때
		if (y - x == (i - 1)*(i - 1)) {
			result = 2 * (i - 1) - 1;
		}
		//거리가 i-1의 제곱수와 중간값 사이에 있을 때
		else if (y - x < ((i - 1)*(i - 1) + i * i) / 2) {
			result = 2 * (i - 1);
		}
		//거리가 중간값과 i의 제곱수 사이에 있을 때
		else {
			result = 2 * i - 1;
		}
		cout << result << '\n';
	}
}
// 귀납적으로 풀었으면 쉽게 풀었을 문제
// 대칭적으로 숫자가 나온다는 접근은 옳았음.
// 제곱수에 대해 접근하지 못한점이 못풀었던 이유.
