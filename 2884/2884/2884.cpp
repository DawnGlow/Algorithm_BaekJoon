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
	
	���ڵ�
	
	main �Լ��� ����Ÿ��(�ڷ���)�� �����ϸ� int ��� ����
	?�� : �� �����Ͽ� if���� ������ ǥ���� �� �ִµ�, �������� ��������.
	m>44?m-=45:h?(h--,m+=15):(h=23,m+=15);printf("%d %d",h,m);
	
	#import <ios>
	#import�� gcc������ 1���� �����϶�, msvc������ ���Ķ��̺귯���� �ҷ������ ���� ���Ѵ�.
	*/
}
