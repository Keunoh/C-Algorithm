//int�� ���� IntSet(�ҽ�)

#include <stdio.h>
#include <stdlib.h>
#include "IntSet.h"

//���� �ʱ�ȭ
int Initialize(IntSet *s, int max) {
	s->num = 0;
	if((s->set = calloc(max, sizeof(int))) == NULL) {
		s->max = 0;	//�迭 ������ ����
		return -1; 
	}
	s->max = max;
	return 0;
}

//���� s�� n�� ��� �ִ��� Ȯ��
int IsMember(const IntSet *s, int n) {
	int i;
	for(i = 0; i < s->num; i++)
		if(s->set[i] == n)
			return i;	//�������(�ε����� ��ȯ)
	return -1;			//������� ���� 
} 

//���� s�� n�� �߰�
void Add(IntSet *s, int n) {
	if(s->num < s->max && IsMember(s, n) == -1)	//������� ������
		s->set[s->num++] = n;		//�迭 ���� n�� �߰�
}

//���� s���� n�� ����
void Remove(IntSet *s, int n) {
	int idx;
	if((idx = IsMember(s, n)) != -1) {
		s->set[idx] = s->set[--s->num];	//������ ��Ҹ� ���� ��ġ�� �ű� 
	}
} 
