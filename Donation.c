#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=x-y;
    if(z>0)
    {
        printf("%d",z);
    }
    else
    {
        printf("%d",-z);
    }
}