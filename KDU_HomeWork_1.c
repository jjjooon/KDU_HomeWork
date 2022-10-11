#include <stdio.h>

// #1 1에서 100까지 홀수만 더하기
int main() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
	}
	printf("1에서 100까지 홀수의 합:%d", sum);
	return 0;
}