#include "t6_5.h"
Position Find(List L, ElementType X)
{
    Position pos = 0;
    int ifFindX = 0;
    while (L)
    {
        if (L->Data == X)
        {
            ifFindX = 1;
        }
        pos++;
    }
    if (ifFindX) return pos;
    else return ERROR;
}
List Insert(List L, ElementType X, Position P)
{
    if (!L) // 如果头节点为空
    {
        List tempNode = (List)malloc(sizeof(struct LNode));
        tempNode->Data = X;
        tempNode->Next = NULL;
        return tempNode;
    }

    List head = L;
    Position i = 0;
    int insertSuccess = 0;
    List LastPtr = head;
    while (L)
    {
        if (i++ == P)
        {
            insertSuccess = 1;
            List tempNode = (List)malloc(sizeof(struct LNode));
            LastPtr->Next = tempNode;
            tempNode->Data = X;
            tempNode->Next = L;
            break;
        }
        LastPtr = L;
        L = L->Next;
    }

    if (insertSuccess) return head;
    else
    {
        printf("Wrong Position for Insertion");
        return ERROR;
    }
}
List Delete(List L, Position P)
{
    List head = L;
    Position i = 0;
    int deleteSuccess = 0;
    List LastPtr = head;
    while (L)
    {
        if (i++ == P)
        {
            deleteSuccess = 1;
            List tempNode = L;
            LastPtr->Next = L->Next;
            free(tempNode);
            break;
        }
        LastPtr = L;
        L = L->Next;
    }
    if (deleteSuccess) return head;
    else
    {
        printf("Wrong Position for Insertion");
        return ERROR;
    }
}