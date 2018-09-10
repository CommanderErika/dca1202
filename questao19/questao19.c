#include <stdio.h>
#include <stdlib.h>

// Aqui está a minha função para a multiplicação de matrizes //
float mC( float **a, float **b, float **c, int la, int  lc, int cb){
    printf("Entrou aqui");
    int i, j, k;
        for (i = 0; i < lc; i++)
        {
            for (j = 0; j < lc; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < lc; k++)
                    c[i][j] += a[i][k]*b[k][j];

            }
        }
}

int main()
{
    printf("------ Questão 19 ------\n");

    float **a;
    float **b;
    float **c;
    int i, j, la, lc, cb; // la = linha de A, linha e coluna de B e A respectivamente, e cb = Coluna de B //

    //Atribuindo os valores para as linhas e colunas das Matrizes//
    printf("Insira o tamanho de linhas da matriz A: \n");
    scanf("%d", &la);
    printf("Insira o tamanho de linhas de A/Colunas de B: \n");
    scanf("%d", &lc);
    printf("Insira o tamanho de colunas da matriz B: \n");
    scanf("%d", &cb);

    // Alocando uma espaço na memoria para as matrizes //
    a = (float **)malloc(la*lc*sizeof(float*));
    b = (float **)malloc(cb*lc*sizeof(float*));
    c = (float **)malloc(lc*lc*sizeof(float*));

    //Atribuindo valores as matrizes//

    printf("Insira os valores para a Matriz A:\n");
    for(i=0;i<la;i++){
        j = 0 ;
        for(j=0;j<lc;j++){
            printf("Insira o valor de a[%d][%d] =\n ",i,j);
            scanf("%f",&*&(a[i][j]));
        }
        printf("k");
    }

    printf("Insira os valores para a Matriz B:\n");
    for(i=0;i<lc;i++){
        for(j=0;j<cb;j++){
            printf("Insira o valor de b[%d][%d] =\n ",i,j);
            scanf("%f",&*&(b[i][j]));
        }
    }

    //Agora vamos imprimir as matrizes//
    //Matriz A //
    printf("Print da Matriz A\n");
    for(i=0;i<la;i++){
        for(j=0;j<lc;j++){
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }
    //Matriz B //
    printf("Print da Matriz B\n");
    for(i=0;i<lc;i++){
        for(j=0;j<cb;j++){
            printf("%f ",b[i][j]);
        }
        printf("\n");
    }
    //Agora foi chamar a função//
    mC( &*&a, &*&b, &*&c, la, lc, cb);
    //Matriz C //
    printf("Entrou em print da matriz c\n");
    for(i=0;i<lc;i++){
        for(j =0;j<lc;j++){
            printf("%f ", c[i][j]);
        }
        printf("\n");
    }
    //free(a);
    //free(b);
    //free(c);
    return 0;
}
