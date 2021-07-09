/* WAP to take N no ofintegers from the user and arrenge
in ascending and decending order */

#include<stdio.h>
#include "fun.h"
void main()
{
    int N,c;
    printf("Enter the how many numbers you are going to enter :\n");
    scanf("%d",&N);
    int a[N];
    for(int i =0; i<N; i++ )
    {
        printf("enter element no %d ",i+1);
        scanf("%d",&a[i]);
    }

    printf("1.for ascending order sorting\n2.for descending order sorting\n\n\tenter choice");
    scanf("%d",&c);
    if(c==1)
        {
            ascend( N,a);
            printf("The elements in ascending order :\n\t");
        }
    else if(c==2)
        {
            descend(N,a);
            printf("The elements in descending order :\n\t");
        }
    else
        printf("wrong choice...\n");

    for(int i =0; i<N; i++ )
    {
        printf(" %d ",a[i]);
    }
    printf("\n");

}