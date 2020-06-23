#include <stdio.h>

void main() {
	unsigned long long int input;
	unsigned long long int max = 0;

	scanf("%lld", &input);

	for (unsigned long long int i = 2; i * i <= input; i++) {

		while (input % i == 0) {
			if (max < i) {
				max = i;
			}
			input /= i;
		}
	}

	if (input != 1) {
		printf("%lld", input);
	}


}