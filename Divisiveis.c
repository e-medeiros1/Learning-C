#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese"); 

    int n1, n2, aux;

    printf(" === Esse número é divisível por esse??? === \n\n");
    printf("Digite um número: \n");
    scanf("%i", &n1);
    printf("Digite outro número: \n");
    scanf("%i", &n2);

    if (n1 % n2 == 0)
    {
        printf("\nOs números são divisíveis!\n\n");
    aux = (n1/n2);
        printf("O resultado da divisão entre os números é: %.i", aux, ". Obrigado!\n");
    }
    else
    {
        printf("Os números não são divisíveis!\n");
    }

    return 0;
}
