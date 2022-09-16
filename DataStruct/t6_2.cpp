#include "t6_2.h"

List MakeEmpty()
{
    return List();
}

Position Find(List L, ElementType X)
{
    for (int i = 0; i < MAXSIZE; i++)
    {
        if (L->Data[i] == X) return i;
    }
    return ERROR;
}

bool Insert(List L, ElementType X, Position P)
{
    return false;
}

bool Delete(List L, Position P)
{
    return false;
}
