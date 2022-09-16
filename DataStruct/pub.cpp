#include "pub.h"

List Read()
{
	int size = 0;
	scanf_s("%d", &size);
	if (size <= 0) return NULL;

	Node* tempNode = new Node;
	Node* head = tempNode;
	scanf_s("%d", &tempNode->Data);
	for (int i = 0; i < size - 1; i++)
	{
		Node* CurNode = new Node;
		tempNode->Next = CurNode;
		scanf_s("%d", &CurNode->Data);
		tempNode = CurNode;
	}
	return head;
}
void Print(List L)
{
	Node* tempNode = L;
	while (tempNode)
	{
		printf("%d", tempNode->Data);
		tempNode = tempNode->Next;
	}
}

List Reverse(List L)
{
	List tempNode = L;
	L = NULL;
	List CurNode;
	while (tempNode)
	{
		List tempNext = tempNode->Next;
		CurNode = tempNode;
		CurNode->Next = L;
		L = CurNode;
		tempNode = tempNext;
	}
	return L;
}