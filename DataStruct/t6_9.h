#pragma once
#include <stdio.h>
#include <stdlib.h>
namespace t6_9
{
    typedef char ElementType;
    typedef struct TNode* Position;
    typedef Position BinTree;
    struct TNode {
        ElementType Data;
        BinTree Left;
        BinTree Right;
        TNode() :Data(0), Left(NULL), Right(NULL)
        {
        }
    };

    BinTree CreatBinTree(); /* ÊµÏÖÏ¸½ÚºöÂÔ */
    void InorderTraversal(BinTree BT);
    void PreorderTraversal(BinTree BT);
    void PostorderTraversal(BinTree BT);
    void LevelorderTraversal(BinTree BT);


}
