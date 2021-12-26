//못푼 문제
#import <iostream>
using namespace std;
void star(int i, int j, int num)
{
    if ((i / num) % 3 == 1 && (j / num) % 3 == 1) {
        cout << ' ';
    }
    else
    {
        if (num / 3 == 0)
            cout <<'*';
        else
            star(i, j, num / 3);
    }
}
main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
            star(i, j, num);
        cout << '\n';
    }
}

/*
재귀적으로 접근해야 풀 수 있었던 문제.
main함수 구현은 비슷하게 했으나, star함수에서 if 조건문 안에 i / num 과 j / num을 구현하지 못했다.
*/
