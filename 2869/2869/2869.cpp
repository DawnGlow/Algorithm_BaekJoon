//incompletion
#include <cstdio>
#include <cmath>
main() {
    int A, B, V, Day;
    scanf("%d %d %d", &A, &B, &V);
    if (A == V) {
        printf("%d", 1);
    }
    else {
        (V + A) % (A - B) == 0 ? Day = ((V - A) / (A - B)) + 1 : Day = ((V - A) / (A - B)) + 2;
        printf("%d", Day);
    }
}
