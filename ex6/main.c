#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, pos=0, neg=0;
    float sum=0, x[15];
    for(i = 0; i < 15; i++){
    printf("Insira o #%d valor: ", i+1);
    scanf("%f", &x[i]);
        if(x[i] < 0){
        neg++;
        }else{
        pos++;
        }
    sum += x[i];
    }

    printf("Total de numero positivos: %d\n", pos);
    printf("Total de numero negativos: %d\n", neg);
    printf("Soma de todos os numeros: %.2f", sum) ;

    return 0;
}
