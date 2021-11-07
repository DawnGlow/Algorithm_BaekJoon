#include <iostream>
using namespace std;
int main(void) {
    int a, b;
    while(true) {
        cin >> a >> b;
		if (cin.eof()==true)
			break;
		cout << a + b << endl;
    }
    /*
	EOF 처리 방법(https://takeknowledge.tistory.com/20) 참조
	알고리즘 문제를 풀때 입력의 마지막 조건이 뭔지 안나와있을때 eof를 이용한다.
	1. scanf가 반환하는 입력받은 인자의 개수를 이용하는 방법.
	2. scanf를 eof와 직접 비교하는것(eof==-1)
	3. cin으로 입력받은 뒤 cin.eof()를 이용하는 방법
	*/
}