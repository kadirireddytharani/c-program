//REVERSESTR
#include<stdio.h>
#include<string.h>
void reversestr(char str[]);
void reverse(char str[],int start, int end);
int main()
{
	char str[50];
	strcpy(str,"I HAVE MANY BOOKS");
	reversestr(str);
	puts(str);
	reverse(str,6,9);
	puts(str);
}
void reversestr(char str[])
{
	int i,j;
	char t;
	for(i=0,j=strlen(str)-1;i<=j;i++,j--)
	{   
	   t=str[i];
	   str[i]=str[j];
	   str[j]=t;		
	}
}
void reverse(char str[],int start, int end)
{
	char t;
	while(start<=end)
	{
		t=str[start];
		str[start]=str[end];
		str[end]=t;
		start++;
		end--;
	}
}

