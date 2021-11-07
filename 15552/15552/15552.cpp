#include <iostream>
using namespace std;
int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}
}

/*
기본적으로 사용하는 cin과 cout은 입출력 속도가 조금 느림.
printf나 scanf를 사용하여서 시간을 줄여도 되지만
cin과 cout을 이용할 때 시간을 줄이는 방법이 있다.

ios_base::sync_with_stdio(false);
cin.tie(NULL);
\n

총 3가지이다.
1. ios_base::sync_with_stdio(false);
기본적으로 iostream은 c와 c++의 버퍼를 동기화 해주기 때문에 딜레이가 발생한다.하지만 ios_base::sync_with_stdio(false)는 동기화를 끊어줌으로써 속도가 빨라진다.
또한, 동기화를 끊어줬으므로, 더이상 c의 입출력 방식인 printf scanf putchar() 등등을 사용하면 안된다.
2. cin.tie(NULL)
기본적으로 cin으로 읽을 때 먼저 출력버퍼(cout 같은 것)을 비우는데, BOJ에서는 입력을 한번에 다 받고 출력하기 때문에 버퍼를 비울 필요가 없다. 따라서
cin.tie(NULL)을 이용하면 시간을 줄일 수 있다.
3. \n
endl은 출력버퍼까지 비우는 역할을 하는데, 이 작업이 매우 느리다. BOJ에서는 무엇이 출력되는가가 중요하기 때문에 \n으로만 바꿔도 시간을 줄일 수 있다.
*/
