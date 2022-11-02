#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "char_stack.h"
void main()
{
	char s1[20];
	char s2[20];
	int i,k;
	stack *s = (stack *)malloc(sizeof(stack));s->top = -1;
	printf("Enter string: ");scanf("%s",s1);k=strlen(s1);
	printf("%s %s\n",s1,s2);
	for(i=0;i<k;i++)
	{
		push(s,s1[i]);
	}
	for(i = 0;i<k;i++)
		s2[i] = pop(s);
	s2[k] = '\0';
	if(strcmp(s1,s2)==0)
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");
}