#include <stdio.h>
void selection_sort(int arr[30],int n);
void main(){
	int arr[30]={11,32,34,99,1,2,17,5},n;
	selection_sort(arr,8);
	for(int i=0;i<8;i++){
		printf("%d\n",arr[i]);
	}
}

void selection_sort(int arr[30],int n)
{
	int pass=0,min_index,i,temp;
	while(pass<n){
	min_index = pass;
	for(i=pass+1;i<n;i++){
		if(arr[i]<arr[min_index]){
			min_index = i;
		}		
	}
	temp = arr[pass];
	arr[pass] = arr[min_index];
	arr[min_index] = temp;
	pass++;
	}
}