#include <iostream>
main () {
    int n;
    int b[246912];
    while (std::cin >> n) {
        int count(0);
        for (int i = 2; i <= 2 * n; i++) {
	        b[i] = true;
        }
        for (int i = 2; i * i <= 2 * n; i++) {
		    if (b[i]) {
			    for (int j = i * i; j <= 2 * n; j += i) {
			        b[j] = false;
			    }
		    }
	    }
	    for (int i = n + 1; i <= 2 * n; i++) {
	        if (b[i]) {
	            count++;
	        }
	    }
	    if (count) {
	        std::cout << count << "\n";
	    }
    }
}
/*
//수정했던 부분
동적배열로 whlie문 안에 넣었더니 메모리도 증가하고, 시간도 증가함.
문제 조건에서 최댓값을 123456으로 주어줬으니 그냥 배열을 최대로 만들어 놓는 것이 좋은 판단이였다.

//개선해야 할 부분
메모리를 어쨌든 많이 차지하므로, vector를 이용해서 필요할때만 크기를 늘려주는 것이 제일 좋은 것 같다.
*/
