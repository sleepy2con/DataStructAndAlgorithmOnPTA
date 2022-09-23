#pragma once
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 3
#define ERROR -1
//typedef enum { false, true } bool;
typedef int ElementType;
typedef int Position;
typedef struct LNode* List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
};
namespace t6_2
{
    List MakeEmpty();
    Position Find(List L, ElementType X);
    bool Insert(List L, ElementType X, Position P);
    bool Delete(List L, Position P);
}

