#include <iostream>
using namespace std;
main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count = 0, N;
    cin >> N;
    if (N <= 99) {
        cout << N;
    }
    else if (N == 1000)
        cout << "144";
    else {
        count = 99;
        for (int i = 100; i <= N; i++) {
            if (i / 100 + i % 10 == 2 * ((i % 100) / 10))
                count++;
        }
        cout << count;
    }
}

/*
코드 길이 줄이기
main(){int n,c=0;scanf("%d",&n);for(int i=1;i<=n;i++)if(i<100||(i/100+i%10)==(i/10%10*2))c++;printf("%d",c);}
for문을 1부터 N까지 돌리는데 100 이하면 count++, 등차수열이면 count++, 즉 조건을 or연산 하여 줄이기 가능.
*/
