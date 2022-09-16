#include <stdio.h>
#include <stdlib.h>
#include "pub.h"

int main()
{
    List L1, L2;
    L1 = Read();
    Print(L1);
    L2 = Reverse(L1);
    Print(L1);
    Print(L2);
    return 0;
}

/* 你的代码将被嵌在这里 */
