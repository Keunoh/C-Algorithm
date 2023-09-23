//int�� ť IntQueue(���)
#ifndef ___IntQueue
#define ___IntQueue

//ť�� �����ϴ� ����ü
typedef struct {
	int max;	//ť�� �ִ� �뷮 
	int num;	//������ ��� ����
	int front;	//����Ʈ
	int rear;	//����
	int *que;	//ť�� �� �� ��ҿ� ���� ������
} IntQueue;

//ť �ʱ�ȭ
int Intialize(IntQueue *q, int max);

//ť�� �����͸� ��ť
int Enque(IntQueue *q, int x);

//ť���� �����͸� ��ť
int Deque(IntQueue *q, int *x);

//ť���� �����͸� ��ũ
int Peek(const IntQueue *q, int *x);

//��� ������ ����
void Clear(IntQueue *q);

// ť�� �ִ� �뷮
int Capacity(const IntQueue *q);

//ť�� ����� ������ ����
int Size(const IntQueue *q);

//ť�� ��� �ִ°�
int IsEmpty(const IntQueue *q);

//ť�� ���� á�°�
int IsFull(const IntQueue *q);

//ť���� �˻�
int Search(const IntQueue *q, int x);

//��� ������ ���
void Print(const IntQueue *q);

//ť ����
void Terminate(IntQueue *q);
#endif 

/* [ �� ���۷� ť ����� ]
	�̹����� �迭 ��Ҹ� �������� �ű��� �ʴ� ť�� ������ ���ڽ��ϴ�.
	�̸� ���� ����ϴ� �ڷᱸ���� �� ����(ring buffer)�Դϴ�.
	�� ���۴� �迭�� ó���� ���� ����Ǿ��ٰ� ���� �ڷᱸ���Դϴ�.
	���⼭ �������� � ��Ұ� ù ��° ����̰� � ��Ұ� ������ ������� �Ǻ��ϱ� ���� ������ ����Ʈ(front)�� ����(rear)�Դϴ�.
	
	// ���⼭ ����Ʈ(front)�� ����(rear)�� ������ �������� ������ ���մϴ�(�迭�� ������ ����� ������ �ƴմϴ�).
	// ����Ʈ(front) : �� ó�� ����� �ε���
	// ���� (rear) : �� �� ����� �ϳ� ���� �ε���(���� ��Ҹ� ��ť�� ��ġ�� �̸� ����)
	
	�̷��� ť�� �����ϸ� ����Ʈ�� ���� ���� ������Ʈ�ϸ� ��ť�� ��ť�� �����ϱ� ������ �տ��� �߻��� ��� �̵� ������ �ذ��� �� �ֽ��ϴ�.
	���� ó���� ���⵵�� O(1)�Դϴ�.
	
	// �տ��� ������ ť�� ��� �̵��� �����ϱ� ������ ���⵵�� O(n)�̾����ϴ�. 
*/





























