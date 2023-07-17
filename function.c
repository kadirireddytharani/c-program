
#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int multiplication(int,int);
int division(int,int);
int reminder(int,int);
int main()
{
	int x,y,sum,dif,product,result,modulus;
	x=rand()%10+1;
	y=rand()%10+1;
	printf("%d %d \n",x,y);
	sum=add(x,y);
	dif=sub(x,y);
	product=multiplicatin(x,y);
	result=division(x,y);
	modulus=reminder(x,y);
	printf("%d %d %d %d %d",sum,dif,product,result,modulus);
}
    int add(int a,int b)
	{
		return a+b;
    		}
    		int sub(int a, int b)
    		{
    			return a-b;
			}
			int multiplicatin(int a,int b)
			{
				return a*b;
			}
			int division( int a, int b)
			{
				return a/b;
			}
			int reminder(int a,int b)
			{
				return a%b;
			}

