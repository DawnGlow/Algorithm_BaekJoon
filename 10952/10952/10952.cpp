#include <cstdio>
main () {
    int A, B;
    while(1) {
        scanf(" %d %d", &A, &B);
        if (A + B == 0)
            break;
        printf("%d\n", A + B);
    }
}
/*

다른 방법
while (scanf("%d%d", &x, &y) && (x || y)) printf("%d\n", x + y);
*/
