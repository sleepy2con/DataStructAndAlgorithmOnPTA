#include "pub.h"

List Read()
{
    int size = 0;
    scanf_s("%d", &size);
    if (size <= 0) return NULL;
    Node* head = new Node;
    Node* tempNode = head->Next;
    for (int i = 0; i < size; i++)
    {
        tempNode = new Node;
        scanf_s("%d ", &tempNode->Data);
        tempNode->Next = NULL;
        tempNode = tempNode->Next;
    }
    tempNode = head->Next;
    delete head;
    return tempNode;
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
        CurNode = tempNode;
        CurNode->Next = L;
        tempNode = tempNode->Next;
        L = CurNode;
    }
    return L;
}