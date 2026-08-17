#include <stdio.h>

int main()
{
    int N, factorial = 1;

    scanf("%d", &N);

    while (N > 0)
    {
        factorial = factorial * N;
        N--;
    }

    printf("%d", factorial);

    return 0;
}