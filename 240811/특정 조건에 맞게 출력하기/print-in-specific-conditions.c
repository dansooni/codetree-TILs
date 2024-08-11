#include <stdio.h>

int main() {
    int arr[100];

    for(int i=0; i<100; i++) {
        scanf("%d", arr+i);

        if(arr[i] == 0) {
            break;
        }
    }

    for(int i=0; i<100; i++) {
        if(arr[i]==0){
            break;
        }
        else {
            if(arr[i]%2==0) {
                printf("%d ", arr[i] / 2);
            }
            else {
                printf("%d ", arr[i] + 3);
            }
        }
    }

    return 0;
}