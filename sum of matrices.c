//declaration of 2D arry
#include<stdio.h>
#define rows 5
#define cols 5
int main()
{
	int matrix1[rows][cols],sum=0;
	int i,j,m,n;  
	int matrix2[rows][cols];
	int p,q;
	int matrix3[rows][cols];
			             
	printf("\nenter size of matrix1[]");
	scanf("%d %d",&m,&n);
	//READING MATRIX
	printf("\n%d enter elements",m*n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matrix1[i][j]);
			}
			} 
			
	printf("PRINTING MATRIX 1\n");	
		for(i=0;i<m;i++){
			printf("\n");
			for(j=0;j<n;j++){
			printf("%d ",matrix1[i][j]);
			}
		}
		

	printf("\nenter size of matrix2[]");
	scanf("%d %d",&p,&q);
	//READING MATRIX
	printf("\n%d enter elements",p*q);
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&matrix2[i][j]);
		}
		
	}
			printf("PRINTING MATRIX 2\n");
				//PRINTING MATRIX		
		for(i=0;i<p;i++){
			printf("\n");
			for(j=0;j<q;j++){
			printf("%d ",matrix2[i][j]);
			}
			printf("\n");
		}
			printf("\n");
		if(m==p && n==q ){
			for(i=0;i<n;i++){
				for(j=0;j<p;j++){
					matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
				}
			}
		}
		else{ 
		printf("matrix3 is not possible");
		}
		printf("MATRIX3\n");
		//printing matrix3
		for(i=0;i<p;i++){
				for(j=0;j<n;j++){
					printf("%d ",matrix3[i][j]);
				}printf("\n");
			}
			
		
	}
		
		
		
			
		
	
	
