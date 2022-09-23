#pragma once
#include <stdio.h>
#include <stdlib.h>

#define ERROR NULL
//typedef enum { false, true } bool;
typedef int ElementType;
typedef struct LNode* PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode Position;
typedef PtrToLNode List;

namespace t6_6 {

List MakeEmpty();
Position Find(List L, ElementType X);
bool Insert(List L, ElementType X, Position P);
bool Delete(List L, Position P);
}