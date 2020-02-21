#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a[10], b[10], c[10];
    for(i = 0; i < 10; i++){
    printf("Informe o #%d do array A: ", i+1);
    scanf("%d", &a[i]);
    }
    for(i = 0; i < 10; i++){
    printf("Informe o #%d do array B: ", i+1);
    scanf("%d", &b[i]);
    }
    for(i = 0; i < 10; i++){
    c[i] = a[i] - b[i];
    }
    printf("Array C (A-B): { ");
    for(i = 0; i < 10; i++){
    printf("%d ", c[i]);
    }
    printf("}");

    return 0;
}
