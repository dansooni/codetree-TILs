#include <stdio.h>

int main() {
    int arr[10];
    int sum_of_evens = 0;
    float sum_of_xthree = 0.0;
    int count = 0;

    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<10; i++) {
        if((i+1) % 2 == 0) {
            sum_of_evens += arr[i];
        }

        if((i+1) % 3 == 0) {
            count += 1;
            sum_of_xthree += arr[i];
        }
    }

    printf("%d %.1f", sum_of_evens, sum_of_xthree/count);

    return 0;
}