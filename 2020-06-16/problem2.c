#include <stdio.h>

// Æò±Õ ±¸ÇÏ±â
void main() {
    float input[3];
    
    for (int i=0; i < 3; i++) {
        printf("%d ¹øÂ° ¼ö :", i + 1);
        scanf("%f", &input[i]);
    }
    
    printf("Æò±Õ : %.3f", (input[0] + input[1] + input[2]) / 3);
}