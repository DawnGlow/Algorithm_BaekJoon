#include <iostream>
using namespace std;
int main(void) {
    int a, b;
    while(true) {
        cin >> a >> b;
		if (cin.eof()==true)
			break;
		cout << a + b << endl;
    }
    /*
	EOF ó�� ���(https://takeknowledge.tistory.com/20) ����
	�˰��� ������ Ǯ�� �Է��� ������ ������ ���� �ȳ��������� eof�� �̿��Ѵ�.
	1. scanf�� ��ȯ�ϴ� �Է¹��� ������ ������ �̿��ϴ� ���.
	2. scanf�� eof�� ���� ���ϴ°�(eof==-1)
	3. cin���� �Է¹��� �� cin.eof()�� �̿��ϴ� ���
	*/
}