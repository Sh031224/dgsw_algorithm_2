#include <stdio.h>

// ��� ���ϱ�
void main() {
    float input[3];
    
    for (int i=0; i < 3; i++) {
        printf("%d ��° �� :", i + 1);
        scanf("%f", &input[i]);
    }
    
    printf("��� : %.3f", (input[0] + input[1] + input[2]) / 3);
}