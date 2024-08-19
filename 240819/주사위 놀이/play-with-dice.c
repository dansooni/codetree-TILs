#include <stdio.h>

int main() {
    int number, number_cnt[7] = {0, };

    for(int i=0; i<10; i++) {
        scanf("%d", &number);
        number_cnt[number]++;
    }

    for(int i=1; i<=6; i++) {
        printf("%d - %d\n", i, number_cnt[i]);
    }

    return 0;
}