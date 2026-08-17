#include <stdio.h>

int main()
{
    int a, b, c, D;

    scanf("%d %d %d", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D >= 0)
    {
        if (D > 0)
        {
            printf("Real and Distinct");
        }
        else
        {
            printf("Real and Equal");
        }
    }
    else
    {
        printf("Imaginary");
    }

    return 0;
}