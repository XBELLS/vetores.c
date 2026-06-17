/******************************************************************************

vetores -Receber 10 valores inteiros e exibí-los em ordem
inversa à que foi informada

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vet[10];
    int i;
    for(i=0;i<10;i++){
        printf("digite o valor %i do vetor: ", i);
        scanf("%i\n", &vet[i]);
    }
    for(i=9;i>=0;i--){
        printf("%i\n", vet[i]);
    }

    return 0;
}
