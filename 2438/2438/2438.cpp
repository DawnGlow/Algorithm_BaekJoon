#include <iostream>
main() {
    int N, k;
    std::cin >> N;
    for (int i = 1; i <= N; i++) {
        k = i;
        while (k) {
            std::cout << '*';
            k--;
        }
        std::cout << '\n';
    }
}
