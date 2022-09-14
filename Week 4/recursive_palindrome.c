#include <stdio.h>
#include <string.h>
int palindrome(char *str1,char *str2)
{
	if(str1>=str2){return 1;}
	if(*str1 != *str2){return 0;}
	return(palindrome(++str1,--str2));
}
void main()
{
	int n;
	char str1[20];
	printf("Enter a string: ");scanf("%s",str1);
	if(palindrome(str1,str1+strlen(str1)-1))
	{
		printf("palindrome\n");
	}
	else{
		printf("not a palindrome\n");
	}
}