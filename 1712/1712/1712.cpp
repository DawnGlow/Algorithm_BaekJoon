#include <iostream>
using namespace std;
int main(void) {
	int A, B, C;
	int count(0);
	cin >> A >> B >> C;
	if (C > B) {
		cout << A / (C - B) + 1;
	}
	else
		cout << -1;
}