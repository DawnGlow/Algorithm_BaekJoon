#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(void) {
    int N, count;
    cin >> N;
    count = N;
    string word;
    for (int i = 0; i < N; i++) {
        int check[26] = { 0 };
        cin >> word;
        vector<char> array(word.length());
        if (word.size() == 1) {
            continue;
        }
        else {
            for (int j = 0; j < word.length(); j++) {
                array[j] = word[j];
            }
            int a = 0;
            while (a < array.size() - 1) {
                if (array[a] == array[a + 1]) {
                    array.erase(array.begin() + a + 1);
                }
                else {
                    a++;
                }
            }
            for (int b = 0; b < array.size(); b++) {
                check[array[b] - 97]++;
            }
            for (int c = 0; c < 26; c++) {
                if (check[c] > 1) {
                    count--;
                    break;
                }
            }
        }

    }
    cout << count;
}

/*
오랫동안 해결 못해서 고생했지만 결국엔 나쁘지 않은 코드로 마무리한 문제

*/
