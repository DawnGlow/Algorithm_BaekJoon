#include <cstdio>
#include <string.h>
int main(void) {
    int position[26];
    for (int i = 0; i < 26; i++) {
        position[i] = -1;
    }
    char S[100];
    scanf("%s", S);
    for (int i = 0; i < strlen(S); i++) {
        if (position[S[i] - 97] == -1)
            position[S[i] - 97] = i;
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", position[i]);
    }
}

/*
    int position[26] = { -1, } ---> 처음꺼만 -1로 되고 나머지는 0으로 초기화된다.
    for 문을 이용하거나, c++입출력에선 std::fill_n(arr, 배열의 자리수, 값); 을 쓰자.
    구현은 매우 깔끔함!
*/