#include <stdio.h>

void main() {
    int input[3];
    int max, min, middle;

    for (int i = 0; i < 3; i++) {
        printf("%d 번째 수 :", i + 1);
        scanf("%d", &input[i]);
    }

    if (input[0] >= input[1]) {
        max = input[0];
        min = input[1];
    }
    else {
        max = input[1];
        min = input[0];
    }

    if (input[2] > max) {
        middle = max;
        max = input[2];
    }
    if (input[2] < min) {
        middle = min;
        min = input[2];
    }


    printf("\n결과 : %d, %d, %d", min, middle, max);
}