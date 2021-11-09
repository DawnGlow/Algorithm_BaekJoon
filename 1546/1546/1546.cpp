#include <iostream>
#include <string>
using namespace std;
main () {
    int count, O_num = 1, score = 0;
    cin >> count;
    string ox;
    for (int i = 0; i++ < count;) {
        cin >> ox;
        for (int j = 0; j < ox.length(); j++) {
            if (ox.at(j) == 'O') {
                score += O_num;
                O_num++;
            }
            else
            {
                O_num = 1;
            }
            
        }
        cout << score << "\n";
        score = 0;
    }
}

/*
for문을 이중 이상으로 사용할 때, 초기화 해야할 변수가 있는지 꼭 확인하자.
for (int i = 0; i++ <~~ ) 이 방식은 i 값을 for문 안에서 사용하지 않을때만 사용하자

*/