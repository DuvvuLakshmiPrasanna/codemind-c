#include <stdio.h>
int main()
{
    double base1,base2,height,area;
    scanf("%lf%lf",&base1,&base2);
    scanf("%lf",&height);
    area = 0.5*(base1+base2)*height;
    printf("%.4lf",area);
    return 0;
}