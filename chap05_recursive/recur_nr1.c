/*--- �Լ� recur(���� ��͸� ����) ---*/
void recur(int n)
{
	Top :
		if(n > 0) {
			recur(n - 1);
			printf("%d\n", n);
			n = n - 2;
			goto Top;
		}
}

/* n�� ���� n - 2�� ������Ʈ�ϰ� �Լ��� ���� �������� ���ư��ϴ�. */
