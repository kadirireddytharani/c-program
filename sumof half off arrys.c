//finding the sum of first half off arry and second half off arry
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,arr[40],count=0;
	for(i=0;i<40;i++){
	arr[i]=rand()%100+1;
	printf("\t%d",arr[i]);
	count++;
	if(count%5==0){
		printf("\n");
	}
	}
	int sum1=0,sum2=0;
	for(i=0;i<20;i++){
		sum1=sum1+arr[i];
		}
	for(i=20;i<40;i++){
		sum2=sum2+arr[i];}
		printf("\t%d=sum1 \t%d=sum2",sum1,sum2);
		if(sum1<=sum2){
			printf("\t%d is higest",sum2);
		}
			}	
		
	


