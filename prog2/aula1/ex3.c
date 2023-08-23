/* 
Jose Vitor Dutra 187174
Lucas Saad 200881
*/
#include <stdio.h>

int main(){
    int num_magico = 13, num, i;

    for(i = 0 ; i < 5 ; i++){
        printf("Advinhe o numero magico entre 1 a 50: ");
        scanf(" %d", &num);
        if(num == num_magico){
            printf("Voce acertou!!! \n");
            break;
        }
        if(num > num_magico){
            printf("Maior que o numero magico. \n");
        }
        if(num < num_magico){
            printf("Menor que o numero magico. \n");
        }
        if(num-num_magico <= 3 && num-num_magico >= -3){
            printf("Voce esta chegando perto! \n");
        }
    }
}