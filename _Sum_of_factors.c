#include<stdio.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a/2;i++)
    {
    if(a%i==0)
    {
        sum =sum+i;
        }
    }
     printf("%d ",sum);
}