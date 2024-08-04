#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, *arr;

    // n 입력받기
    scanf("%d", &n);

    // arr 생성
    arr = (int*)malloc(sizeof(int)*n);

    // arr 입력받기
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // arr 제곱하기
    for(int i=0; i<n; i++) {
        printf("%d ", (int)pow((double)arr[i], 2.0));
    }

    return 0;
}