#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int idx;
    string str;
    cin >> str;
    for(int i = 0; i < croatian.size(); i++)
    {
        while(1){
            idx = str.find(croatian[i]);
            if(idx == string::npos)
                break;
            str.replace(idx,croatian[i].length(),"#");
        }
    }
    cout << str.length();
}

/*
못푼 문제
string 함수를 이용한 접근은 옳았다.
다만 replace를 활용하지 못한 것과 vector를 썼으면 좋았을듯?
그리고 내가 쓴 코드는 왜 틀렸을까??
*/