#include<stdio.h>
int main()
{
	int j,i,count=0,sum=0;
	for(i=2;i<=13;i++){
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
		}
		}
		printf("\n%d",sum); 
		}
	
	
	
