#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 20
typedef struct STACK
{
	int arr[MAX_SIZE];
	int top;
}stack;
int isfull(stack *s)
{
	return (s->top == MAX_SIZE-1)?1:0;
}
int isempty(stack *s)
{
	return (s->top < 0)?1:0;
}
char pop(stack *s)
{
	if (isempty(s))
	{;
		return -1;
	}
	else{
		return s->arr[s->top--];
	}

}
int push(stack *s,char ele)
{
	if(isfull(s))
	{
		return 0;
	}
	else
	{
		s -> arr[++s->top] = ele;
		return 1;
	}
}