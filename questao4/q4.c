#include <stdio.h>

int main()
{
    printf("------ Questão 4 ------\n");
    printf("Dado que i e j são variaveis inteira, p e q são ponteiros para int\n");
    int i=3,j=4;
    int *p;
    int *q;

    p = i;
    printf("p = i : %d\n", p);
    q = &j;
    printf("p = &j : %d\n", q);
    p = &*&i;
    printf("p = &*&i: %d\n", p);
    //i = (*&)j;//
    //printf("i = (*&)j : %d\n", i);
    printf("i = (*&)j, nos dá um erro de 'expected expression', pois o * esperava alguma variavel depois\nMas os parentesis dificulta\n");
    i = *&j;
    printf("i = *&j : %d\n", i);
    i = *&*&j;
    printf("i = *&*&j; : %d\n", i);
    q = *p;
    printf("q = *p : %d\n", q);
    //i = ((*p)++) + *q;
    //printf("i = (*p)++ + *q : %d\n", i);
    printf("A expressão (*p)++ + *q não foi possivel ser printada\n");

    printf("Então, as expressões que não são legais i = (*&)j e i = ((*p)++) + *q\n");
    return 0;
}
