#include <iostream>
using namespace std;
void swap(int &q, int &w) {
    int tmp = q;
    q = w;
    w = tmp;
}
main () {
    int x, y, z;
    while (1) {
        cin >> x >> y >> z;
        if (x == 0) {
            break;
        }
        if (y < z) {
            swap(y, z);
        }
        if (x < y) {
            swap(x, y);
        }
        if (y < z) {
            swap(y, z);
        }
        if ((x * x == y * y + z * z)) {
            cout << "right\n";
        }
        else {
            cout << "wrong\n";
        }
    }
}

/*
//개선해야할 부분
x, y, z를 크기순으로 정렬하고 계산했는데,
if(a==b+c || b==a+c || c==a+b) puts("right");//제곱한 값을 다시 a b c에 넣은 상태
이런식으로 or 연산을 했으면 좀더 깔끔했을 수도 있다.
개선해야할 부분 2
for(;std::cin>>a>>b>>c,a;std::cout<<(a*a+b*b-c*c&&b*b+c*c-a*a&&c*c+a*a-b*b?"wrong":"right");
여기서 std::cin>>a>>b>>c,a 조건식 영역이 2개인데, 첫번째 조건식은 실행만 되고 조건에 포함되지 않는다. 따라서 입력만 받고, a가 조건이 되어 0이 되면 for문이 종료된다.
뒤 영역은 명령문 영역이므로, cout을 통해 right, wrong을 출력하면 된다.
*/
