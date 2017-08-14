#include<stdio.h>
void main()
{
    int n,n1,d=0;
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
    d=(d*10)+(n%10);
    n=n/10;
    }
        printf("\n%d",d);
}
