#include <stdio.h>
void main()
{
	int arr[20] = {1,2,3,4,5,6,7,8},n,largest,second_largest;
	largest = arr[0];
	second_largest = arr[0];
	for(int i=0;i<8;i++)
	{
		if (arr[i]>largest){
			second_largest = largest;
			largest = arr[i];

		}
	}
	printf("%d\n",second_largest);

}