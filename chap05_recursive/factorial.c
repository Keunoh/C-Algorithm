#include <stdio.h>

int factorial(int n)
{
	if(n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}
int main(void)
{
	int x;
	printf("integer : "); scanf("%d", &x);
	
	printf("factorial[%d] = %d\n", x, factorial(x));

	return 0;
}

/**
a. �Լ� ȣ��� factorial(3)�� �����ϸ� factorial �Լ��� ���۵˴ϴ�. �� �Լ��� �Ű����� n�� 3�� ���޹޾�
   3 * factorial(2)�� ��ȯ�մϴ�. �׷��� �� ������ �����Ϸ��� factorial(2)�� ���� ���ؾ��մϴ�.
   2�� �ٽ� �Ű������� �����ϰ� factorial �Լ��� ȣ���մϴ�. 
b. ȣ��� factorial �Լ��� �Ű����� n�� 2�� ���޹޽��ϴ�. �ٽ� ���� 2 * factorial(1)�� �����ϱ� ���� factorial �Լ��� ȣ���մϴ�.
c. �ٽ� ȣ��� factorial �Լ��� �Ű����� n�� 1�� ���޹޽��ϴ�. 1 * factorial(0)�� �����ϱ� ���� factorial �Լ��� ȣ���մϴ�.
d. ȣ��� factorial �Լ��� �Ű����� n�� ���޹��� ���� 0�̹Ƿ� 1�� ��ȯ�մϴ�.
--> �̷��� �Լ� ȣ�� ����� ��� ȣ��(Recursive call)�̶�� �մϴ�.
	���ȣ���� '�Լ� �ڽ�'�� ȣ���Ѵٰ� �����ϱ⺸�ٴ� '�ڱ� �ڽŰ� �Ȱ��� �Լ�'�� ȣ���Ѵٰ� �����ϴ� ���� �ڿ��������ϴ�.
	���� ��¥�� �Լ� �ڽ��� ȣ���ϸ� ������ �ڱ� �ڽ��� ȣ���ϴ� ������ ������״ϱ��. 
*/
