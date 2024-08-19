#include <stdio.h>

int main() {
    int number, number_cnt[10] = {0, };

    while(1) {
        scanf("%d", &number);
        if(number == 0) {
            break;
        }
        number_cnt[number / 10]++;
    }

    for(int i=1; i<10; i++) {
        printf("%d - %d\n", i, number_cnt[i]);
    }
    
    return 0;
}