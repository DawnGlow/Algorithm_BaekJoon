#include <iostream>
main () {
    int x, y, w, h, min;
    std::cin >> x >> y >> w >> h;
    min = x;
    if (y < min) {
        min = y;
    }
    if (w - x < min) {
        min = w - x;
    }
    if (h - y < min) {
        min = h - y;
    }
    std::cout << min;
}

/*
다른 코드
: min 함수를 이용한다.
#include <iostream>
using namespace std;
main () {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    cout<<min(min(min(x,y),w-x),h-y);
}


함수 원형
template<class T>
const T& min (const T& a, const T& b)
아래는 max 함수
max(1,2);                 //2 반환
max(2,2);                 //2 반환
max('b', 'd');            //'d' 반환
max(345.678, 123.456); //345.678 반환
*/
