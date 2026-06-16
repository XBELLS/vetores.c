
Pedir para o usuário dizer o tamanho do vetor e
ler essa quantidade de valores
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vet[n];
    
    for(i=0; i<n; i++)
    {
        printf("digite a posição %i de vetor:  ", i);
        scanf("%i", &vet[i]);
    }
    return 0;
}
