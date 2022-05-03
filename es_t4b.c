#include <stdio.h>

unsigned int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main()
{
    int n, s, resultado;

    scanf("%i", &n);
    scanf("%i", &s);

    resultado = (factorial(n)) / (factorial(s) * factorial(n - s));
    printf("%i\n", resultado);

    return 0;
}