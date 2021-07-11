/* write a c program to write data into file & read that file and print it on data console */
#include<stdio.h>
#include<stdlib.h>
char data[50];
void main()
{   
    char c;
    FILE *fp;
    fp =fopen("File.txt","w+");
    if(fp==NULL)
    {
        printf("failed to open a file\nexited\n");
        exit(1);
    }
    printf("Enter the contents to the file \n");
    fgets(data,50,stdin);
    fputs(data,fp);
    printf("file written and saved successfully\n");
    rewind(fp);
    do
    {
          c=fgetc(fp);
        putchar(c);
        
    } while (fp != EOF);
    
    
    fclose(fp);

    printf("\nfile read successfully\n");


}