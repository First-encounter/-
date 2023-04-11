#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//typedef int DataType;
//
////链式结构
//typedef struct Node
//{
//	DataType data;
//	struct Node* next;
//}Node, * LinkList;
//
////尾插法建表
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
////单链表的就地逆置
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
////输出链表
//void output(LinkList L,int n)
//{
//	int i;
//	Node* p;
//	p = L->next;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d>、%d      ",i, p->data);
//		p = p->next;
//	}
//		
//	
//}
//
//
//
////主函数
//int main()
//{
//	LinkList L;
//	int n;
//	printf("请输入单链表的数据量：\n");
//	scanf("%d", &n);
//	printf("请输入数据：\n");
//	CreateList(L, n);
//	printf("单链表创建完成，顺序遍历如下：\n");
//	output(L, n);
//	printf("\n");
//	printf("单链表逆置完成，逆置遍历如下：\n");
//	Reverse_1(L);
//	output(L, n);
//	printf("\n");
//	return 0;
//}

//
//#include <stdio.h>
//#include <malloc.h>
//using namespace std;
////用链表实现约瑟夫环问题 （循环链表） 
//
//typedef struct node  //typedef用来重命名struct node这种数据类型，将其命名为Node 
//{
//	int data;
//	struct node* next;
//}Node;
//
//void ysflb(int N, int M)  //总共有N个人，报到数字为M的人出局 
//{
//	//初始化循环链表
//	Node* head = NULL, * p = NULL, * r = NULL;   //head为头指针，指向链表的第一个结点，一开始赋值为NULL,代表不指向任何结点 
//	head = (Node*)malloc(sizeof(Node));  //让head指向一个实际的空间
//	if (NULL == head)  //内存空间可能会申请失败,大多数情况不会申请失败 
//	{
//		printf("Memory Failed!");
//		return;
//	}
//	head->data = 1;       //从1开始编号 
//	head->next = NULL;    //一开始整个链表只有一个Node(结点)，这个Node有两个域，分别是data和next
//	//data从1开始，next指向NULL，总共需要N个结点，现在创建了一个，还需要N-1个 
//	p = head;             //head要保持不能改变，才能够找到链表的起始位置，一开始p也指向第一个结点
//	//p等一下会被使用，用它可以便于创建剩下的N-1个结点 
//
////尾插法创建链表,已经有一个1号结点了，还需要创建剩下的n-1个结点 
//	for (int i = 2; i <= N; i++)
//	{
//		r = (Node*)malloc(sizeof(Node));
//		r->data = i;
//		r->next = NULL;
//		//插入结点 
//		p->next = r;
//		p = r;
//
//	}
//	//创建循环链表
//	p->next = head;   //最后一个结点的next指向头结点
//	p = head;         //为后续方便，将p指向头结点
//
//	//约瑟夫环的模拟
//	while (p->next != p)  //如果p的next=p，说明目前只有一个元素 
//	{
//		for (int i = 1; i < M; i++)  //报到数字为M的时候出局 
//		{
//			r = p;   //保留出局的前一个结点 
//			p = p->next; //p指向的是要出局的这个结点，需要保留前一个结点
//		}
//		// 输出
//		printf("%d", p->data);
//		r->next = p->next;    //删除p的目的，此时p指向哪里？  ：  
//		p = p->next;  //更新p重新进行报数 
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
////链式结构
//typedef struct Node
//{
//	DataType data;
//	struct Node* next;
//}Node,*LinkList;
//
//
////约瑟夫环的实现
//void ysfh(int N, int K, int M)
//{
//		//初始化循环链表
//	Node* head = NULL, * p = NULL, * r = NULL;   //head为头指针，指向链表的第一个结点，一开始赋值为NULL,代表不指向任何结点 
//	head = new Node;  //让head指向一个实际的空间
//	if (NULL == head)  //内存空间可能会申请失败,大多数情况不会申请失败 
//	{
//		printf("Memory Failed!");
//		return;
//	}
//	head->data = 1;       //从1开始编号 
//	head->next = NULL;    //一开始整个链表只有一个Node(结点)，这个Node有两个域，分别是data和next
//	//data从1开始，next指向NULL，总共需要N个结点，现在创建了一个，还需要N-1个 
//	p = head;             //head要保持不能改变，才能够找到链表的起始位置，一开始p也指向第一个结点
//	//p等一下会被使用，用它可以便于创建剩下的N-1个结点 
//
////尾插法创建链表,已经有一个1号结点了，还需要创建剩下的n-1个结点 
//	for (int i = 2; i <= N; i++)
//	{
//		r = new Node;
//		r->data = i;
//		r->next = NULL;
//		//插入结点 
//		p->next = r;
//		p = r;
//
//	}
//	//创建循环链表
//	p->next = head;   //最后一个结点的next指向头结点
//	p = head;         //为后续方便，将p指向头结点
//
//	for (int i = 1; i < K; i++)
//	{
//		p = p->next;
//	}
//	printf("出列顺序为：\n");
//	//约瑟夫环的模拟
//	while (p->next != p)  //如果p的next=p，说明目前只有一个元素 
//	{
//		for (int i = 1; i < M; i++)  //报到数字为M的时候出局 
//		{
//			r = p;   //保留出局的前一个结点 
//			p = p->next; //p指向的是要出局的这个结点，需要保留前一个结点
//		}
//		// 输出
//		printf("%d   ", p->data);
//		r->next = p->next;    //删除p的目的，此时p指向哪里？  ：  
//		p = p->next;  //更新p重新进行报数 
//	}
//	printf("%d   " ,p->data);
//}
//
////主函数
//int main()
//{
//	int N, K, M;
//	printf("请依次输入N（总数）、K（起始报数人）、M（报几人提出）\n");
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