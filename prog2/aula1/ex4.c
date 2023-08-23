/* 
Jose Vitor Dutra 187174
Lucas Saad 200881
*/
#include <stdio.h>

int main(){
    int d, m, a;

    printf("Insira sua data de nascimento no formato dd-mm-aaaa: \n");
    scanf("%d-%d-%d", &d,&m,&a);

    switch (m){
        case 01:
            if(d<21){
                printf("Capricornio \n");
            } else {
                printf("Aquario \n");
            }
            break;

        case 02:
            if(d<21){
                printf("Aquario \n");
            } else {
                printf("Peixes \n");
            }
            break;

        case 03:
            if(d<21){
                printf("Peixes \n");
            } else {
                printf("Aries \n");
            }
            break;

        case 04:
            if(d<21){
                printf("Aries \n");
            } else {
                printf("Touro \n");
            }
            break;

        case 05:
            if(d<21){
                printf("Touro \n");
            } else {
                printf("Gemeos \n");
            }
            break;

        case 06:
            if(d<21){
                printf("Gemeos \n");
            } else {
                printf("Cancer \n");
            }
            break;

        case 07:
            if(d<21){
                printf("Cancer \n");
            } else {
                printf("Leao \n");
            }
            break;
        
        case 8:
            if(d<21){
                printf("Leao \n");
            } else {
                printf("Virgem \n");
            }
            break;

        case 9:
            if(d<21){
                printf("Virgem \n");
            } else {
                printf("Libra \n");
            }
            break;

        case 10:
            if(d<21){
                printf("Libra \n");
            } else {
                printf("Escorpiao \n");
            }
            break;

        case 11:
            if(d<21){
                printf("Escorpiao \n");
            } else {
                printf("Sagitario \n");
            }
            break;

        case 12:
            if(d<21){
                printf("Sagitario \n");
            } else {
                printf("Capricornio \n");
            }
            break;
    }
}