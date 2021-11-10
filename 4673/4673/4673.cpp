#include <cstdio>
using namespace std;

int self_number(int a) {
    int sum = a;
    while (a != 0) {
        sum += (a % 10);
        a = a / 10;
    }
    return sum;
}

main() {
    bool array[10001] = { false, };
    int c, d;
    for (int i = 1; i <= 10000; i++) {
        c = self_number(i);
        // 아래 if문은 out of Bound 방지
        if (c < 10001)
            array[c] = 1;
    }
    for (int i = 1; i <= 10000; i++) {
        if(!array[i])
            printf("%d\n", i);
    }
}

/*
자리수의 합을 구하는 알고리즘
x라는 수를 10으로 나눈 나머지를 특정변수 a(a라 가정)에 더하고 x를 10으로 나눈다.
또 x를 10으로 나눈 나머지를 a에 더하고 10으로 나누느 과정을 반복하여 x가 0이 될때까지 반복한다.(while문)

self_number라는 함수는 잘 만들었다.
숫자가 양의 정수부터 시작하므로 array[10001]로 만들어 0인덱스를 무시하고 인덱스 번호가 실제 수가 되게 하자.
array 인덱스에 함수의 리턴값을 바로 이용하여서 리턴값을 한번만 이용하게끔 코드를 짜서 전체적인 코드가 복잡해졌다.
리턴값을 하나의 변수에 저장하여 그 변수를 여러번 이용하면 코드가 깔끔해질 수 있었다.
원래 main 함수
main() {
    bool array[10000] = { false, };
    for (int i = 0; i <= 9971; i++) {
        array[self_number(i + 1) - 1] = true;
    }
    for (int i = 0; i <= 9992; i++) {
        if (array[i] == false) {
            printf("%d\n", i + 1);
        }
    }
}
*/