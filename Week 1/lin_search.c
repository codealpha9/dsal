#include <stdio.h>
int lsearch(int arr[20],int val,int n);
int lsearch(int arr[20],int val,int n){
	for(int i=0;i<n;i++){
		if(arr[i]==val){
			return i;
		}
	}
	printf("Element not found\n");
	return -1;
}
void main(){
	int n,arr[20],val;
	printf("Enter n\n");
	scanf("%d",&n);
	printf("Enter array values\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter value\n");
	scanf("%d",&val);
	printf("Index is %d",lsearch(arr,val,n));
}