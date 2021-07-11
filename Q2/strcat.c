#include<stdio.h>
void fstrcat(char str1[],char  str2[])
	
	{
	
		int n=0;
		while(str1[n]!='\0')
		{
		 ++n;
		}

		
		str1[n]=' ';
				
		int i=0;		
		while(str2[i]!='\0')		
		{
			str1[n+1+i]=str2[i];
			i++;
		}
	
		printf("str1 & str2 after strcat function\n\t %s \n",str1);
	
	}
