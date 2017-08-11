#include<stdio.h>
void main ()
{
int n,d=0;
scanf("%d",&n);
while(n!=0)
{
  d++;
  n=n/10;
}
  printf("\n%d",d);
}
