#include <stdio.h>
#include <stdlib.h>

int main()
{
    float maior, menor, matriz[3][3];
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Insira o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] > maior){
            maior = matriz[i][j];
            }
            if(matriz[i][j] < menor){
            menor = matriz[i][j];
            }
        }
    }

    printf("O menor numero eh %.2f e o maior eh %.2f", menor, maior);

    return 0;
}
