#include<stdio.h>
int main
{
int y;
scanf("%d",&y);
if(((y%100!=0)&&(y%4==0))||((y%100==0)&&(y%400)))
printf("leap year");
else
printf("not");
return 0;
}
