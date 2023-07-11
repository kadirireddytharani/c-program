#include<stdio.h>
int main()
{
	int units,ebill;
	float charge;
	printf("total units consumed");
	scanf("%d",&units);
	//calculating current bill
    if(units<=50){
    	ebill= units*2.50;
		}
    else if(units<=100){
    	ebill=125+(units-50)*3.50;
	}
	else if(units<=200){
		ebill=125+475+(units-100)*4.00;
		
		
	}	
    else if(units<=300){
    	ebill=1000+(units-200)*5.00;
    	
	}
	else{
		ebill=1000+(units-300)*5.00;
		}
		printf("%d",ebill);
	
    	
	
	
}
