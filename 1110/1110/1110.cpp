//������ �ڵ�
#include <iostream>
using namespace std;
int main(void) {
	int num, cnum, count(0);
	cin >> num;
	cnum = num;
	do {
		cnum = cnum % 10 * 10 + (cnum % 10 + cnum / 10) % 10;
		count++;
	} while (cnum != num);
	cout << count;
}

/*
!!do - while ������ while()�ڿ� ; ���� �� ����� ����

��ĥ�� �� ��
while�� �ȿ� if�� Ż���Ű�� �ͺ��� do while�� �Ẹ��(�ݵ�� �ѹ��� ���ľ� �ϴ� �����̴�)
���� a�� b��� ������ �����Ͽ� �޸𸮸� �Ҵ��ϴ� �ͺ��� ������ ���ο� ������ �������� �ʰ� cnum�� �캯�� �����غ���.

ó�� �ڵ�
#include <iostream>
using namespace std;
int main(void) {
	int num, cnum, count(0);
	cin >> num;
	cnum = num;
	while (true) {
		int a = cnum % 10;
		int b = cnum % 10 + cnum / 10;
		cnum = a * 10 + b % 10;
		count++;
		if (cnum == num) {
			break;
		}
	}
	cout << count;
	
}
*/