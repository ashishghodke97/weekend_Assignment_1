/* implement functions for strcmp , strcat , strcpy  . take to 2 strings fropm users */
#include<stdio.h>
#include "fundef.h"
void main()
{
    char str1[50],str2[50],str3[50];
    printf("enter the string 1\n");
    scanf("%s",str1);
    printf("enter the string 2\n");
    scanf("%s",str2);

    fstrcpy(str1);
    fstrcmp(str1,str2);
    fstrcat(str1,str2);

}