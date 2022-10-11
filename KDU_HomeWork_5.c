#include <stdio.h>

// #5 1에서 100까지 짝수이면서 5의 배수이거나 3의 배수가 아닌 수들을 더한 결과를 출력
int main() {

	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0 && i % 5 == 0 || i % 3 != 0) {
			sum = sum + i;
		}
	}
	printf("1에서 100까지 짝수이면서 5의 배수이거나 3의 배수가 아닌 수들을 더한 합:%d\n", sum);
	return 0;
}