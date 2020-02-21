#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
	float media,vetor[5];
	for(i = 0; i < 5; i++){
		printf("Informe o #%d valor: ", i+1);
		scanf("%f", &vetor[i]);	
		media += vetor[i];	
	}
	printf("Os numeros sao: ");
	for(i = 0; i < 5; i++){
		printf("%.2f ", vetor[i]);
	}  
	media = media / 5;
	printf("\nMedia: %.2f", media);
    
    return 0;
}