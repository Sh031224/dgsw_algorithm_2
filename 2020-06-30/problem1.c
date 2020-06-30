#include <stdio.h>
#include <string.h>

void main() {
    char input[100];

    scanf("%s", &input);

    for (int i = strlen(input); i >= 0; i--) {
        printf("%c", input[i]);
    }
}