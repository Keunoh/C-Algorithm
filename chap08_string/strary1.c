/* 저장한 문자열을 출력합니다. */
#include <stdio.h>

int main (void)
{
	char st[10];
	st[0] = 'A';
	st[1] = 'B';
	st[2] = 'C';
	st[3] = 'D';
	st[4] = '\0';
	st[5] = 'X'; 
	printf("문자열 st에는 \"%s\"가 들어 있습니다.\n", st);
	
	return 0;
}

/* [ 배열에 문자열 저장하기 ]
	문자열 값을 char형 배열에 저장하면 자유롭게 값을 꺼내고 쓸 수 있습니다. 
	요소의 자료형이 char형이고 요소의 개수가 10인 배열 st의 요소에 문자열을 구성할 문자를 하나씩 순서대로 대입합니다.
	마지막 문자는 문자열의 끝을 나타내는 널 문자입니다. 대입 한 후 배열 st의 모습은 그림 8-2와 같습니다.
	C 언어에서 널 문자는 문자열의 끝을 나타냅니다. 
	따라서 st[5]부터 어떤 문자를 대입해도 널 문자까지만 문자열이라고 인식합니다.
	아래와 같이 st[5]에 문자를 대입해도 ABCD로 출력됩니다. 
*/

