#include <stdio.h>

// #6 1���� 100���� ���ڸ� ��� �Է� �޾Ƽ� �� ���ڵ��� �հ� ����� ���(��, -1 �Է��ϸ� ����)
int main() {

	int cnt = 0;
	float evg,num;
	float sum = 0;
	for (int i = 1; i <= 100; i++) {
		printf("���� �Է�:");
		scanf_s("%f", &num);
			if (num == -1) {
				printf("����\n");
				break;
			}
			sum = sum + num;
			cnt = cnt + 1;
			evg = sum/cnt;
	}
	printf("1���� 100���� ���ڸ� ��� �Է� ���� ������ ��:%.0f\n", sum);
	printf("1���� 100���� ���ڸ� ��� �Է� ���� ������ ���:%.1f\n", evg);
		return 0;
	
}