#include <cstdio>
main () {
    int array[42] = { 0 };
    int A;
    int count = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A);
        array[A % 42]++;
    }
    for (int i = 0; i < 42; i++) {
        if (array[i] !=0)
            count++;
    }
    printf("%d", count);
}
