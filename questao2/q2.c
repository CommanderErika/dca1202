#include <stdio.h>

int main()
{
    printf("-------- Questão 2 --------\n");
    printf("a saida para p == &i é 1, \n valor de **&p = 3, \n valor de *p-*q = -2, e o valor de 3 - *p/(*q) + 7 = 10");
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;
    printf("valor de p == &i = %d \n", p == &i);
    printf("valor de **&p = %d \n", **&p);
    printf("valor de p - q = %d \n", *p-*q );
    printf("valor do 3 - *p/(*q) + 7  = %d \n", 3 - *p/(*q) + 7 );
    return 0;
}
