#include<stdio.h>
int power(int);
int d,nn;
void main()
{
int sum,n1,i,n;
scanf("%d",&i);
    n=i;
  d=0;
 sum=0;
 n1=n;
    while(n!=0)
    {
    d++;
    n=n/10;
    }
    n=n1;
while(n!=0)
{
sum=sum+power(n%10);
n=n/10;
}
if(n1==sum)
    printf("\nyes");
           else
            printf("\nno");
}
int power(nn)
{
 int i,r=nn;
 if(d!=1)
 for(i=2;i<=d;i++)
    r=r*nn;
    return r;
}
