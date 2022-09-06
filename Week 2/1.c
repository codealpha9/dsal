#include <stdio.h>
#include <stdlib.h>
void mat_mul(int *mat1,int *mat2,int *mat3,int m1,int n1,int m2,int n2)
{	int i,j,k;
	for(i = 0;i<m1;i++){
		for(j=0;j<n2;j++){
			*(mat3 + i*n2+j)=0;
			for(k = 0;k<n1;k++){
				*(mat3 + i*n2+j) += *(mat1+i*n1+k)**(mat2+k*n1+j);
			}
		}
	}

}


int main(){
	int m1,n1,m2,n2,*mat1,*mat2,*mat3,i,j;
	printf("Enter dimensions of first matrix: ");
	scanf("%d %d",&m1,&n1);
	printf("Enter dimensions of second matrix: ");
	scanf("%d %d",&m2,&n2);
	printf("Enter first matrix\n");
	mat1 = (int *)malloc(m1*n1*sizeof(int));
	mat2 = (int *)malloc(m2*n2*sizeof(int));
	mat3 = (int *)malloc(m1*n2*sizeof(int));
	for(i = 0;i<m1;i++){
		for(j=0;j<n1;j++){
			scanf("%d",mat1+i*n1+j);
		}
	}
	printf("Enter second matrix\n");
	for(i = 0;i<m2;i++){
		for(j=0;j<n2;j++){
			scanf("%d",mat2+i*n2+j);
		}
	}
	if(n1!=m2){
		printf("matrices are incompatible\n");
		return 0;
	}
	mat_mul(mat1,mat2,mat3,m1,n1,m2,n2);
	for(i = 0;i<m1;i++){
		for(j=0;j<n2;j++)
		{
			printf("%d \t",*(mat3 + i*n2+j));
		}
		printf("\n");
	}
}