/******************************************************************************

array
*******************************************************************************/
#include <stdio.h>

int main()
{
   int valor[10];
   int i;
   for(i = 0; i<10; i++){
       printf("Digite o valor da posição %i: \n", i);
       scanf("%i", &valor[i]);
   }
   for(i=9; i>=0; i--){
       printf("A posição %i do vetor: %i", i %valor[i]);
   }

    return 0;
}
