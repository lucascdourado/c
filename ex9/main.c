#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, sum=0, matriz[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Insira o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(i == j){
                sum += matriz[i][j];
            }
        }
    }

    printf("A soma da diagonal principal eh: %d", sum);

    return 0;
}
