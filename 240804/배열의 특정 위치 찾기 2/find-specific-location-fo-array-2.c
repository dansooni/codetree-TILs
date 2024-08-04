#include <stdio.h>

int main() {
    int arr[10];
    int sum_of_odds = 0, sum_of_evens = 0;

    // 10개의 정수 입력받기
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }

    // 짝수의 합과 홀수의 합 각각 구하기
    for(int i=0; i<10; i++) {
        if(i % 2 == 0) {
            sum_of_evens += arr[i];
        }
        else {
            sum_of_odds += arr[i];
        }
    }

    // 둘 중 큰 것 출력하기
    if(sum_of_evens < sum_of_odds) {
        printf("%d", sum_of_odds-sum_of_evens);
    }
    else {
        printf("%d", sum_of_evens-sum_of_odds);
    }

    return 0;
}