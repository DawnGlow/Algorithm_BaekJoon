#include <iostream>
using namespace std;
int main(void) {
	int num;
	int count(0);
	cin >> num;
	if (num == 1) {
		cout << 1;
	}
	else {
		while (3 * count * count - 3 * count + 1 < num) {
			count++;
		}
		cout << count;
	}
	
}