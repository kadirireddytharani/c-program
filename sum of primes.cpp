//finding sum of prime numbers
#include<stdio.h>
int main()
{
	int j,i,count=0,sum=0,pc=0;
	for(i=1;i<=100;i++)
	{
	   	count=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0){
			count++;
			if(count>1)
			break;
			}
		}
		if(count==1){
			sum=sum+i;
			printf("%d\t",i);
			pc++;
			if(pc%5==0){
				printf("\n");
			}
		}
		}
		printf("\n%d",sum); 
		}
	
	
	
