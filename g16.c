#include<stdio.h>
void main()
{
    int n,n1,i,j;
    scanf("%d%d",&n,&n1);
        for(j=n;j<=n1;j++)
        {
        for(i=2;i<j;i++)
        if(j%i==0)
        break;
    if(i==j)
        printf("%d ",j);
}
}
