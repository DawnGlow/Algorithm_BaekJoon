#include <iostream>
#include <cmath>
using namespace std;

class location {
public:
	int x1, x2, y1, y2, r1, r2;
};
int main(void)
{
	int caseNum;
	cin >> caseNum;
	cin.clear();
	location* ptr = new location[caseNum];
	for (int i = 0; i < caseNum; i++)
	{
		cin >> ptr[i].x1 >> ptr[i].y1 >> ptr[i].r1 >> ptr[i].x2 >> ptr[i].y2 >> ptr[i].r2;
		cin.clear();
	}
	for (int i = 0; i < caseNum; i++)
	{
		double powlength = pow(ptr[i].x2 - ptr[i].x1, 2) + pow(ptr[i].y2 - ptr[i].y1, 2);
		if (ptr[i].x1 == ptr[i].x2 && ptr[i].y1 == ptr[i].y2)
		{
			if (ptr[i].r1 == ptr[i].r2)
				cout << -1 << endl;
			else
				cout << 0 << endl;
		}
		else
		{
			if ((powlength < pow(ptr[i].r1 + ptr[i].r2, 2)) && pow(abs(ptr[i].r1 - ptr[i].r2), 2) < powlength)
			{
				cout << 2 << endl;
			}
			else if ((powlength == pow(ptr[i].r1 + ptr[i].r2, 2)) || (powlength == pow(abs(ptr[i].r1 - ptr[i].r2), 2)))
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}

	}
	return 0;
}