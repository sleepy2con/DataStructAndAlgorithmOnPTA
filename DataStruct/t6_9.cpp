#include "t6_9.h"
#include <string>
namespace t6_9
{

    BinTree CreatBinTree()
    {
        BinTree Q[10000];//��BinTree�����͵�����ģ�����
        int head = 0, tail = 1;//��¼ͷλ��
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
            curNodeNum *= 2;    // �������ڵ���ÿ��*2��1��2��4��8
        }
        

        //ElementType Data;
        //BinTree BT, T;
        //BinTree Q[10000];//��BinTree�����͵�����ģ�����
        //int head = 0, tail = 1;//��¼ͷλ��
        //scanf_s("%c", &Data);
        //if (Data != '#') { //����������ڵ�
        //    BT = (BinTree)malloc(sizeof(struct TNode));
        //    BT->Data = Data;
        //    BT->Left = BT->Right = NULL;//�Ȱ��±ߵ����� �ڵ���ΪNULL 
        //    Q[head] = BT;		//BT���������
        //}
        //else return NULL; //���ڵ���# ��ֱ��over
        //while (head != tail) { //���в�Ϊ��
        //    T = Q[head];//������һ��
        //    head++;//��ʾ�յ�ָ��Ҳ��Ҫ��
        //    scanf_s("%c", &Data);
        //    if (Data == '#')
        //        T->Left = NULL;//
        //    else {
        //        T->Left = (BinTree)malloc(sizeof(struct TNode));
        //        T->Left->Data = Data;
        //        T->Left->Left = T->Left->Right = NULL;//�Ȱ��±ߵ����� �ڵ���ΪNULL 
        //        Q[tail++] = T->Left;//T->Left��� 

        //    }
        //    scanf_s("%c", &Data);
        //    if (Data == '#')
        //        T->Right = NULL;
        //    else {
        //        T->Right = (BinTree)malloc(sizeof(struct TNode));
        //        T->Right->Data = Data;
        //        T->Right->Left = T->Right->Right = NULL;//�Ȱ��±ߵ����� �ڵ���ΪNULL 
        //        Q[tail++] = T->Right;
        //    }
        //}
        //return BT;//��Ϊ��ڵ�����ӣ������ȴ�����ڵ�(��ֵ) 
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
