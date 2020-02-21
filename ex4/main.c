#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,y;
	float sum,vetor[8];
	sum = 0;
	for(i = 0; i < 8; i++){
		printf("Informe o #%d valor: ", i+1);
		scanf("%f", &vetor[i]);		
	}
	
	printf("Informe o valor da posicao X: ");
	scanf("%d", &x);
	printf("Informe o valor da posicao Y: ");
	scanf("%d", &y);
	
	for(i = x; i <= y; i++){
		sum += vetor[i];
	}
	
	printf("A soma eh: %.2f", sum);	
	
    return 0;
}