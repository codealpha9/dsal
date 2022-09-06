#include <stdio.h>
void reverse(int *p,int n)
{
	int temp,i;
	for(i=0;i<n/2;i++){
		temp = *(p+i);
		*(p+i) = *(p+n-1-i);
		*(p+n-1-i) = temp;
	}
}
void main()
{
	int arr[10],n,*p,i;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("Enter array values: \n");
	for(i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	p = arr;
	reverse(arr,n);
	printf("New array is: \n");
	for(i = 0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}