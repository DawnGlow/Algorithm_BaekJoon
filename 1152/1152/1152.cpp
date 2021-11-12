#include <iostream>
#include <string>
using namespace std;
int main(void) {
    int count = 0;
    string sen;
    getline(cin, sen);
    for (int i = 1; i < sen.size(); i++) {
        if (sen[i] == ' ')
            count++;
    }
    if (sen[sen.size() - 1] == ' ')
        count--;
    cout << count + 1;
}
/*
string이나 scanf로 일반적으로 받으면 공백 앞까지 입력을 받게 된다.
하지만 getline함수를 이용하면 전부다 입력받을 수 있다.
또한, string의 메소드의 리턴값은 리터럴이므로 세미콜론을 붙이지 말자.

다른코드
#import<iostream>
int a;std::string b;main(){while(std::cin>>b)a++;std::cout<<a;}
위 방식은 문장을 입력하면 버퍼에 문장이 저장되고 첫 단어가 입력되는 것,
cin>>b의 리턴값이 while의 조건문에선 bool형으로 바뀌는 것을 이용하여 리턴값이
false일때까지 단어가 들어오는 개수를 count해서 출력하는 방법이다.

#include<stdio.h>
char s[1000001];int n;main(){while(scanf("%s",s)!=-1)n++;printf("%d",n);}
위 방법은 eof가 나올때까지 문자열을 입력받으면서 단어의 개수를 count하는 건데
위 버퍼 개념과 동일하다. 
*/