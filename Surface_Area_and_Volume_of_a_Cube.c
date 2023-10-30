#include <stdio.h>
int main() 
{
    double side_length, volume, surface_area;
    scanf("%lf", &side_length);
    volume = side_length * side_length * side_length;
    surface_area = 6 * side_length * side_length;
    printf("Surface area = %.0lf and Volume = %.0lf",surface_area,volume);
    return 0;
}

