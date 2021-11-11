#include <cstdio>
#include <cstdlib>
using namespace std;
int main(void) {
    char array[100];
    int num, sum(0);
    scanf("%d", &num);
    getchar();
    scanf("%s", array);
    for (int i = 0; i < num; i++) {
        sum += array[i] - 48;
    }
    printf("%d", sum);
}

/*
위 코드는 문자열을 직접 이용한 풀이.
문자열을 이용하지 않은 풀이.
#include <cstdio>
using namespace std;
int main() {
    int i = 0, X, T, S = 0;
    scanf("%d",&X);
    for(;i < X; i++) {
        scanf("%1d",&T);
        S += T;
    }
    printf("%d",S);
}
!!! %1d를 쓰면 입력받은 정수도 문자 단위로 나누어서 처리가 가능하다
*/