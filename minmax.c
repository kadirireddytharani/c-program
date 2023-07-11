//finding minimum maximum with arrys
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,arr[30],count=0;
	for(i=0;i<30;i++){
		arr[i]=rand()%100+1;
		printf("\t%d",arr[i]);
		count++;
		if(count%5==0)
		printf("\n");
	}
	
	int min=arr[0];
	int max=arr[0];
	for(i=0;i<30;i++){
		if(max<arr[i]){
			max=arr[i];
			}
			if(min>arr[i]){
				min=arr[i];
			}
		
	}
	printf("\t%d is max",max);
	printf("\t%d is  min",min);

	
}
