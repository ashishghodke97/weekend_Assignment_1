
#include<stdio.h>
void fstrcpy(char str1[])
	{
	char cpy[50];
	int j=0;
	while(str1[j]!='\0')
		{
		 cpy[j]=str1[j];
		 j++;
		}
		cpy[j]='\0';
	printf("str1 & cpy string after copied function \n\n string1->%s \n\n copied string 2-> %s \n\n",str1,cpy);
		
	}
