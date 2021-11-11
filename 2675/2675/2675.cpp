#include <cstdio>
#include <string.h>
main () {
	int num; scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		int R; char S[21]; //scanf(" %d", &R); scanf(" %s", S);
        scanf( "%d %s", &R, S);
		for (int j = 0; j < strlen(S); j++) {
			for (int k = 0; k < R; k++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
}
/*
scanf(" %d", &R); scanf(" %s", S);는 scanf( "%d %s", &R, S);로 줄일 수 있다.
*/