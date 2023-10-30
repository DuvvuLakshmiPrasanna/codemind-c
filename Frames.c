#include<stdio.h>
int main()
{
    int n,m,x,cost;
    scanf("%d%d%d",&n,&m,&x);
    cost=x*(2*(n+m));
    printf("%d",cost);
}