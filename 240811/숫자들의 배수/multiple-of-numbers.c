#include <stdio.h>

int main() {
    int stack = 0;
    int n, r, i = 1;

    scanf("%d", &n);

    while(stack != 2) {
        r = n * i;
        printf("%d ", r);
        i++;
        if(r % 5 == 0) {
            stack++;
        }
    }

    return 0;
}