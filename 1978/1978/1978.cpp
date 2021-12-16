#include <iostream>
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
main () {
    int N, i(0), c(0);
    cin >> N;
    while (i++ < N) {
        int num;
        cin >> num;
        if (ck(num)) {
            c++;
        }
    }
    cout << c;
}
/*
//수정할 부분
굳이 함수를 안써도 되는 부분이였다.
for문에서 별도의 변수 i를 지정하여 while문 조건변수를 키울게 아니라 N을 N--해가면서 0이되면 탈출하게 만들었으면 더 깔끔했다.

//다른 코드(시간이 오래걸리지만, 간결)
#include <iostream>
using namespace std;

int n, a, s;
int main() {
	int i;
	cin >> n;
	while(n--) {
		cin >> a;
		for(i=2; i<a; i++) {
			if(a%i == 0) break;
		}
		if(i==a) s++; 
	}
	cout << s;
	return 0;
}

// 다른코드(에라토스테네스의 체)
#include <iostream>
#include <cmath>
using namespace std;
int N;
bool isPrime(int x) {
	if (x == 1) return false;
	else if (x == 2) return true;
	else {
		for (int i = 2; i <= sqrt(x); i++) {
			for (int j = i + i; j <= x; j += i) {
				if (j == x) return false;
			}
		}
		return true;
	}
}

int main(void) {
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (isPrime(input)) cnt++;
	}
	cout << cnt << endl;
}

원리 :
2부터 N까지 모든 정수를 적는다.
아직 지우지 않은 수 중 가장 작은 수를 찾는다. 이것을 P라고 하고, 이 수는 소수이다.
P를 지우고, 아직 지우지 않은 P의 배수를 크기 순서대로 지운다.
아직 모든 수를 지우지 않았다면, 다시 2번 단계로 간다.
따라서 소수 P를 찾은 뒤, 그것의 배수들을 모두 지워주면서 소수만 남아 있는 소수 배열을 만드는 것이다.
*/
