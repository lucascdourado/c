#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,vetor[6];
    for(i = 0; i < 6; i++)
    {
        printf("Informe o #%d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Os numeros sao: ");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
