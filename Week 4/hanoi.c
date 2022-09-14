#include <stdio.h>
void Hanoi(char start,char mid,char end,int n)
{
	if(n==0)
	{
		return;
	}
	Hanoi(start,end,mid,n-1);
	printf("Move disk %d from %c to %c\n",n,start,end);
	Hanoi(mid,start,end,n-1);
}
void main()
{
	int n;
	char start,mid,end;
	printf("Enter number of disks - ");scanf("%d",&n);
	Hanoi('A','B','C',n);
}