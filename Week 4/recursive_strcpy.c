#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int strcpy1(char *str1,char *str2)
{
	*str2 = *str1;
	if(*str1 == '\0'){return 0;}
	return strcpy1(++str1,++str2);
}
void main()
{
	char *str1,*str2;
	printf("Enter a string - ");scanf("%s",str1);
	str2 = (char *)malloc(strlen(str1)*sizeof(char));
	printf("Original string - %s\n",str1);
	strcpy1(str1,str2);
	printf("Copied string - %s\n",str2);
}