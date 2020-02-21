#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, x, sum=0, matriz[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Insira o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            x = (i + 1) + (j + 1);
            /*i + 1 e j + 1, pois i e j indicam o a posição começando em 0*/
            if(x == 4){
            /*i + j = n + 1, então n + 1 = 4, pois n é a ordem da matriz*/
                sum += matriz[i][j];
            }
        }
    }

    printf("A soma da diagonal secundaria eh: %d", sum);

    return 0;
}
