#include <stdio.h>

void soma_produto(int a, int b, int * soma, int * produto){
    *(soma) = a + b;
    *(produto) = a * b;
}

int main(){
    int s, p;
    int * ponteiro_soma, * ponteiro_produto;
    
    ponteiro_soma = &s;
    ponteiro_produto = &p;
    
    soma_produto(2, 5, ponteiro_soma, ponteiro_produto);

    printf("Soma: %d Produto: %d", s, p);
}