/* Enunciado: Escreva um programa que leia uma data no formato dd/mm/aaaa e escreva esta
data com o mês expresso por extenso. Caso o mês digitado não seja válido (por exemplo,
22/13/1980), seu programa deverá exibir a seguinte mensagem: "Mes invalido" (sem aspas
e acentos) e encerrar a execução. Imprima sempre uma quebra de linha ao final da saída do
seu programa. */

#include <stdio.h>
#include <string.h>

int main(){
    int d, m, a;
    char mes[12];
    scanf("%d/%d/%d", &d,&m,&a);
    switch(m){
        case 1:
            strcpy(mes, "janeiro");
        case 2:
            strcpy(mes, "fevereiro");
        case 3:
            strcpy(mes, "março");
        case 4:
            strcpy(mes, "abril");
        case 5:
            strcpy(mes, "maio");
        case 6:
            strcpy(mes, "junho");
        case 7:
            strcpy(mes, "julho");
        case 8:
            strcpy(mes, "agosto");
        case 9:
            strcpy(mes, "setembro");
        case 10:
            strcpy(mes, "outubro");
        case 11:
            strcpy(mes, "novembro");
        case 12:
            strcpy(mes, "dezembro");
    }
    printf("%c", mes);
    return 0;
}