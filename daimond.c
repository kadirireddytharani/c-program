//code for the diamond
#include<stdio.h>
int main()
{
	int k,s=20,i,j;
	for(i=1;i<=5;i++)
	{
		printf("\n"); // 1
		// for spaces
		for(k=1;k<=s;k++)
		printf(" ");
		//printing *
		for(j=1;j<=i;j++)
		printf(" *  ");
		
		s=s-2;	// 2
	}
		
        s=s+2;
		for(i=4;i>=1;i--){
		printf("\n");
		s=s+2;
		//for spaces
		for(k=1;k<=s;k++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf(" *  ");
	}
	printf("\n");

}
