#include <cstdio>
main () { int X, n = 1; scanf("%d", &X);
  while (2 * X - 2 >= n * (n - 1)) { n++;} n--;
  int k = X - ((n - 1) * n / 2 + 1);
  if (n % 2 == 0)
    printf("%d/%d", 1 + k, n - k);
  else
      printf("%d/%d", n - k, 1 + k);

}
/*
잘 구현했음!
좀더 좋은 구현
#include<stdio.h>

int main() {
	int X,i;
	scanf("%d",&X);
	for(i=1;i<X;i++) {
		X-=i;
	}
	if(i%2==0) printf("%d/%d",X,i+1-X);
	else printf("%d/%d",i+1-X,X);
}

*/
