#include <iostream>
#include <string>
using namespace std;
int main(void) {
    string word;
    cin >> word;
    int count[26] = { 0,}, maxindex(0);
    for (int i = 0; i < word.size(); i++) {
        word[i] = toupper(word[i]);
        count[word[i] - 65]++;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] >= count[maxindex])
            maxindex = i;
    }

    for (int i = 0; i < 26; i++) {
        if (count[maxindex] == count[i]) {
            if (maxindex == i)
                continue;
            else
            {
                cout << "?";
                exit(0);
            }
        }       
    }
    cout << (char)(maxindex + 65);
}

/*
BOJ에선 exit(1) 금지. exit(0)을 사용할 것.
toupper(char형)은 char형을 대문자로 바꿔준 것을 리턴하는 거지 실제로 바꿔주는 것이 아니다.
*/