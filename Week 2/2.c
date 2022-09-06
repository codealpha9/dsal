#include <stdio.h>
int *square(int *p1,int *p2){
	*p2 = *p1 * *p1;
	return p2;
}
void main(){
	int p1,*p4,**p3;
	printf("Enter the number to be squared and cubed: ");
	scanf("%d",&p1);
	p4 = square(&p1,p4);
	printf("Squared: %d %p %p\n",*p4,p4,&p4);
	p3 = &p4;
	printf("%p",*(&(p4)));
	// *p3 = square(&p1,*p3);
	// **p3 *= p1;
	// printf("Cubed: %d",**p3);
}