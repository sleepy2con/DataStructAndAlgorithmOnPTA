#include "t6_9.h"
#include <string>
namespace t6_9
{

    BinTree CreatBinTree()
    {
        BinTree Q[10000];//用BinTree的类型的数组模拟队列
        int head = 0, tail = 1;//记录头位置
        std::string str;
        scanf_s("%s", str);
        int curNodeNum = 1;
        int i = 0;
        while (i < str.size())
        {
            for (; i < curNodeNum; i++)
            {
                if (str[i] != '#')
                {

                }
            }
            curNodeNum *= 2;    // 二叉树节点数每次*2；1，2，4，8
        }
        

        //ElementType Data;
        //BinTree BT, T;
        //BinTree Q[10000];//用BinTree的类型的数组模拟队列
        //int head = 0, tail = 1;//记录头位置
        //scanf_s("%c", &Data);
        //if (Data != '#') { //单独处理根节点
        //    BT = (BinTree)malloc(sizeof(struct TNode));
        //    BT->Data = Data;
        //    BT->Left = BT->Right = NULL;//先把下边的左右 节点置为NULL 
        //    Q[head] = BT;		//BT放入队列里
        //}
        //else return NULL; //根节点是# ，直接over
        //while (head != tail) { //队列不为空
        //    T = Q[head];//弹出第一个
        //    head++;//表示空的指针也需要动
        //    scanf_s("%c", &Data);
        //    if (Data == '#')
        //        T->Left = NULL;//
        //    else {
        //        T->Left = (BinTree)malloc(sizeof(struct TNode));
        //        T->Left->Data = Data;
        //        T->Left->Left = T->Left->Right = NULL;//先把下边的左右 节点置为NULL 
        //        Q[tail++] = T->Left;//T->Left入队 

        //    }
        //    scanf_s("%c", &Data);
        //    if (Data == '#')
        //        T->Right = NULL;
        //    else {
        //        T->Right = (BinTree)malloc(sizeof(struct TNode));
        //        T->Right->Data = Data;
        //        T->Right->Left = T->Right->Right = NULL;//先把下边的左右 节点置为NULL 
        //        Q[tail++] = T->Right;
        //    }
        //}
        //return BT;//因为左节点先入队，所以先处理左节点(赋值) 
        /*BinTree head = (BinTree)malloc(sizeof(struct TNode));
        BinTree tempNode = head;
        head->Data = 'A';
        tempNode->Left = (BinTree)malloc(sizeof(struct TNode));
        tempNode->Left->Data = 'B';

        tempNode->Left->Left = (BinTree)malloc(sizeof(struct TNode));
        tempNode->Left->Left->Data = 'D';
        tempNode->Left->Right = (BinTree)malloc(sizeof(struct TNode));
        tempNode->Left->Right->Data = 'F';

        tempNode->Left->Right->Left = (BinTree)malloc(sizeof(struct TNode));
        tempNode->Left->Right->Left->Data = 'E';

        tempNode->Right = (BinTree)malloc(sizeof(struct TNode));
        tempNode->Right->Data = 'C';
        tempNode->Right->Left = (BinTree)malloc(sizeof(struct TNode));
        tempNode->Right->Left->Data = 'G';
        tempNode->Right->Left->Right = (BinTree)malloc(sizeof(struct TNode));
        tempNode->Right->Left->Right->Data = 'H';

        tempNode->Right->Right = (BinTree)malloc(sizeof(struct TNode));
        tempNode->Right->Right->Data = 'I';
        return head;*/
    }
    void InorderTraversal(BinTree BT)
    {
        if (!BT) return;
        InorderTraversal(BT->Left);
        printf("%c", BT->Data);
        InorderTraversal(BT->Right);
    }
    void PreorderTraversal(BinTree BT)
    {
        if (!BT) return;
        printf("%c", BT->Data);
        InorderTraversal(BT->Left);
        InorderTraversal(BT->Right);
    }
    void PostorderTraversal(BinTree BT)
    {
        if (!BT) return;
        InorderTraversal(BT->Left);
        InorderTraversal(BT->Right);
        printf("%c", BT->Data);
    }
    void LevelorderTraversal(BinTree BT)
    {
        if (!BT) return;
        BinTree btArr[100];
        int head = 0, last = 1;
        btArr[0] = BT;
        int lastNodeNum = 1;
        int curNodeNum = 0;
        while (lastNodeNum != 0)
        {
            for (int i = 0; i < lastNodeNum; i++)
            {
                printf("%c", btArr[head]->Data);
                if (btArr[head]->Left)
                {
                    btArr[last++] = btArr[head]->Left;
                    curNodeNum++;
                }
                if (btArr[head]->Right)
                {
                    btArr[last++] = btArr[head]->Right;
                    curNodeNum++;
                }
                head++;
            }
            lastNodeNum = curNodeNum;
            curNodeNum = 0;
        }
    }

}
