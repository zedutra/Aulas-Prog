#include <stdio.h>
#include <stdlib.h>

float media(int nAlunos, int * idades){
    int soma = 0;
    float media;
    
    for(int i = 0; i < nAlunos; i++){
        soma += idades[i];
    }
    media = soma / nAlunos;
    return media;
}

int main(){
    int nAlunos, *idades;
    
    printf("Qual o numero de alunos: ");
    scanf(" %d", &nAlunos);
    
    idades = malloc(nAlunos * sizeof(int));
    
    for(int i = 0; i < nAlunos; i++){
        printf("Idade: ");
        scanf(" %d", &idades[i]);
    }
    
    printf("A media eh: %.2f", media(nAlunos, idades));
    
    return 0;
}