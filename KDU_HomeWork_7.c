#include  <stdio.h>

// #7 1���� ����� ���ڸ� ���ϸ� 100�� �Ѿ�� ���� ���
int main() {
	int sum = 0;
	int i = 0;
	for (i = 1; i <= 100; i++) {
		sum = sum + i;
		if (sum > 100) {
			break;
		}
	}
	printf("1���� %d���� ���ڸ� ���ϸ� 100�� ����", i);

	return 0;
}