/* Faca um programa para fazer cotacao de um produto em 3 fornecedores diferentes.
O usuario ira informar os precos dos tres fornecedores e voce ira mostrar o mais barato
dos 3. Exiba tambem o produto mais caro

Jose Vitor Dutra Antonio 187174
Lucas Saad 200881
*/

#include <stdio.h>

int main(){
    float cotacoes[3];
    int i=0, indexMaior=0, indexMenor=0;

    for (i=0;i<3;i++){
        printf("Insira a cotacao do fornecedor %d \n", i+1);
        scanf(" %f", &cotacoes[i]);
    }
    
    for (i=0;i<3;i++){
        if(cotacoes[i] > cotacoes[indexMaior]){
            indexMaior = i;
        }
        if(cotacoes[i] < cotacoes[indexMenor]){
            indexMenor = i;
        }
    }
    
    printf("Mais caro: %.2f \n", cotacoes[indexMaior]);
    printf("Mais barato: %.2f \n", cotacoes[indexMenor]);
    
    return 0;
}