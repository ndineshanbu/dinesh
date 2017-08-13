#include<stdio.h>
void main()
{
        int a,z,i;
        scanf("%d%d",&a,&z);
        for(i=a;i<=z;i++)
            if((i%2)!=0)
            printf("%d ",i);
}
