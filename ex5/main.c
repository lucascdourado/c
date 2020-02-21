#include <stdio.h>
#include <stdlib.h>

int main()
{
    float maior, menor, x[10];
    int i;
    for(i = 0; i < 10; i++){
        printf("Insira o #%d valor: ", i+1);
        scanf("%f", &x[i]);
    }

    maior = x[0];
    menor = x[0];

    for(i = 0; i < 10; i++){
        if(x[i] > maior){
        maior = x[i];
        }
        if(x[i] < menor){
        menor = x[i];
        }
    }

    printf("O menor numero eh %.2f e o maior eh %.2f", menor, maior);

    return 0;
}
