#import <iostream>
main() {
    int n, x;
    std::cin >> n >> x;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (auto k : a) {
        if (k < x) {
            std::cout << k << ' ';
        }
    }
}
