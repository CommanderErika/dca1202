#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("------ Questão 14 ------\n");
    float *x;
    int n; //numero de elementos //
    int i,j;
    float w;

    printf("Inisra o numero de elementos:\n");
    scanf("%d",&n);

    x = (float *)malloc((n)*(sizeof(float)));

    //Agora armazenando os elementos no vetor //
    printf("Insira os valores do vetor a baixo\n");
    for(i=0; i<n;i++){
        scanf("%f\n", &x[i]);
    }
    printf("Os valroes do vetor:\n");
    for(i=0;i<n;i++){
        printf("%2f\n", x[i]);
    }
    //Estamos ordenando ele //
    for(i =0; i<n;i++){
        for(j=n;j>i;j--){
            if(x[i]>x[j]){
                w = x[j];
                x[j] = x[i];
                x[i] = w;
            }

        }
    }
    printf("Os valroes do vetor:\n");
    for(i=0;i<n;i++){
        printf("%2f\n", x[i]);
    }
    free(x);
    return 0;
}
