#include <cstdio>
using namespace std;
main () {
    int case_num, stu_num, sum_score, mean, up;
    int score[1000];
    scanf("%d", &case_num);
    for (int i = 0; i++ < case_num;) {
        sum_score = 0, up = 0;
        scanf(" %d", &stu_num);
        for (int j = 0; j++ < stu_num;) {
            scanf(" %d", score + j);
            sum_score += score[j];
        }
        mean = sum_score / stu_num;
        for (int j = 0; j++ < stu_num;) {
            if (score[j] > mean) {
                up++;
            }
        }
        float k = up / (double)stu_num * 100.0;
        printf("%.3f%%\n", k); 
    }

}
/*
printf에서 %를 나타내는 법 -> %%으로 쓰면 된다.
이번엔 잘 했지만 for문에서 변수 초기화해야하는 것들 놓치지 말자
*/