#include <iostream>
using namespace std;
int main(void) {
	int a, b, b1, b2, b3;
	cin >> a >> b;
	b1 = b % 10;
	b2 = ((b / 10) % 10);
	b3 = b / 100;
	cout << a * b1 << endl;
	cout << a * b2 << endl;
	cout << a * b3 << endl;
	cout << a * b;
}