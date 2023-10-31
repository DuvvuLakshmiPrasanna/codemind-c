#include<stdio.h>
int main()
{
    int n,year,weeks;
    scanf("%d",&n);
    year=n/365;
    weeks=(n%365)/7;
    printf("%d
%d",year,weeks);
    
}