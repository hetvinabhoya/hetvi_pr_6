#include <stdio.h>
 
void main()
{
    char a[100];  
    int  i,j,count=0,n;
 
    printf("Enter  the string : ");
    gets(a);
     
    for(i=0;a[i];i++);
    n = i;
    
    printf("Frequency of each letter:\n");

    for(j=0;j<n;j++)  
    {
     	count=1;
    	if(a[j])
    	{
		
 		  for(i=j+1;i<n;i++)  
	      {   
	    	
	        if(a[j]==a[i])
    	    {
                 count++;
                 a[i]='\0';
	     	}
	      }  
	      printf(" %c = %d \n",a[j],count);

       }
	     
 	} 
 	      
}
/*
Enter  the string : development
 Frequency of each letter:
 d = 1
 e = 3
 v = 1
 l = 1
 o = 1
 p = 1
 m = 1
 n = 1
 t = 1
/*
