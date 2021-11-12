#include <cstdio>
#include <string.h>
main () {
    char input[16]; int sum = 0; scanf("%s", input);
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] <= 82) {
        sum += (input[i] + 1) / 3 - 19;
        }
        else if (input[i] == 83) {
            sum += 8;
        }
        else if (input[i] == 90) {
            sum += 10;
        }
        else {
            sum += input[i] / 3 - 19;
        }
    }
    printf("%d", sum);
}

/*
위 코드를 조금 다르게 쓰는법
else if의 두 케이스를 나머지 두케이스에 포함되게끔 input[i] 값을 바꿔버린다.
다른 방법
1. 배열에 직접 값을 대입한다.
#include<stdio.h>

int su[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9}, sum, i;
char st[26];

int main(){
	gets(st);
	for(i=0; st[i]; i++)sum+=su[st[i]-'A'];
	printf("%d", sum+i);
	return 0;
}
2. 범위기반 for문 이용 : 버퍼에 담을때 문자는getchar()로 받자.
#include <cstdio>

int dial;

int main() {
	char num;
	
	while ((num = getchar()) - 0x0A) {
		for (char c : "zzADGJMPTW")
			dial += num >= c;
		dial++;
	}
		
	printf("%d\n", dial);
}

*/