#include <stdio.h>

// #1 1���� 100���� Ȧ���� ���ϱ�
int main() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
	}
	printf("1���� 100���� Ȧ���� ��:%d", sum);
	return 0;
}