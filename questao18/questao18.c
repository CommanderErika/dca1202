#include <stdio.h>
#include <stdlib.h>

float somav(float *v1, float *v2, float *vs, int n ){
    int i;
    for(i=0;i<n;i++){
        vs[i] = v1[i] + v2[i];
    }
    printf("Essa função foi chamada\n");
}

int main()
{
    printf("------ Questão 18 ------\n");
    float *v1;
    float *v2;
    float *vs;
    int n, i;

    //Queremos saber qual o tamanho dos vetores //
    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &n);

    // Agora irei alocar um espaço na memoria para os vetores //
    v1 = (float *)malloc(n*sizeof(float));
    v2 = (float *)malloc(n*sizeof(float));
    vs = (float *)malloc(n*sizeof(float));

    //Agora iremos colocar os valores para os vetores //
    printf("Insira os valores do vetor 1:\n");
    for(i=0;i<n;i++){
        scanf("%f", &v1[i]);
    }
    printf("Insira os valores do vetor 2:\n");
    for(i=0;i<n;i++){
        scanf("%f", &v2[i]);
    }

    //Chamamos a função criada //
    somav(v1,v2,vs,n);

    //Printamos o valores do vetor soma //
    for(i=0;i<n;i++){
        printf("%f\n",vs[i]);
    }
    return 0;
}
