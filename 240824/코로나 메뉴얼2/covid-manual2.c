#include <stdio.h>

int main() {
    int count[4] = {0, }, temp;
    char symptom;

    for(int i=0; i<3; i++) {
        scanf("%c %d", &symptom, &temp);
        // printf("%c %d\n", symptom, temp);

        if(temp >= 37) {
            if(symptom == 'Y') {
                count[0] += 1;
            }
            else if(symptom == 'N') {
                count[1] += 1;
            }
        }
        else {
            if(symptom == 'Y') {
                count[2] += 1;
            }
            else if(symptom == 'N') {
                count[3] += 1;
            }
        }
    }

    for(int i=0; i<4; i++) {
        printf("%d ", count[i]);
    }

    if(count[0]>=2) {
        printf("E");
    }


    return 0;
}