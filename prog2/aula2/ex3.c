#include <stdio.h>

typedef struct{
    char nome_da_banda[40];
    char genero[40];
    int integrantes;
    int seguidores;
    int ouvintes;
} Banda;

int main(){
    Banda bandas[5];
    char genero_busca[40];
    int i, indexMaiorEngajamento = 0;

    printf("\n---------- Cadastro de Bandas (5) -----------\n\n\n");
    for (i = 0; i < 5; i++) {
        printf("Nome da banda: ");
        scanf(" %[^\n]", bandas[i].nome_da_banda);

        printf("Genero: ");
        scanf(" %[^\n]", bandas[i].genero);

        printf("Numero de integrantes: ");
        scanf("%d", &bandas[i].integrantes);

        printf("Numero de seguidores: ");
        scanf("%d", &bandas[i].seguidores);

        printf("Numero de ouvintes: ");
        scanf("%d", &bandas[i].ouvintes);

        if (bandas[i].ouvintes + bandas[i].seguidores > bandas[indexMaiorEngajamento].ouvintes + bandas[indexMaiorEngajamento].seguidores) {
            indexMaiorEngajamento = i;
        }

        printf("\n");
    }

    printf("Digite o genero que voce quer buscar: ");
    scanf(" %[^\n]", genero_busca);

    printf("\nBandas que tocam o genero %s:\n", genero_busca);
    for (i = 0; i < 5; i++) {
        if (strcmp(bandas[i].genero, genero_busca) == 0) {
            printf("- %s\n", bandas[i].nome_da_banda);
        }
    }

    printf("Banda com maior engajamento: %s\n", bandas[indexMaiorEngajamento].nome_da_banda);
}