#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[20];

    arr[0] = 1;
    arr[1] = n;

    for(int i=0; 1; i++) {
        // i가 1일 때 까진 그냥 바로 출력
        if(i <= 1) {
            printf("%d ", arr[i]);
            continue;
        }
        // i가 2일 때부터는 값 구하고 출력
        arr[i] = arr[i-1] + arr[i-2];
        printf("%d ", arr[i]);
        // 100 넘으면 반복 마치기
        if(arr[i] > 100) {
            break;
        }
    }

    return 0;
}