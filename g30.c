#include <stdio.h>
void main()
{
    int i,sum=0;
    for(i=0;<=15;i++)
    sum=sum+i;
    for(i=15;i<=45;i++)
    if(i%2!=0)
    sum=sum+i;
    printf("\n %d",sum);
    }
    
