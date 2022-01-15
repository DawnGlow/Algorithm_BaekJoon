#import <iostream>
main() {
    int T, a, b;
    char c;
    std::cin >> T;
    while (T--) {
        std::cin >> a >> c >> b;
        std::cout << a + b << '\n';
    }
}
