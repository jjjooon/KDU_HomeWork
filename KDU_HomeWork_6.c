#include <stdio.h>

// #6 1에서 100까지 숫자를 계속 입력 받아서 그 숫자들의 합과 평균을 출력(단, -1 입력하면 종료)
int main() {

	int cnt = 0;
	float evg,num;
	float sum = 0;
	for (int i = 1; i <= 100; i++) {
		printf("숫자 입력:");
		scanf_s("%f", &num);
			if (num == -1) {
				printf("종료\n");
				break;
			}
			sum = sum + num;
			cnt = cnt + 1;
			evg = sum/cnt;
	}
	printf("1에서 100까지 숫자를 계속 입력 받은 수들의 합:%.0f\n", sum);
	printf("1에서 100까지 숫자를 계속 입력 받은 수들의 평균:%.1f\n", evg);
		return 0;
	
}