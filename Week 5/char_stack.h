#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 20
typedef struct STACK
{
	char arr[MAX_SIZE];
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
	{
		printf("Error! Underflow!\n");
		return -1;
	}
	else{
		return s->arr[s->top--];
	}

}
void push(stack *s,char ele)
{
	if(isfull(s))
	{
		printf("Error! Overflow!\n");
	}
	else
	{
		
		s -> arr[++s->top] = ele;
	}
}
void display(stack *s)
{
	int i;
	for(i=0;i<=s->top;i++)
	{
		printf("%c ",s->arr[i]);
	}
	printf("\n");
}