#include <stdio.h>

int main()
{
    int vetor[10], contador, pares = 0, impares = 0;

    for (contador = 0; contador < 10; contador++)
    {
        scanf("%i", &vetor[contador]);
    }

    for (contador = 0; contador < 10; contador++){
        if (vetor[contador]%2 == 0){
            pares++;
        } else{
            impares++;
        }
    }

    printf("%i pares, %i impares\n", pares, impares);
    return 0;
}