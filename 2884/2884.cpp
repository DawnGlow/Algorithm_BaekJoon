#include <iostream>
using namespace std;
int main(void) {
    int hour, min;
    cin >> hour >> min;
    if (hour == 0) {
        if (min < 45)
            cout << "23 " << min + 15;
        else
            cout << "0 " << min - 45;
    }
    else {
        if (min >= 45)
            cout << hour << " " << min - 45;
        else
            cout << hour - 1 << " " << min + 15;
    }
	return 0;
	/*
	
	숏코딩
	
	main 함수의 리턴타입(자료형)은 생략하면 int 라고 간주
	?과 : 를 나열하여 if문을 간략히 표현할 수 있는데, 가독성이 떨어진다.
	m>44?m-=45:h?(h--,m+=15):(h=23,m+=15);printf("%d %d",h,m);
	
	#import <ios>
	#import는 gcc에서는 1번만 포함하라, msvc에서는 형식라이브러리를 불러오라는 것을 뜻한다.
	*/
}
