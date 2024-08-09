#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];
    int n_arr[n], pointer = 0;


    for(int i=0; i<n; i++) {
        scanf("%d", arr+i);
    }

    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            n_arr[pointer] = arr[i];
            pointer++;
        }
    }

    for(int i=0; i<pointer; i++) {
        printf("%d ", n_arr[i]);
    }

    return 0;
}