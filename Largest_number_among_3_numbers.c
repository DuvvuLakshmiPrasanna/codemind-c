#include <stdio.h>
int main() 
{
    int num1, num2, num3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    int largest;
    if (num1 >= num2 && num1 >= num3) 
    {
        largest = num1;
    } 
    else if (num2 >= num1 && num2 >= num3) 
    {
        largest = num2;
    } 
    else 
    {
        largest = num3;
    }

    printf("%d
",largest);

    return 0;
}
