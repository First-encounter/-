#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//typedef int DataType;
//
////��ʽ�ṹ
//typedef struct Node
//{
//	DataType data;
//	struct Node* next;
//}Node, * LinkList;
//
////β�巨����
//void CreateList(LinkList& L, int n)
//{
//	LinkList p, q;
//	L = new Node;
//	L->next = NULL;
//	q = L;
//	while (n--)
//	{
//		p = new Node;
//		scanf("%d", &p->data);
//		q->next = p;
//		q = p;
//	}
//	q->next = NULL;
//}
//
////������ľ͵�����
//void Reverse_1(LinkList L)
//{
//	Node* p, * r;
//	p = L->next;
//	L->next = NULL;
//	while (p!=NULL)
//	{
//		r = p->next;
//		p->next = L->next;
//		L->next = p;
//		p = r;
//	}
//}
//
////�������
//void output(LinkList L,int n)
//{
//	int i;
//	Node* p;
//	p = L->next;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d>��%d      ",i, p->data);
//		p = p->next;
//	}
//		
//	
//}
//
//
//
////������
//int main()
//{
//	LinkList L;
//	int n;
//	printf("�����뵥�������������\n");
//	scanf("%d", &n);
//	printf("���������ݣ�\n");
//	CreateList(L, n);
//	printf("����������ɣ�˳��������£�\n");
//	output(L, n);
//	printf("\n");
//	printf("������������ɣ����ñ������£�\n");
//	Reverse_1(L);
//	output(L, n);
//	printf("\n");
//	return 0;
//}

