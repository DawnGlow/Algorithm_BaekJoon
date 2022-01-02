#import <iostream>
main () {
    int N, sum, temp;
    std::cin >> N;
    for (int i = 1; i < N; i++) {
        sum = 0;
        temp = i;
        while (temp) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum + i == N) {
            std::cout << i;
            exit(0);
        }
    }
    std::cout << 0;
}
