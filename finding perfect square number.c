//finding perfect square number
#include<stdio.h>
int main()
{
  int flag=0,n,p,i;
  printf("enter a number");
  scanf("%d",&n);
  for(i=1;i<=n/2;i++){
  	if(n%i==0){
  		p=i*i;
  		if(p==n){
  			printf("%d is a perfect square",n);
  			flag=1;
  			break;
  			}
  		
  		 }
  }	
    if(flag==0){
    	printf("%d is not a perfect square",n);
	}
}
