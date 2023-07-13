#include<stdio.h>
int main()
{
	int t,j,arr[25],i,count=0,n=25;
	for(i=0;i<25;i++){
	arr[i]=rand()%100+1;
	printf("\t%d",arr[i]);
	count++;
	if(count%5==0){
		printf("\n");
	}
   }
   //bubble sorting
   for(i=0;i<n-1;i++){
   	for(j=0;j<n-i-1;j++){
   		if(arr[j]>arr[j+1]){
   			t=arr[j];
   			arr[j]=arr[j+1];
   			arr[j+1]=t;
		   }
	   }
	   }
	   printf("arry after sorting\n");
   count=0;
   for(i=0;i<n;i++){
   
   printf("\t%d",arr[i]);
   count++;
   if(count%5==0){
   	printf("\n");
   }
   }}

