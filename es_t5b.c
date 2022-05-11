#include <stdio.h>

int main()
{
    int i, quantidades[10], total;
    float precos[10], lucro;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &quantidades[i]);
    }

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &precos[i]);

    }

    for (i = 0; i < 10; i++)
    {
        total += quantidades[i];
        lucro += quantidades[i] * precos[i];
    }
    
    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d", lucro, total);
    printf("\n");

    return 0;
}