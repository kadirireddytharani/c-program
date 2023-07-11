//arrys 
#include<stdio.h>
int main()
{
	int arr[7],i,sum=0,avg=0;
	char vowels[5]={'a','e','i','o','u'};
	for(i=0;i<5;i++){
		printf(" %c ",vowels[i]);
		}
		printf("\n");
		for(i=0;i<7;i++){
			printf("enter an element %d ",i);
			scanf("%d",&arr[i]);
		}
		    for(i=0;i<7;i++){
		    	printf("\n%d",arr[i]);
		    	sum=sum+arr[i];
		    	avg=sum/7;		    	
	    }  
				printf("\n%d=sum \n%d=avg",sum,avg);			
			
}
