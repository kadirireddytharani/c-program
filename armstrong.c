#include<stdio.h>
int main()
{
	int x,d,n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	x=n;
	while(n>0){
		d=n%10;
		sum=sum+(d*d*d);
		n=n/10;}	
		if(sum==x){
		printf("%d is a armstrong number",x);
		}
		else{
		printf("%d is not a armstrong number",x);
		}
	
	
}
