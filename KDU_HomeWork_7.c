#include  <stdio.h>

// #7 1에서 몇까지 숫자를 더하면 100을 넘어가는 지를 출력
int main() {
	int sum = 0;
	int i = 0;
	for (i = 1; i <= 100; i++) {
		sum = sum + i;
		if (sum > 100) {
			break;
		}
	}
	printf("1에서 %d까지 숫자를 더하면 100을 넘음", i);

	return 0;
}