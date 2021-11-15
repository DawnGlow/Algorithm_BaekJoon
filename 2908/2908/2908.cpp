#include <cstdio> 
main(){int A,B;scanf("%d %d",&A,&B);A=100*(A%10)+10*((A/10)%10)+A/100;B=100*(B%10)+10*((B/10)%10)+B/100; A>B?printf("%d",A):printf("%d",B);}
/*
A>B?printf("%d",A):printf("%d",B);
위 코드는 아래와 같이 수정할 수 있다.
printf("%d", a>b?a:b);

다른 풀이
1. 매크로 함수를 이용하는 방법. A, B가 작동하는 방식이 같기 때문에 함수로 만들면 좋다.
#include<stdio.h>
#define R(n) n%10*100+n/10%10*10+n/100
int main(){int A,B;scanf("%d%d",&A,&B);printf("%d",R(A)>R(B)?R(A):R(B)
2. iostream의 max함수를 이용하는 방법
#import<iostream>
using namespace std;main(){int a,b;cin>>a>>b;cout<<max(a/100+a%10*100+a%100-a%10,b/100+b%10*100+b%100-b%10);} 
*/
