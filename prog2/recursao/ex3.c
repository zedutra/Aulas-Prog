#include <stdio.h>

int fibonacci(int n){
    // caso base
    if(n < 2){
        return n;
    }
    
    // caso geral
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main (){
    int numero;
    printf ("Insira um numero: ");
    scanf("%d", &numero);
    
    printf("O %dº numero da sequencia de fibonacci eh: %d\n", numero, fibonacci(numero));
    for(int i = 0; i <= numero; i++){
        printf("%d\n", fibonacci(i));
    }
    
    return 0;
}

