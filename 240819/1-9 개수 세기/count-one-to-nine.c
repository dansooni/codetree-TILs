#include <stdio.h>

int main() {
    int arr[10] = {0, };
    int n;
    scanf("%d", &n);
    int input[n];

    for(int i=0; i<n; i++) {
        scanf("%d", input+i);
        arr[input[i]]++;
    }
    
    for(int i=1; i<10; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}