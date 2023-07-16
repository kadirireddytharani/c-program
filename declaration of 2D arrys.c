//declaration of 2D arry
#include<stdio.h>
int main()
{
	int arr1[3][3],i,j,sum=0;
	//READING MATRIX
	printf("%d enter elements",3*3);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr1[i][j]);
			}
			} 
			
	printf("PRINTING MATRIX 1\n");	
		for(i=0;i<3;i++){
			printf("\n");
			for(j=0;j<3;j++){
			printf("%d ",arr1[i][j]);
			}
		}
		
		//intilization of martix2 
			int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
			printf("PRINTING MATRIX 2\n");
				//PRINTING MATRIX		
		for(i=0;i<3;i++){
			printf("\n");
			for(j=0;j<3;j++){
			printf("%d ",arr2[i][j]);
			}
		}
		
		
		}
			
		
	
	
