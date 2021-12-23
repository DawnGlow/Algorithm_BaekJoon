//incompletion code
#include <iostream>
int factorial(int x, int result) {
    if (x == 1) {
        return result;
    }
    else {
        result *= x;
        x--;
        factorial(x - 1, result);
    }
}
main () {
    int N, result = 1;
    std::cin >> N;
    std::cout << factorial(N, result);
}
