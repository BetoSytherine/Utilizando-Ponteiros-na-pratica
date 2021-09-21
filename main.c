#include <stdio.h>
#include <stdlib.h>

//Quando  usamos Ponteiros alteramos a memoria atraves do
// Hardware/logico/memoria
int main()
{

    int n; // a varivel guarda o valor na memoria

    //declarando o valor do ponteiro
    int* p; //criamos uma variavel ponteiro com o nome de "p", o ponteiro aponta para o enderço de memoria da varivel

    printf("Digite um numero: ");
    scanf("%d", &n);

 //recebendo o valor do ponteiro
 p = &n; //indicamos que o "p" ponteiro vai receber o valor do "n", p = &n, indicando que o "p" vai receber o endereço do "n" por isso o "&"

    printf("O valoe é: %d\n", n);

    printf("O espaço de memoria é: %d\n", &n); // valor em formato numerico %d.

    printf(" O valro do ponteiro é : %p\n", p); //%p para ponteiros mostra em hexa.

        return 0;
}
//& informa endereço de memoria
