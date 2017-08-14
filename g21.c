#include<stdio.h>
void main()
{
    int i,n,f=1,ff=1,fff=1;
    scanf("%d",&n);
    printf("1 ");
    for(i=0;i<n;i++)
    {
        printf("%d ",fff);
        fff=f+ff;
        f=ff;
        ff=fff;
}
}
