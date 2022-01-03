#import <iostream>
main () {
    int N, count;
    std::cin >> N;
    int arr[N][2];
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 0; i < N; i++) {
        count = 0;
        for (int j = 0; j < N; j++) {
            if (i != j) {
                if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
                    count++;
                }
            }
        }
        std::cout << count + 1 << " ";
    }
}
