#include <stdio.h>
#include <stdlib.h>

//Quando  usamos Ponteiros alteramos a memoria atraves do
// Hardware/logico/memoria
int main()
{

    int n; // a varivel guarda o valor na memoria

    //declarando o valor do ponteiro
    int* p; //criamos uma variavel ponteiro com o nome de "p", o ponteiro aponta para o ender�o de memoria da varivel

    printf("Digite um numero: ");
    scanf("%d", &n);

 //recebendo o valor do ponteiro
 p = &n; //indicamos que o "p" ponteiro vai receber o valor do "n", p = &n, indicando que o "p" vai receber o endere�o do "n" por isso o "&"

    printf("O valoe �: %d\n", n);

    printf("O espa�o de memoria �: %d\n", &n); // valor em formato numerico %d.

    printf(" O valro do ponteiro � : %p\n", p); //%p para ponteiros mostra em hexa.

        return 0;
}
//& informa endere�o de memoria
