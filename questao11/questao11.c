#include <stdio.h>

int main()
{
    printf("------ Questão 11 ------\n");
    char x= "abcd";
    int i;
    char *j;
    printf("Valor de x declarado como Char\n");
    for(i = 0; i < 5;i++){
        j = &x;
        printf("|Valor em bytes de x[%d] = %d | ", i, sizeof(*(j+i)));
    }
    printf("\n");

    printf("Valor de x declarado em Inteiro\n");
    int y[4] = {1,2,3,4};
    int *k;
    for(i = 0; i < 5;i++){
        k = &y;
        printf("|Valor em bytes de y[%d] = %d | ", i, sizeof(*(k+i)));
    }
    printf("\n");

    printf("Valor de x declarado em float\n");
    float w[4] = {1.0,2.0,3.0,4.0};
    float *u;
    for(i = 0; i < 5;i++){
        u = &w;
        printf("|Valor em bytes de y[%d] = %d | ", i, sizeof(*(u+i)));
    }
    printf("\n");

    printf("Valor de x declarado em double\n");
    double v[4] = {1.0,2.0,3.0,4.0};
    double *o;
    for(i = 0; i < 5;i++){
        o = &v;
        printf("|Valor em bytes de y[%d] = %d | ", i, sizeof(*(o+i)));
    }
    printf("\n");

    printf("Resultado final: char = 1, int e float = 4, double = 8.\n");
    return 0;
}
