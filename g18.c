#include<stdio.h>
int power(int);
int d,nn;
void main()
{
int l,sum,n1,i,n,ll;
scanf("%d%d",&l,&ll);
for(i=l;i<=ll;i++)
{
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
    printf(" %d",n1);
}
}
int power(nn)
{
 int i,r=nn;
 if(d!=1)
 for(i=2;i<=d;i++)
    r=r*nn;
    return r;
}
