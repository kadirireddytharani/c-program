#include<stdio.h>
#include<stdlib.h>
int main()
{  
    
	int i,arr[25],count=0;
	for(i=0;i<25;i++){
	arr[i]=rand()%100+1;
	printf("%d\t",arr[i]);
	count++;
	if(count%5==0){
		printf("\n");
}
}
    int x,flag=0;
    printf("enter a number");
    scanf("%d",&x);
    for(i=0;i<25;i++){
    	if(x==arr[i]){
    		printf(" %d found",x);
    		flag=1;
    		break;
			}
    		}
	 	if(flag==0)
		printf("%d not found",x);
       
}
