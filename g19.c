#include<stdio.h>
void main()
{
    int n,f=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        f=f*i;
    printf("\n%d",f);
}
