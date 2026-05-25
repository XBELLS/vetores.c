*******************************************************************************/
#include <stdio.h>


float media(float vetor[], int tam){
    int i;
    float soma=0;
    for(i=0; i<tam; i++)
    {
    soma += vetor[i];
    }
    return (float)soma/tam;
    }
    
    int main(){
        int tam;
        int vetor[tam];
        int i;
        
        for(i=0; i<tam; i++){
            printf("nota %d: ", i);
            scanf("%d", &vetor[tam]);
        }
        
        return 0;
    }
