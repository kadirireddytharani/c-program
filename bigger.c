#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c)
		printf("%d is a bigger number\n",a);
		else
		printf("%d is a bigger number\n",c);
	}
	else{
		if(b>c)
		printf("%d is a bigger number\n",b);
		else
		printf("%d is a bigger number\n",c);
	}
}
