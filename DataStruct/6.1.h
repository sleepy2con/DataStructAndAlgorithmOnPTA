#pragma once
#include <stdio.h>

typedef int ElementType;
typedef struct Node* PtrToNode;
struct Node {
    int Data;
    PtrToNode   Next;
    Node():Data(0),Next(NULL)
    {
    }
};
typedef PtrToNode List;

List Read(); /* ϸ���ڴ˲��� */
void Print(List L); /* ϸ���ڴ˲��� */

List Reverse(List L);


