#include <stdio.h>
#include <stdlib.h>
//#include "6.1.h"
//#include "t6_2.h"
//#include "t6_5.h"
#include "t6_6.h"
using namespace t6_6;
int main()
{
    List L;
    ElementType X;
    Position P;
    int N;
    bool flag;

    L = MakeEmpty();
    scanf_s("%d", &N);
    while (N--) {
        scanf_s("%d", &X);
        flag = Insert(L, X, L->Next);
        if (flag == false) printf("Wrong Answer\n");
    }
    scanf_s("%d", &N);
    while (N--) {
        scanf_s("%d", &X);
        P = Find(L, X);
        if (P == ERROR)
            printf("Finding Error: %d is not in.\n", X);
        else {
            flag = Delete(L, P);
            printf("%d is found and deleted.\n", X);
            if (flag == false)
                printf("Wrong Answer.\n");
        }
    }
    flag = Insert(L, X, NULL);
    if (flag == false) printf("Wrong Answer\n");
    else
        printf("%d is inserted as the last element.\n", X);
    P = (Position)malloc(sizeof(struct LNode));
    flag = Insert(L, X, P);
    if (flag == true) printf("Wrong Answer\n");
    flag = Delete(L, P);
    if (flag == true) printf("Wrong Answer\n");
    for (P = L->Next; P; P = P->Next) printf("%d ", P->Data);
    return 0;
}

/* 你的代码将被嵌在这里 */
