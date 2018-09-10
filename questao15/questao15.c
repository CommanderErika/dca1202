#include <stdio.h>
#include <stdlib.h>
float comparando(const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}
// A cima está a nossa função de comparação, que iria compará dois valores e retornar um valor: =0, 0<, 0>//
int main()
{
    printf("------- Questão 15 ------!\n");
    float *x;
    int i, n;
    //Dizemos qual o tamanho do velor e os seus valores //
    printf("Insira o numero de Elementos:\n");
    scanf("%d",&n);

    x = (float *)malloc(n*sizeof(float));

    printf("Insira os valores dos Elemntos:\n");
    for(i =0;i<n;i++){
        scanf("%f", &x[i]);

    }

    // Aqui estou chamando a função q sorte, dizendo o que é para ordenar 'x',//
    //o tamanho de x, o tipo e a fução de comapração //
    qsort(x, n , sizeof(float), comparando);

    //Por fim estou imprimindo os valores //
    for(i=0;i<n;i++){
        printf("valor %d = %f\n", i, x[i]);
    }
    return 0;
}
