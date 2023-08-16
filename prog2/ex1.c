#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STRINGS 30

int main(){
    int qtdViagens, menorValor = 0, maiorValor = 0;
    float gastosTotais = 0;

    printf("Quantas cidades voce ja visitou: ");
    scanf(" %d", &qtdViagens);

    char cidades[qtdViagens][NUM_STRINGS];
    float gastos[qtdViagens];

    for (int i = 0; i < qtdViagens; i++)
    {
        printf("Cidade visitada: ");
        scanf(" %s", cidades[i]);
        printf("Gasto: ");
        scanf(" %f", &gastos[i]);
    }
    
    for (int i = 0; i < qtdViagens; i++)
    {
        if(gastos[i] < gastos[menorValor]){
            menorValor = i;
        }
        if(gastos[i] > gastos[maiorValor]){
            maiorValor = i;
        }
        gastosTotais += gastos[i];
    }
    
    printf("Cidade mais cara: %s. Gasto: %.2f \n", cidades[maiorValor], gastos[maiorValor]);
    printf("Cidade mais barata: %s. Gasto: %.2f \n", cidades[menorValor], gastos[menorValor]);
    printf("Gastos totais: %.2f", gastosTotais);

    return 0;
}