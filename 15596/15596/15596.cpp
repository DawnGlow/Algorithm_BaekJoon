#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
    for (int i = 0; i < a.size(); i++) {
        ans += a[i];
    }
	return ans;
}
/*
vector
std 네임스페이스에 있으며, #include <vector>를 사용하자.
a[i]처럼 인덱스에 접근할 수 있으며, 선언할땐 vector<int> a(size);처럼 선언한다.
사이즈는 a.size()로 확인 가능하며, 벡터의 이름은 레퍼런스로 넘겨줄 수 있다.
*/