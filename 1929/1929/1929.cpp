#import <iostream>
#import <cmath>
main () {
    int M, N;
    std::cin >> M >> N;
    int* b = new int[N + 1];
    for (int i = 2; i <= N; i++) {
	    b[i] = true;
    }
    for (int i = 2; i * i <= N; i++) {
		if (b[i])
			for (int j = i * i; j <= N; j += i)
			    b[j] = false;
	}
    for (int i = M; i <= N; i++) {
        if (b[i]) {
            std::cout << i << "\n";
        }
    } 
}
/*
에라토스테네스의 체를 이해하고 풀어야 하는 문제

에라토스테네스의 체는 가장 먼저 소수를 판별할 범위만큼 배열을 할당하여, 해당하는 값을 넣어주고, 이후에 하나씩 지워나가는 방법을 이용한다.
배열을 생성하여 초기화한다.
2부터 시작해서 특정 수의 배수에 해당하는 수를 모두 지운다.(지울 때 자기자신은 지우지 않고, 이미 지워진 수는 건너뛴다.)
2부터 시작하여 남아있는 수를 모두 출력한다.
*/
