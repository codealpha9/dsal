#include <stdio.h>
#include <stdlib.h>
#include "int_stack.h"
void main()
{
	stack *s = (stack *)malloc(sizeof(stack));s->top = -1;
	int arr[20];
	int n,i,k,flag = 0;
	printf("Enter number of elements: ");scanf("%d",&n);
	printf("Enter elements-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter k: ");scanf("%d",&k);
	push(s,arr[0]);
	for(i=1;i<n;i++)
	{
		if(flag == 1 ||isempty(s)|| arr[i]<s->arr[s->top])
		{
			push(s,arr[i]);
		}
		else{
			k--;
			pop(s);
			i--;
			if(k==0)
			{
				flag = 1;
			}
		}
	}
	display(s);
}
