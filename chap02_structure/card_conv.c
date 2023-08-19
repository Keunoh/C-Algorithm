#include <stdio.h>

int card_convr(unsigned x, int n, char d[])
{
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;
	if(x == 0)
		d[digits++] = dchar[0];
	else 
		while(x) { /* x�� 0�Ǹ� break */
			d[digits++] = dchar[x % n];
			x /= n;
		}
	return digits;
}

int main(void)
{
	int i;
	unsigned no;	//��ȯ�ϴ� ���� 
	int cd;			//��� 
	int dno;		//��ȯ �� �ڸ��� 
	char cno[512];	//��ȯ�� ���� �� �ڸ��� ���ڸ� �����ϴ� ���� �迭
	int retry;
	puts("conversion!");
	
	do {
		printf("integer : "); scanf("%u", &no);
		do {
			printf("which zinsu?(2-36) : "); scanf("%d", &cd);
		} while(cd < 2 || cd > 36);
		dno = card_convr(no, cd, cno);
		
		for(i = dno - 1; i >= 0; i--)
			printf("%c", cno[i]);
		printf("\n one more? (1, 0) : "); scanf("%d", &retry);
	} while(retry == 1);
	
	return 0;
}
