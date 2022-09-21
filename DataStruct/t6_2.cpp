#include "t6_2.h"

List MakeEmpty()
{
    //LNode* list = new LNode;
    List list = (List)malloc(sizeof(struct LNode));
    list->Last = -1;
    return list;
}

Position Find(List L, ElementType X)
{
    for (int i = 0; i <= L->Last; i++)
    {
        if (L->Data[i] == X) return i;
    }
    return ERROR;
}

bool Insert(List L, ElementType X, Position P)
{
    if (L->Last >= MAXSIZE - 1)
    {
        printf("FULL");
        return false;
    }
    if (P<0 || P>L->Last + 1)
    {
        printf("ILLEGAL POSITION");
        return false;
    }

    for (int i = L->Last + 1; i > P; i--)
    {
        L->Data[i] = L->Data[i - 1];
    }
    L->Data[P] = X;
    L->Last++;
    return true;
}

bool Delete(List L, Position P)
{
    if (P > L->Last || P < 0)
    {
        printf("POSITION %d EMPTY", P);
        return false;
    }
    for (int i = P; i < L->Last; i++)
    {
        L->Data[i] = L->Data[i + 1];
    }
    L->Last--;
    return true;
}
