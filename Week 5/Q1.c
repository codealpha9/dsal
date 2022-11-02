#include <stdio.h>
#include <stdlib.h>
#include "char_stack.h"
#define MAX_SIZE 20
void main()
{
	stack *s = (stack *)malloc(sizeof(stack));
	int choice;
	s->top = -1;
	char ele;
	printf("Choices - 1)push 2)pop 3)display 4)quit\n\n");
	do
	{
		printf("Enter your choice: ");scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to be pushed to stack - ");scanf(" %c",&ele);
				printf("%c pushed to stack\n",ele);
				push(s,ele);
				break;
			case 2:
					if (isempty(s))
					{
						printf("Error! Underflow!\n");
						break;
					}
				printf("%c element popped from stack\n",s->arr[s->top]);
				pop(s);
				break;
			case 3:
				display(s);
				break;
		}
	}while(choice != 4);
}