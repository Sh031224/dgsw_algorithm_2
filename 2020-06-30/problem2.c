#include <stdio.h>

int cal(int min) {
	if (min <= 15) {
		return 0;
	}
	else if (min <= 30) {
		return 1000;
	}
	else if (min <= 60 * 5) {
		return (min / 10) * 500;
	}
	else {
		return (min / 10) * 300;
	}
}

void main() {
	int min;
	scanf("%d", &min);

	printf("요금은 %d원 입니다.", cal(min));
}