//finding polindrome number 
#include<stdio.h>
int main()
{
	int x,n,rev=0,d;
	printf("enter a number");
	scanf("%d",&n);
	x=n;
	while(n>0){
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	printf("%d is a reverse number\n",rev);
	if(rev==x){
		printf("%d is a polindrome number\n",x);
    }
    else{
    	printf("%d is not a polindrome number\n",x);
	}
	
	
	
	
	
}
