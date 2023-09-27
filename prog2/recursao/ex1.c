#include <stdio.h>

int main(){
    int num, fatorial;

    printf("Insira um numero: ");
    scanf("%d", &num);
    
    fatorial = num;
    for(int i = num - 1; i != 0; i--){
        fatorial = fatorial * i;
    }

    printf("%d! = %d\n", num, fatorial);
    return 0;
}