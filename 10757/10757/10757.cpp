//incompletion code
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string A, B;
    cin >> A >> B;
    if (A.length() < B.length()) {
        string tmp = A;
        A = B;
        B = A;
    }
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    string Result;
    int Q[A.length()], int W[B.length()];
    
    
    
    
    
    
    
    
    
    
    
    
    for (int i = 0; i < B.length(); i++) {
        int C = A[i] - '0';
        int D = B[i] - '0';
        int E = A[i + 1] - '0';
        if (C + D >= 10) {
            A[i + 1] = (A[i + 1] - '0' - 1) + '0';
            A[i] = ((A[i] - '0' + B[i] - '0') % 10 + '0');
        }
        else {
            A[i] = (A[i] - '0' + B[i] - '0') + '0';
        }
    }
    reverse(A.begin(), A.end());
    cout << A;
}