//
//#include <stdio.h>
//#include <malloc.h>
//using namespace std;
////������ʵ��Լɪ������ ��ѭ������ 
//
//typedef struct node  //typedef����������struct node�����������ͣ���������ΪNode 
//{
//	int data;
//	struct node* next;
//}Node;
//
//void ysflb(int N, int M)  //�ܹ���N���ˣ���������ΪM���˳��� 
//{
//	//��ʼ��ѭ������
//	Node* head = NULL, * p = NULL, * r = NULL;   //headΪͷָ�룬ָ������ĵ�һ����㣬һ��ʼ��ֵΪNULL,����ָ���κν�� 
//	head = (Node*)malloc(sizeof(Node));  //��headָ��һ��ʵ�ʵĿռ�
//	if (NULL == head)  //�ڴ�ռ���ܻ�����ʧ��,����������������ʧ�� 
//	{
//		printf("Memory Failed!");
//		return;
//	}
//	head->data = 1;       //��1��ʼ��� 
//	head->next = NULL;    //һ��ʼ��������ֻ��һ��Node(���)�����Node�������򣬷ֱ���data��next
//	//data��1��ʼ��nextָ��NULL���ܹ���ҪN����㣬���ڴ�����һ��������ҪN-1�� 
//	p = head;             //headҪ���ֲ��ܸı䣬���ܹ��ҵ��������ʼλ�ã�һ��ʼpҲָ���һ�����
//	//p��һ�»ᱻʹ�ã��������Ա��ڴ���ʣ�µ�N-1����� 
//
////β�巨��������,�Ѿ���һ��1�Ž���ˣ�����Ҫ����ʣ�µ�n-1����� 
//	for (int i = 2; i <= N; i++)
//	{
//		r = (Node*)malloc(sizeof(Node));
//		r->data = i;
//		r->next = NULL;
//		//������ 
//		p->next = r;
//		p = r;
//
//	}
//	//����ѭ������
//	p->next = head;   //���һ������nextָ��ͷ���
//	p = head;         //Ϊ�������㣬��pָ��ͷ���
//
//	//Լɪ�򻷵�ģ��
//	while (p->next != p)  //���p��next=p��˵��Ŀǰֻ��һ��Ԫ�� 
//	{
//		for (int i = 1; i < M; i++)  //��������ΪM��ʱ����� 
//		{
//			r = p;   //�������ֵ�ǰһ����� 
//			p = p->next; //pָ�����Ҫ���ֵ������㣬��Ҫ����ǰһ�����
//		}
//		// ���
//		printf("%d", p->data);
//		r->next = p->next;    //ɾ��p��Ŀ�ģ���ʱpָ�����  ��  
//		p = p->next;  //����p���½��б��� 
//	}
//	printf("%d" ,p->data);
//}
//
////int main()
////{
////	ysflb(10, 3);
////	return 0;
////}
//
//
//#include <stdio.h>
//typedef int DataType;
//
////��ʽ�ṹ
//typedef struct Node
//{
//	DataType data;
//	struct Node* next;
//}Node,*LinkList;
//
//
////Լɪ�򻷵�ʵ��
//void ysfh(int N, int K, int M)
//{
//		//��ʼ��ѭ������
//	Node* head = NULL, * p = NULL, * r = NULL;   //headΪͷָ�룬ָ������ĵ�һ����㣬һ��ʼ��ֵΪNULL,����ָ���κν�� 
//	head = new Node;  //��headָ��һ��ʵ�ʵĿռ�
//	if (NULL == head)  //�ڴ�ռ���ܻ�����ʧ��,����������������ʧ�� 
//	{
//		printf("Memory Failed!");
//		return;
//	}
//	head->data = 1;       //��1��ʼ��� 
//	head->next = NULL;    //һ��ʼ��������ֻ��һ��Node(���)�����Node�������򣬷ֱ���data��next
//	//data��1��ʼ��nextָ��NULL���ܹ���ҪN����㣬���ڴ�����һ��������ҪN-1�� 
//	p = head;             //headҪ���ֲ��ܸı䣬���ܹ��ҵ��������ʼλ�ã�һ��ʼpҲָ���һ�����
//	//p��һ�»ᱻʹ�ã��������Ա��ڴ���ʣ�µ�N-1����� 
//
////β�巨��������,�Ѿ���һ��1�Ž���ˣ�����Ҫ����ʣ�µ�n-1����� 
//	for (int i = 2; i <= N; i++)
//	{
//		r = new Node;
//		r->data = i;
//		r->next = NULL;
//		//������ 
//		p->next = r;
//		p = r;
//
//	}
//	//����ѭ������
//	p->next = head;   //���һ������nextָ��ͷ���
//	p = head;         //Ϊ�������㣬��pָ��ͷ���
//
//	for (int i = 1; i < K; i++)
//	{
//		p = p->next;
//	}
//	printf("����˳��Ϊ��\n");
//	//Լɪ�򻷵�ģ��
//	while (p->next != p)  //���p��next=p��˵��Ŀǰֻ��һ��Ԫ�� 
//	{
//		for (int i = 1; i < M; i++)  //��������ΪM��ʱ����� 
//		{
//			r = p;   //�������ֵ�ǰһ����� 
//			p = p->next; //pָ�����Ҫ���ֵ������㣬��Ҫ����ǰһ�����
//		}
//		// ���
//		printf("%d   ", p->data);
//		r->next = p->next;    //ɾ��p��Ŀ�ģ���ʱpָ�����  ��  
//		p = p->next;  //����p���½��б��� 
//	}
//	printf("%d   " ,p->data);
//}
//
////������
//int main()
//{
//	int N, K, M;
//	printf("����������N����������K����ʼ�����ˣ���M�������������\n");
//	scanf("%d%d%d", &N, &K, &M);
//	ysfh(N, K, M);
//	return 0;
//}

#include <stdio.h>
#define STACKSIZE 50
#define FALSE 0
#define TRUE 1
typedef int DataType;
typedef struct
{
	DataType data[STACKSIZE];
	int top;
}SeqStack;

void InitStack(SeqStack& S)
{
	S.top = -1;
}

int Push(SeqStack& S, DataType x)
{
	if (S.top == STACKSIZE - 1)
		return FALSE;
	else
	{
		S.top++;
		S.data[S.top] = x;
		return TRUE;
	}
}

int Pop(SeqStack& S, DataType& x)
{
	if (S.top == -1)
	{
		return FALSE;
	}
	else
	{
		x = S.data[S.top];
		S.top--;
		return TRUE;
	}
}
int StackEmpty(SeqStack& S)
{
	if (S.top == -1)
		return TRUE;
	else
		return FALSE;
}
void Conversion()
{
	int e;
	int N;
	SeqStack S;
	InitStack(S);
	scanf("%d", &N);
	while (N)
	{
		Push(S, N % 2);
		N = N / 2;
	}
	while (!StackEmpty(S))
	{
		Pop(S, e);
		printf("%d", e);
	}

}

int main()
{
	Conversion();
	return 0;
}