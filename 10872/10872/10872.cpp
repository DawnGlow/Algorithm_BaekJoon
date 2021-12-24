//completion code
#include <iostream>
int factorial(int x) {
    if (x == 1) {
        return 1;
    }
    return x * factorial(x - 1);
}

main () {
    int N, result = 1;
    std::cin >> N;
    std::cout << factorial(N);
}
/*
처음엔 result라는 변수를 매개변수로 추가하여 함수를 만들었는데, 메모리를 크게 차지하게 되어 문제가 발생했다.
그래서 변수를 1개로 줄이고, 추가적인 변수를 만들지 않았다.
*/
