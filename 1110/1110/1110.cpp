//수정한 코드
#include <iostream>
using namespace std;
int main(void) {
	int num, cnum, count(0);
	cin >> num;
	cnum = num;
	do {
		cnum = cnum % 10 * 10 + (cnum % 10 + cnum / 10) % 10;
		count++;
	} while (cnum != num);
	cout << count;
}

/*
!!do - while 문에서 while()뒤에 ; 적는 걸 까먹지 말자

고칠만 한 것
while문 안에 if로 탈출시키는 것보단 do while을 써보자(반드시 한번은 거쳐야 하는 과정이니)
위의 a와 b라는 변수를 정의하여 메모리를 할당하는 것보단 계산식을 새로운 변수에 대입하지 않고 cnum의 우변에 대입해보자.

처음 코드
#include <iostream>
using namespace std;
int main(void) {
	int num, cnum, count(0);
	cin >> num;
	cnum = num;
	while (true) {
		int a = cnum % 10;
		int b = cnum % 10 + cnum / 10;
		cnum = a * 10 + b % 10;
		count++;
		if (cnum == num) {
			break;
		}
	}
	cout << count;
	
}
*/