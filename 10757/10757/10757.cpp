//completion code
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
main () {
    int carry = 0;
    string A, B;
    cin >> A >> B;
    if (A.length() < B.length()) {
        swap(A, B);
    }
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    for (int i = 0; i < B.length(); i++) {
        int num = A[i] - 48 + B[i] - 48 + carry;
        carry = num / 10;
        A[i] = num % 10 + 48;
    }
    for (int i = B.length(); i < A.length(); i++) {
        int num = A[i] - 48 + carry;
        carry = num / 10;
        A[i] = num % 10 + 48;
    }
    reverse(A.begin(), A.end());
    if (carry == 1) 
        cout << carry;
    cout << A;
}

/*
알고리즘은 되게 잘 짠 것 같다.
//몰랐던 부분
swap함수는 std namespace에, reverse함수도 std namespace에, reverse함수는(str.begin(), str.end())를 매개변수로 받는다.
//코드 개선
to_string함수를 남발하기보단 그냥 정수형 변수를 만들어 저장해버리고 나중에 + 48을 하자.
//다른 풀이
1. string으로 입력받고, vector<int>에 각 자리 수를 넣어 위와 같은 덧셈을 하고, 출력
*/
