#include<stdio.h>
int main()
{
	int fact,i,j;
	
	for(i=1;i<=10;i++)
	{
		fact=1;
		for(j=1;j<=i;j++){
		fact=fact*j;}
		printf("fact of %d is %d\n",i,fact);
		}
		
	
}
