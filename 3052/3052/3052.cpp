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
/*
수정해야할 부분
1. 문제 조건에서 10개를 입력한다고 했지만, EOF를 이용하면 코드를 줄일 수 있다.
2. array[A % 42]++ 대신 array[A % 42] = 1로 코드를 수정하고, for(auto n : array)등을 이용하여 배열값을 모두 더하면 개수를 깔끔히 구할 수 있다.
*/
