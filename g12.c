#include<stdio.h>
void main()
{
int n,n1,nn=0;
scanf("%d",&n);
n1=n;
while(n!=0)
{
nn=nn*10+(n%10);
n=n/10
}
if(n1==nn)
printf("\nyes");
else
printf("\nno");
}
