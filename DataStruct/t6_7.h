#pragma once
#include <stdio.h>
#include <stdlib.h>

#define ERROR 1e8
typedef int ElementType;
typedef enum { push, pop, end } Operation;
typedef enum { false, true } bool;
typedef int Position;
struct SNode {
    ElementType* Data;
    Position Top1, Top2;
    int MaxSize;
};
typedef struct SNode* Stack;

namespace t6_7
{
    Stack CreateStack(int MaxSize);
    bool Push(Stack S, ElementType X, int Tag);
    ElementType Pop(Stack S, int Tag);

    Operation GetOp();  /* details omitted */
    void PrintStack(Stack S, int Tag); /* details omitted */

}
