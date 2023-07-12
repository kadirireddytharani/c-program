//finding nth largest number
#include<stdio.h>
int main()
{
	int t,i,n=30,j,arr[30],x,y,count=0;
	 printf("enter nth largest number");
	 scanf("%d",&x);
	 printf("enter nth smallest number");
	 scanf("%d",&y);
	 for(i=0;i<n;i++){
	arr[i]=rand()%100+1;
	printf("\t%d",arr[i]);
	count++;
	if(count%5==0){
		printf("\n");
	}
}
	//sorting
	  for(i=0;i<n-1;i++){
   	for(j=i+1;j<n;j++){
   		if(arr[i]>arr[j]){
   			t=arr[i];
   			arr[i]=arr[j];
   			arr[j]=t;

}
}
} count=0;
printf("\nafter sorting\n");
   for(i=0;i<n;i++){
   	printf("\t%d",arr[i]);
   	count++;
	if(count%5==0){
		printf("\n");
   	
   }}
   printf(" %d th largest is %d\n ",x,arr[n-x]);
   printf("%dth smallest is %d\n ",y,arr[y-1]);
}
  
  

