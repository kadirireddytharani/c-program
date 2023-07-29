//book structure
#include<stdio.h>
#include<string.h>
struct book{
           char  title[100];
		    char Authore[30];
			int pages;
			float prize;
			int ISBN ;
			};
int main()
{
	struct book b[3];
	int i;

	for(i=0;i<3;i++){
	
	printf("enter book %d details",(i+1));
	
	scanf("%s",b[i].title);
	
	scanf("%s",b[i].Authore);

	scanf("%d",&b[i].pages);
	
	scanf("%f",&b[i].prize);
	
	scanf("%d",&b[i].ISBN);
	}
	printf("BOOKTITLE\tAUTHORE\tPAGES\tPRIZE\tISBN");
	for(i=0;i<3;i++){
	printf("%s\t",b[i].title);
	printf("%s\t",b[i].Authore);
	printf("%d\t",b[i].pages);
	printf("%f\t",b[i].prize);
	printf("%d\n",b[i].ISBN);
			}
			int j,k;
	int	min=b[0].pages; 
	int max=b[0].prize;
	for(i=0;i<3;i++){
		if(max<b[i].prize){
			max=b[i].prize;
			j=i;
			}
			if(min>b[i].pages){
				min=b[i].pages;
				k=i;
					}
		
     }
    printf("max prized book");
   	printf("%s\t",b[j].title);
	printf("%s\t",b[j].Authore);
	printf("%d\t",b[j].pages);
	printf("%f\t",b[j].prize);
	printf("%d\n",b[j].ISBN);
	
	printf("min prized book");
	printf("%s\t",b[k].title);
	printf("%s\t",b[k].Authore);
	printf("%d\t",b[k].pages);
	printf("%f\t",b[k].prize);
	printf("%d\n",b[k].ISBN);


					}
						


