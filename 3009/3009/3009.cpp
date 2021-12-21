#include <iostream>
using namespace std;
main(){int x1,y1,x2,y2,x3,y3;cin>>x1>>y1>>x2>>y2>>x3>>y3;
if(x1==x2){cout<<x3<<" ";}else if(x1==x3){cout<<x2<<" ";}else{cout<<x1<<" ";}
if(y1==y2){cout<<y3;}else if(y1==y3){cout<<y2;}else{cout<<y1;}}

/*
다른 풀이 : xor의 특징과 xor 스왑 알고리즘
XOR 연산을 사용하면 짧게 풀 수 있다.
보안쪽에선 간단하게 XOR 연산으로 암호화/복호화 를 구현할 수 있는데
A ^ B 한 값을 다시 ^B로 연산하면 A 자기 자신이 되는 특성을 이용하면 된다.
1. A ^ B = C
2. C ^ B = A
( 암호화 하고 싶은 값을 특정한 값으로 XOR 연산을 해주면 일종의 암호화가 되고, 다시 그 값으로 XOR 해주면 복호화가 된다. 일종의 key를 통해서 암호화 복호화를 진행하는 것.)
#include <stdio.h>
int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    printf("%d %d", a^c^e, b^d^f);
}
*/
