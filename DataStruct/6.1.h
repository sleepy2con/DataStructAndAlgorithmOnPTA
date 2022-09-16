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

List Read(); /* 细节在此不表 */
void Print(List L); /* 细节在此不表 */

List Reverse(List L);


