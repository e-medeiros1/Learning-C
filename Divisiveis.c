#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese"); 

    int n1, n2, aux;

    printf(" === Esse n�mero � divis�vel por esse??? === \n\n");
    printf("Digite um n�mero: \n");
    scanf("%i", &n1);
    printf("Digite outro n�mero: \n");
    scanf("%i", &n2);

    if (n1 % n2 == 0)
    {
        printf("\nOs n�meros s�o divis�veis!\n\n");
    aux = (n1/n2);
        printf("O resultado da divis�o entre os n�meros �: %.i", aux, ". Obrigado!\n");
    }
    else
    {
        printf("Os n�meros n�o s�o divis�veis!\n");
    }

    return 0;
}
