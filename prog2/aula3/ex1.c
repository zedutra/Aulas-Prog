#include <stdio.h>

int verifica_primo(int numero){
    int cont = 0;
    
    for(int i = 1; i <= numero; i++){
        if(numero%i == 0){
            cont++;
        }
    }
    
    if(cont > 2){
        return 0;
    } else {
        return 1;
    }
}

int main(){
    int num;

    printf("Insira um numero para verificar se ele eh primo: ");
    scanf("%d", &num);

    if(verifica_primo(num)){
        printf("\nEh um numero primo.");
    } else {
        printf("\nNao eh um numero primo.");
    }
}