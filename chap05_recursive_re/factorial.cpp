/* ���������� ����� ��������� ���մϴ� */
#include <stdio.h>

// ���� n�� �������� ���� ��ȯ
int factorial(int n) {
	if (n > 0) {
		return n * factorial(n - 1);
	} else {
		return 1;
	}
}

// factorial(3)
// 3 * factorial(2)
// 3 * 2 * factorial(1)
// 3 * 2 * 1 * 1

int main(void) {
	int x;
	printf("���� �Է� : ");
	scanf("%d", &x);
	printf("%d�� �������� �� : %d\n", x, factorial(x));
	
	return 0;
}
