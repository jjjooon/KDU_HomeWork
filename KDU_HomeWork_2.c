#include <stdio.h>

// #2 1���� 100���� 3�� ����� �ƴ� ���鸸 ���ϱ�
int main() {
	int sum = 0;

	for (int i = 1; i <= 100; i++) {
		if (i % 3 != 0) {
			sum = sum + i;
		}
	}
	printf("1���� 100���� 3�� ����� �ƴ� ������ ��:%d", sum);
	return 0;
}