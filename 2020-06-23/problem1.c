#include <stdio.h>

void main() {
	int input;
	int result = 0;

	scanf("%d", &input);

	for (int i = 1; i < input; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			result += i;
		}
	}

	printf("%d", result);
}