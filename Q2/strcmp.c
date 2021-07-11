#include<stdio.h>
void fstrcmp(char str1[],char str2[])

{
 int flag=0,i=0;  // integer variables declaration  
    while(str1[i]!='\0' && str2[i]!='\0')  
    {  
       if(str1[i]!=str2[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
	    printf("Compare two strings.\n");
    if(flag==0)  
    printf("strings are same\n\n");  
    else  
    printf("strings are not same\n\n");   
}  
