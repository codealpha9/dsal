#include <stdio.h>
int* square(int *p1){
	static int p2;
	p2 = *p1 * *p1;
	return &p2;
}
void main(){
	int p1,*p4,**p3;
	printf("Enter the number to be squared and cubed: ");
	scanf("%d",&p1);
	p4 = square(&p1);
	printf("Squared: %d\n",*p4);
	p3 = &p4;
	*p3 = square(&p1);
	**p3 *= p1;
	printf("Cubed: %d\n",**p3);
}