#import <iostream>
main() {
    int a[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < 5; i++) {
        if (a[i] < 40) {
            a[i] = 40;
        }
    }
    for (int i = 0; i < 5; i++) {
        sum += a[i];
    }
    std::cout << sum / 5;
}
