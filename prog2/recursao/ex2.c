#include <stdio.h>

int fatorial (int n) {
    // caso base
    if (n <= 1){
      return (1);
    } 

    // caso geral
    return n * fatorial(n - 1);

}

int main (){
    int numero;
    printf ("Insira um numero: ");
    scanf("%d", &numero);
    
    printf("%d! = %d", numero, fatorial(numero));
    
    return 0;
}
