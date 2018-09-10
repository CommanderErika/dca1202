#include <stdio.h>

int main(void)
{
    printf("------ Questão 6 ------\n");
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
      float *f;
      int i;
      f = vet;
      printf("contador/valor/valor/endereco/endereco");
      for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d |",i);
        printf("vet[%d] = %.1f |",i, vet[i]);
        printf("*(f + %d) = %.1f |",i, *(f+i));
        printf("&vet[%d] = %X |",i, &vet[i]);
        printf("(f + %d) = %X |\n",i, f+i);
        printf("valor de f = %d \n", f++);
      }
      printf("Os valores foram como esperado, uma vez que vet é um vetor e f é um ponteiro, então em f era armazenado o endereço de cada bloco do vetor\n");
    return 0;
}
