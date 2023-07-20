#include<stdio.h>

void main()
{
    char a[100];  
    int i,n,c=0;
 
    printf("Enter  the string : ");
    gets(a);
    n=strlen(a);

    for(i=0;i<n;i++)  
    {
    	if(a[i]==a[n-i-1])
    	c++;

 	}
 	if(c == i)
 	    printf("Given string is palindrome");
    else
        printf("Given string is not palindrome");

 	 
}
/*Enter  the string : nayan
Given string is palindrome
Enter  the string : hello
Given string is not palindrome
*/
