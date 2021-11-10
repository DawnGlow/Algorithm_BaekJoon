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
main () {
    bool creator[10000] = { false, };
    for (int i = 0; i < 9999; i++) {
        int b;
        b = self_number(i+1);
        if (self_number(i+1) >= 9999)
            break;
        creator[b] = true;
    }
    for (int i = 1; i <= 9999; i++) {
        if (creator[i] == false)
            printf("%d\n", i);
    }
}