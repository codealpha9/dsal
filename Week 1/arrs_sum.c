#include <stdio.h>
int i=0;
void sumofarray(int arr[],int n)
{
	int sum=0;
    for(i=0;i<n;i++){
    	sum=sum+arr[i];
    }
    printf("Sum =%d \n",sum);
}
int main(){
int n=0,num=0;
int sum=0;
int arr[100];
printf("Enter number of elements :");
scanf("%d",&num);
printf("Enter elements of array :\n");
for(i=0;i<num;i++){
	scanf("%d",&arr[i]);
}
sumofarray(arr,num);
}