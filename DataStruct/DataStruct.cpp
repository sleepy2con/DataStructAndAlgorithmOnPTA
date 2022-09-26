#include <stdio.h>
#include <stdlib.h>
//#include "6.1.h"
//#include "t6_2.h"
//#include "t6_5.h"
//#include "t6_6.h"
#include "t6_7.h"
using namespace t6_7;
int main()
{
    int N, Tag, X;
    Stack S;
    int done = 0;

    scanf_s("%d", &N);
    S = CreateStack(N);
    while (!done) {
        switch (GetOp()) {
        case push:
            scanf_s("%d %d", &Tag, &X);
            if (!Push(S, X, Tag)) printf("Stack %d is Full!\n", Tag);
            break;
        case pop:
            scanf_s("%d", &Tag);
            X = Pop(S, Tag);
            if (X == ERROR) printf("Stack %d is Empty!\n", Tag);
            break;
        case end:
            PrintStack(S, 1);
            PrintStack(S, 2);
            done = 1;
            break;
        }
    }
    return 0;
}

/* 你的代码将被嵌在这里 */
