#include <stdio.h>

int main()
{
    printf("------ Question 3 ------\n");
    printf("");
    printf("-->When we dont put the * before 'j' in the example above, 'j' will return the address.\n");
    printf("-->But notice that 'j' has a different address compared to 'i'.\n");
    printf("-->Thus, *j will point to the address which is stored in itself.\n");

    int i = 5;
    int *p;
    p = &i;
    printf("%x\n %d\n %d\n %d\n %d\n", p,*p+2,**&p,3**p,**&p+4);
    printf("x means that you want to print in lower-case hexadecimal");
    return 0;
}
