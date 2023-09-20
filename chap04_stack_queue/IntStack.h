/* int�� ���� IntStack(���) */ 
#ifndef ___IntStack
#define ___IntStack

/*--- ������ �����ϴ� ����ü ---*/
typedef struct {
	int max; 	/* ���� �뷮 */
	int ptr; 	/* ���� ������ */
	int *stk; 	/* ������ ù ��ҿ� ���� ������ */
} IntStack;

/*���� �ʱ�ȭ*/
int Initialize(IntStack *s, int max);

//���ÿ� �����͸� Ǫ��
int Push(IntStack *s, int x);

//���ÿ��� �����͸� ��
int Pop(IntStack *s, int *x);

//���ÿ��� �����͸� ��ũ
int Peek(IntStack *s, int *x);

//���� ����
void Clear(IntStack *s);

//������ �ִ� �뷮
int Capacity(const IntStack *s); 

//������ ������ ����
int Size(const IntStack *s);

//������ ����ֳ���?
int IsEmpty(const IntStack *s);

//������ ���� á����?
int IsFull(const IntStack *s);

//���ÿ��� �˻�
int Search(const IntStack *s, int x);

//��� ������ ���
void Print(const IntStack *s);

//���� ����
void Terminate(IntStack *s);
#endif 

/* [ ���� ����ü IntStack ] 
	������ �����ϴ� ����ü�Դϴ�. IntStack�� 3���� ����� �����˴ϴ�.
	
	1. �������� ����� �迭�� ����Ű�� ������ stk 
	�������� Ǫ�õ� �����͸� ������ �뵵�� �迭�� ����Ű�� �������Դϴ�.
	�׸� 4-3�� ���� �ε����� 0�� ��Ҹ� ������ �ٴ�(bottom)�̶� �ϸ�, ���� ���� Ǫ�õ� �����͸� �����ϴ� ���� stk[0]�Դϴ�.
	�迭�� �޸� ���� �Ҵ��� Initialize �Լ��� �����˴ϴ�.
	// ��� stk�� �迭�� ù ��Ҹ� ����Ű�� �������Դϴ�(�迭�� �ƴմϴ�). 
	
	2. ������ �ִ� �뷮 max
	������ �ִ� �뷮�� ��Ÿ���� ����Դϴ�. �� ���� �迭 stk�� ��� ������ �����ϴ�.
	
	3. ���� ������ ptr
	���ÿ� �׿� �ִ� �������� ������ ��Ÿ���� ����Դϴ�.
	�� ���� ���� ������(stack pointer)��� �մϴ�.
	���� ������ ��� ������ ptr�� ���� 0�� �ǰ� ���� �� ������ max�� ���� �����ϴ�.
	���� ���� Ǫ�õ� �ٴ��� �����ʹ� stk[0], ���� ���߿� Ǫ�õ� �����(top) �����ʹ� stk[ptr - 1]�Դϴ�. 
*/





















