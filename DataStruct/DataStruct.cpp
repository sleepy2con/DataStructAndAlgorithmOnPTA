#include <stdio.h>
#include <stdlib.h>
#include "6.1.h"
#include "t6_2.h"

int main()
{
    // 6.1
  /*  List L1, L2;
    L1 = Read();
    Print(L1);
    L2 = Reverse(L1);
    Print(L2);*/
    List L;
    ElementType X;
    Position P;
    int N;

    L = MakeEmpty();
    scanf("%d", &N);
    while (N--) {
        scanf("%d", &X);
        if (Insert(L, X, 0) == false)
            printf(" Insertion Error: %d is not in.\n", X);
    }
    scanf("%d", &N);
    while (N--) {
        scanf("%d", &X);
        P = Find(L, X);
        if (P == ERROR)
            printf("Finding Error: %d is not in.\n", X);
        else
            printf("%d is at position %d.\n", X, P);
    }
    scanf("%d", &N);
    while (N--) {
        scanf("%d", &P);
        if (Delete(L, P) == false)
            printf(" Deletion Error.\n");
        if (Insert(L, 0, P) == false)
            printf(" Insertion Error: 0 is not in.\n");
    }
    return 0;
    return 0;
}

/* 你的代码将被嵌在这里 */
