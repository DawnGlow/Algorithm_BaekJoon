#include <cstdio>
main() {
    int A, B, V, Day = 0;
    scanf("%d %d %d", &A, &B, &V);
    if (A == V) {
        putchar('1');
    }
    else {
        if ((V - A) % (A - B) == 0) {
            Day = (V - A) / (A - B);
        }
        else {
            Day = ((V - A) / (A - B)) + 1;
        }
        printf("%d", Day + 1);
    }
}

/*
나눗셈의 몫을 while문으로 돌리지 말자. 시간이 매우 늘어난다.
첫번째에서 A == V를 다른 케이스로 나뒀는데, 굳이 구분할 필요가 없었다.
고친 코드
+
최적화한 코드
#include <stdio.h>
int main (){
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    printf("%d",(V-B-1)/(A-B)+1);
}

하루에 (A-B)씩 움직인다고 가정한다면, 마지막 날에는 B미터를 내려가는걸 무시해야하기 때문에 V - B를 (A-B)로 나누는데, 정수로 나눠떨어면 몫 + 1이 답이지만,
나눠떨어지는지 구분하기 귀찮아서 분자에 1을 빼는거다.
*/
