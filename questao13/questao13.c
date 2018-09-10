#include <stdio.h>

float areaperi(int raio, float *area, float *perimetro){
   *area = 3.1415*raio*raio;
    *perimetro = 3.1415*raio*2;
}

int main()
{
    printf("------ Questão 13 ------\n");
    printf("Quando falamos de ponteiro para função, nós queremos dizer que o endereço de uma variavel é passado\n");
    printf("como parâmetro para função.\nExemplo:\n");

    int raio;
    float area, perimetro;
    printf("Insira um valor para o raio:\n");
    scanf("%d",&raio);
    areaperi(raio, &area, &perimetro);

    printf("Area = %f \n",area);
    printf("Perimetro = %f \n", perimetro);
    return 0;
}
