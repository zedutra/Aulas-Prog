/* 
Jose Vitor Dutra 187174
Lucas Saad 200881
*/
#include <stdio.h>

int main(){
    int tempoInvestimento, i;
    float investimento, taxaAoAno, juros, montanteFinal, jurosObtidos;

    printf("Tempo de investimento em anos: \n");
    scanf(" %d", &tempoInvestimento);

    printf("Taxa de retorno anual: \n");
    scanf(" %f", &taxaAoAno);
    taxaAoAno = taxaAoAno / 100;

    printf("Valor investido hoje: \n");
    scanf(" %f", &investimento);

    montanteFinal = investimento;
    for(i=0; i < tempoInvestimento; i++){
        montanteFinal += montanteFinal * taxaAoAno;
    }
    jurosObtidos = montanteFinal - investimento;

    printf("Montante final: %.2f \n", montanteFinal);
    printf("Juros obtidos: %.2f \n", jurosObtidos);
    
    return 0;
}