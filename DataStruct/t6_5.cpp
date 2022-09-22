#include "t6_5.h"
Position Find(List L, ElementType X)
{
    Position pos = NULL;
    int ifFindX = 0;
    while (L)
    {
        if (L->Data == X)
        {
            ifFindX = 1;
            pos = L;
            break;
        }
        L = L->Next;
    }
    if (ifFindX) return pos;
    else return ERROR;
}
List Insert(List L, ElementType X, Position P)
{

    if (!L) // 如果头节点为空      // 在头节点插入
    {
        List tempNode = (List)malloc(sizeof(struct LNode));
        tempNode->Data = X;
        tempNode->Next = NULL;
        return tempNode;
    }

    List nodeBeforeHead = (List)malloc(sizeof(struct LNode));
    nodeBeforeHead->Next = L;

    int insertSuccess = 0;
    List LastPtr = nodeBeforeHead;
    while (L)
    {
        if (L == P)
        {
            insertSuccess = 1;
            List tempNode = (List)malloc(sizeof(struct LNode));
            L = LastPtr->Next;
            LastPtr->Next = tempNode;
            tempNode->Data = X;
            tempNode->Next = L;
            break;
        }
        LastPtr = L;
        L = L->Next;
    }

    if (P == NULL)      // 末尾插入节点、
    {
        List tempNode = (List)malloc(sizeof(struct LNode));
        tempNode->Data = X;
        tempNode->Next = NULL;
        LastPtr->Next = tempNode;
        insertSuccess = 1;
    }

    L = nodeBeforeHead->Next;
    free(nodeBeforeHead);
    if (insertSuccess) return L;
    else
    {
        printf("Wrong Position for Insertion\n");
        return ERROR;
    }
}
List Delete(List L, Position P)
{
    List head = L;
    int deleteSuccess = 0;
    List nodeBeforeHead = (List)malloc(sizeof(struct LNode));
    nodeBeforeHead->Next = L;
    List LastPtr = nodeBeforeHead;
    while (L)
    {
        if (L == P)
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

    L = nodeBeforeHead->Next;
    free(nodeBeforeHead);
    if (deleteSuccess) return L;
    else
    {
        printf("Wrong Position for Deletion\n");
        return ERROR;
    }
}