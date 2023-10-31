#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a positive integer.
");
    } 
    else
    {
        int sum = (n * (n + 1)) / 2;
        printf("%d
",sum);
    }

    return 0;
}