#include <stdio.h>
#include <stdlib.h>
int smallest(int *p,int n)
{
	int smallest = *p, i;
	for(i=0;i<n;i++)
	{
		if(smallest>*(p+i)){
			smallest = *(p+i);
		}
	}
	return smallest;
}
void main(){
	int n,i,*p;
	printf("Enter size of array: ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	printf("Enter array values: \n");
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
	printf("Smallest value in array is : %d",smallest(p,n));
}