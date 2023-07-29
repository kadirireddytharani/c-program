//program to test wheather a string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,j;
	printf("enter a string:");
	gets(str);
	for(i=0,j=strlen(str)-1;i<=j;i++,j--)
	if(str[i]!=str[j])
	break;
	if(i>j)
       	printf("string is a palindrome\n");
    else
        printf("string is not a palindrome\n");
}
