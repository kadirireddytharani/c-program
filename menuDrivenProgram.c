//MENU DRIVEN PROGRAMM
#include<stdio.h>
#include<stdlib.h>
void prime(int,int);
void fe();
void sort(int[]);
void hallowdiamond();
void guess(int);
int main()
{

   int choice,arr[25],count=0,rand;
   int i,a,b,n,p,x;
	

do{
   printf("MENU DRIVEN PROGRAMM\n");
   printf("PROGRAMME'S PLAY GROUND\n");
   printf("please select one of the following:\n");
   printf("1.primes between range\n");
   printf("2.febanacci series up to n terms\n");
   printf("3.sorting an arry elements up to 'n' natural numbers\n");
   printf("4.printing hallow diamond \n");
   printf("5.guessing number game\n");
   printf("6.exit\n");
   scanf("%d",&choice);
   
   
   switch(choice){
   	case 1:
   		
   		printf("enter the range");
   		scanf("%d %d",&a,&b);
   		prime(a,b);
   		break;
   		
   	case 2:
   		
	       fe();
	       break;
	   
	case 3:
		
	       for(i=0;i<25;i++){
  	       }
	       sort(arr);
               break;
		 
       case 4:
   	
   	      hallowdiamond();
   	      break;
   	
       case 5:
   	
   	     printf("enter a number\n");
	     scanf("%d",&x);
	     guess(x);
	     break;
       case 6:
   	
	     printf("thanks for visiting");
                 }
   }while(choice!=6);
}
    
     //function definition
     //solution for the prime 
        void prime(int a,int b)
        {
         int i,j,count=0,sum=0;
	     for(i=a;i<=b;i++){
	     count=0;
         for(j=1;j<=i/2;j++){
         if(i%j==0){
	     count++;
	     if(count>1)
	     break;
	       }
	        }
		 if(count==1){
	           sum=sum+i;
		 printf("%d\t",i);
	     	 }
		    }
	    	    printf("%d\n",sum);
  	         	} 
  	       	
  	       	
  	 //finding febanacii series 
	void fe(){
            int n,i,a,b,c;
		    printf("enter a number ");
	     	scanf("%d",&n);
            a=0;
	        b=1;
	        printf("\t%d  %d",a,b);
        	while(i<=n){
		    c=a+b;
		    printf("\t%d",c);
		    a=b;
		    b=c;
		    i++;
	          }
	        printf("\n");
	        }
		    
		
	//solution sor sorting of a number
    void sort(int arr[25]){
   	    int i,count=0;
	    for(i=0;i<30;i++){
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
        for(i=0;i<30;i++){
    	if(x==arr[i]){
        printf(" %d found",x);
    	flag=1;
    	break;
		    }
    	   }
	    if(flag==0)
		printf("%d not found",x);
	        printf("\n");
       }
       //solution for the hallow diamond
        void hallowdiamond(){
       	int k,s=20,i,j,a,b=3;
	    for(i=1;i<=5;i++){
       	printf("\n"); // 1
	    // for spaces
		for(k=1;k<=s;k++)
		printf(" ");
	    //printing *
		for(j=1;j<=i;j++){
	    if(j>1 && j<i ){
	    for(a=0;a<=b;a++)
	    printf(" ");
		 }
		else{
	    printf(" *  ");
		    }
		   }
	    s=s-2; // 2
       }
        s=s+2;
	    for(i=4;i>=1;i--){
	    printf("\n");
	    s=s+2;
		//for spaces
	    for(k=1;k<=s;k++) 
	    printf(" ");
	    for(j=1;j<=i;j++){
		if(j>1 && j<i){	
	    for(a=0;a<=b;a++)
	    printf(" ");
		      }
	    else{		
	     printf(" *  ");
		        }
               }	
             }  
        printf("\n");
        }
              
      // guessing of a number game
           void guess(int x){
   	        int n;
	        n=rand()%100+1;
	        printf("%d\n",n);
	        printf("enter a number\n");
	        scanf("%d",&x);
	        while(x!=n){
	     	if(x<n){
			printf("its too low\n");
	    	}
	    	else{
			printf("it's too high\n");
		    }
			printf("please guess the value again\n");
		        scanf("%d",&x);
		    }
		        printf("congratulations you matched it correctly\n");	
   }
  


