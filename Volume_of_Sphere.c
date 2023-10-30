#include <stdio.h>
#include <math.h>

int main()
{
    double radius, volume;
    scanf("%lf", &radius);
    volume = (4.0 / 3.0) * 3.14* pow(radius, 3);
    printf("%.2lf
", volume);
    return 0;
}






