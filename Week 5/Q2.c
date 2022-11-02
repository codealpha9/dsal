#include <stdio.h>
#include <stdlib.h>
#include "int_stack.h"
#define MAX_SIZE 20
void main()
{
	stack *s = (stack *)malloc(sizeof(stack));
	s->top = -1;
	int num;
	printf("Enter number - ");scanf("%d",&num);
	while(num!=0)
	{
		push(s,num%2);num/=2;
	}
	printf("\n");
	while(1)
	{
		if(isempty(s)){break;}
		printf("%d ",pop(s));
	}
	printf("\n")
}