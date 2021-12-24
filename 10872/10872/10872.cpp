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
