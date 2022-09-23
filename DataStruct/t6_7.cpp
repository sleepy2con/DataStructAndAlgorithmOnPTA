#include "t6_7.h"
namespace t6_7
{
    Stack CreateStack(int MaxSize);
    bool Push(Stack S, ElementType X, int Tag);
    ElementType Pop(Stack S, int Tag);

    Operation GetOp();  /* details omitted */
    void PrintStack(Stack S, int Tag); /* details omitted */

}