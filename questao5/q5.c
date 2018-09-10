#include <stdio.h>

int main()
{
    printf("------ Questão 5 ------\n");
    int    valor;
      int   *p1;
      float  temp;
      float *p2;
      char   aux;
      char  *nome = "Ponteiros";
      char  *p3;
      int    idade;
      int    vetor[3];
      int   *p4;
      int   *p5;

      /* (a) */
      valor = 10;
      p1 = &valor;
      *p1 = 20;
      printf("%d \n", valor);
      printf("A resposta foi esperada, uma vez que p1 continha a endereço de Valor, então, *p1 aponta pra Valor\n");

      /* (b) */
      temp = 26.5;
      p2 = &temp;
      *p2 = 29.0;
      printf("%.1f \n", temp);
      printf("Da mesma forma que o anterior, o valor de temp era esperado com uma casa decimal em float\n");

      /* (c) */
      p3 = &nome[0];
      aux = *p3;
      printf("%c \n", aux);
      printf("No caso, p3 contem o endereço da primeira variavel do char nome, logo aux armazena apartir de *p3 o valor de nome[0]\n");

      /* (d) */
      p3 = &nome[4];
      aux = *p3;
      printf("%c \n", aux);
      printf("p3 contem o endereço de char nome[4], e aux recebe o valor de nome[4] usando ponteiros\n");

      /* (e) */
      p3 = nome;
      printf("%c \n", *p3);
      printf("Era esperado 'p' pois, quando atribuimos p3 = nome, quer dizer que p3 vai receber o primeiro valor do char em lower-case\n");

      /* (f) */
      p3 = p3 + 4;
      printf("%c \n", *p3);
      printf("Como no caso anterior o p3 = nome, então como fizemos p3 = p3 + 4, então p3 vai receber o valor do 5 caracter\n");

      /* (g) */
      p3--;
      printf("%c \n", *p3);
      printf("como estamos subtraindo do valor anterior p3 = p3 + 4, então, a saida vai ser um caracter anterior\n");

      /* (h) */
      vetor[0] = 31;
      vetor[1] = 45;
      vetor[2] = 27;
      p4 = vetor;
      idade = *p4;
      printf("%d \n", idade);
      printf("Era esperado, uma vez que p4 armazena o valor do endereço de vetor[0] ,e quando passamos por referencia\n");

      /* (i) */
      p5 = p4 + 1;
      idade = *p5;
      printf("%d \n", idade);

      /* (j) */
      p4 = p5 + 1;
      idade = *p4;
      printf("%d \n", idade);

      /* (l) */
      p4 = p4 - 2;
      idade = *p4;
      printf("%d \n", idade);

      /* (m) */
      p5 = &vetor[2] - 1;
      printf("%d \n", *p5);

      /* (n) */
      p5++;
      printf("%d \n", *p5);

      printf("Com relação ao resto dos quesitos a cima, todas eram esperados, uma vez que só estava sendo alterado os valores do endereço do vetor, e no fim apontando pra o valro naquela posição do vetor\n");
    return 0;
}
