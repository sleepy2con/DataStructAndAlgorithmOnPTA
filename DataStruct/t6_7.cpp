#include "t6_7.h"
namespace t6_7
{
	Stack CreateStack(int MaxSize)
	{
		Stack stack = (Stack)malloc(sizeof(struct SNode));
		stack->MaxSize = MaxSize;
		stack->Data = (ElementType*)malloc(MaxSize * sizeof(ElementType));
		stack->Top1 = 0;
		stack->Top2 = MaxSize - 1;
		return stack;
	}
	bool Push(Stack S, ElementType X, int Tag)
	{
		if (S->Top1 == S->Top2)
		{
			printf("Stack Full\n");
			return 0;
		}
		if (Tag == 1)
		{
			S->Data[S->Top1++] = X;
		}
		else if (Tag == 2)
		{
			S->Data[S->Top2--] = X;
		}
		else return 0;
		return true;
	}
	ElementType Pop(Stack S, int Tag)
	{
		int res = ERROR;
		if ((Tag == 1 && S->Top1 == 0) ||
			(Tag == 2 && S->Top2 == S->MaxSize-1))
		{
			printf("Stack %d Empty\n",Tag);
			return res;
		}
		if (Tag == 1)
		{
			S->Top1--;
			res = S->Data[S->Top1];
		}
		else if (Tag == 2)
		{
			S->Top2++;
			res = S->Data[S->Top2];
		}
		return res;
	}

	Operation GetOp()  /* details omitted */
	{
		Operation temp;
		scanf_s("%d", &temp);
		return temp;
	}
	void PrintStack(Stack S, int Tag) /* details omitted */
	{
		for (int i = 0; i < S->MaxSize; i++)
		{
			printf("%d ", S->Data[i]);
		}
		puts("\n");
	}
}