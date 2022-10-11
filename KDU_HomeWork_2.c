#include <stdio.h>

// #2 1에서 100까지 3의 배수가 아닌 수들만 더하기
int main() {
	int sum = 0;

	for (int i = 1; i <= 100; i++) {
		if (i % 3 != 0) {
			sum = sum + i;
		}
	}
	printf("1에서 100까지 3의 배수가 아닌 수들의 합:%d", sum);
	return 0;
}