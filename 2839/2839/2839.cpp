#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, min(10000);
    vector<int> arr1, arr2;
    cin >> N;
    for (int a = 0; a <= N / 5; a++) {
        if ((N - 5 * a) % 3 == 0) {
            arr1.push_back(a);
            arr2.push_back((N - 5 * a) / 3);
        }
    }
    if (arr1.size() == 0) {
        cout << "-1";
    }
    else {
        for (int i = 0; i < arr1.size(); i++) {
            if (min > arr1[i] + arr2[i]) {
                min = arr1[i] + arr2[i];
            }
        }
        cout << min;
    }
    
}
// 부정방정식을 for문을 이용해 구현해 풀어본 코드이다.
/*
위 코드의 문제점은 부정방정식의 모든 해를 찾아 시간 복잡도가 증가하고, 배열을 2개나 만들어서 공간 복잡도도 커졌다.
아래 코드는 위 코드의 문제를 해결한 코드이다.
#include <iostream>
using namespace std;
int main() {
    int kg;
    cin >> kg;
    int a,b;
    a = kg/5;
    while(1)
    {
        if(a < 0)
        {
            cout << "-1";
            return 0;
        }
        if((kg-(5*a))%3 == 0)
        {
            b = (kg-(5*a))/3;
            break;
        }
        a--;
    }
    cout << a+b;
    return 0;
}
a를 최댓값으로 설정한후 a를 줄여나가는 중, 나머지가 3으로 나눠떨어질때가 답이라는걸 이용하였다.
*/
