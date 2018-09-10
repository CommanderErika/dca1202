#include <stdio.h>

int main()
{
    printf("-------- Questão 2 --------\n");
    printf("-->Remember that if we use & it means that the address of \nthe variable is returned.\n");
    printf("-->And if we use * it means that the value in that address\n is returned.\n");
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
