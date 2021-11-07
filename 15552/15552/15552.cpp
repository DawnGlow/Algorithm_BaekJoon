#include <iostream>
using namespace std;
int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}
}

/*
�⺻������ ����ϴ� cin�� cout�� ����� �ӵ��� ���� ����.
printf�� scanf�� ����Ͽ��� �ӵ��� �ٿ��� ������
cin�� cout�� �̿��� �� �ӵ��� ���̴� ����� �ִ�.

ios_base::sync_with_stdio(false);
cin.tie(NULL);
\n

�� 3�����̴�.
1. ios_base::sync_with_stdio(false);
�⺻������ iostream�� c�� c++�� ���۸� ����ȭ ���ֱ� ������ �����̰� �߻��Ѵ�.������ ios_base::sync_with_stdio(false)�� ����ȭ�� ���������ν� �ӵ��� ��������.
����, ����ȭ�� ���������Ƿ�, ���̻� c�� ����� ����� printf scanf putchar() ����� ����ϸ� �ȵȴ�.
2. cin.tie(NULL)
�⺻������ cin���� ���� �� ���� ��¹���(cout ���� ��)�� ���µ�, BOJ������ �Է��� �ѹ��� �� �ް� ����ϱ� ������ ���۸� ��� �ʿ䰡 ����. ����
cin.tie(NULL)�� �̿��ϸ� �ð��� ���� �� �ִ�.
3. \n
endl�� ��¹��۱��� ���� ������ �ϴµ�, �� �۾��� �ſ� ������. BOJ������ ������ ��µǴ°��� �߿��ϱ� ������ \n���θ� �ٲ㵵 �ð��� ���� �� �ִ�.
*/
