//finding average 
#include<stdio.h>
int main()
{
	int m1,m2,m3,avg;
	printf("enter three numbers");
	scanf("%d%d%d",&m1,&m2,&m3);
	if(m1<40 || m2<40 || m3<40){
		printf("fail");
		return;
	}
	if(m1>100 || m1<0 || m2>100 || m2<0 || m3>100 ||m3<0){
		printf("invalied marks please tyr again");
		return;
	}
	avg=(m1+m2+m3)/3;
	printf("%d\n",avg);
	if(avg>=70){
		printf("D");
	}
	else if(avg>=60){
		printf("first class\n");
	}
	else if(avg>=50){
		printf("second class\n");
	}
	else if(avg>=40){
		printf("third class\n");
	}
	else{
		printf("fail\n");
	}
}
