#import <iostream>
#import <string>
using namespace std;
main() {
    int c[26] = { 0, };
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++) {
        c[a.at(i) - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        cout << c[i] << ' ';
    }
}
