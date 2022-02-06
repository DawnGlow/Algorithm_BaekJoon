#import <iostream>
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    if (A < B) {
        swap(A, B);
    }
    if (B < C) {
        swap(B, C);
    }
    if (A < B) {
        swap(A, B);
    }
    std::cout << B;
}
