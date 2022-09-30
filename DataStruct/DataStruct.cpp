#include <stdio.h>
#include <stdlib.h>
//#include "6.1.h"
//#include "t6_2.h"
//#include "t6_5.h"
//#include "t6_6.h"
//#include "t6_7.h"
#include "t6_9.h"
using namespace t6_9;
int main()
{
    BinTree BT = CreatBinTree();
    printf("Inorder:");    InorderTraversal(BT);    printf("\n");
    printf("Preorder:");   PreorderTraversal(BT);   printf("\n");
    printf("Postorder:");  PostorderTraversal(BT);  printf("\n");
    printf("Levelorder:"); LevelorderTraversal(BT); printf("\n");
	return 0;
}

/* 你的代码将被嵌在这里 */
