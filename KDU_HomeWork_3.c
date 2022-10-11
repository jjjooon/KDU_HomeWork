#include <stdio.h>

// #3 1에서 100까지 5의 배수이면서 3의 배수가 아닌 수들을 더한 결과를 출력
int main() {
	
	int sum = 0;

	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0 && i % 3 != 0) {
			sum = sum + i;
		}
	}
	printf("1에서 100까지 5의 배수이면서 3의 배수가 아닌 수들의 합:%d", sum);

	return 0;
}