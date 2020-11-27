#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{

    int idade;
    char bebidas;

    printf("Digite sua idade: \n");
    scanf("%i", &idade);

    if (idade < 18)
    {
        printf("Proibido a venda de bebidas para menores de 18 anos!\n");
    }
    else
    {
        printf("Venda liberada. Aproveite nosso acervo de bebidas, selecione a sua bebida:\n");
        printf(" ==== Menu de bebidas ====\n\n");
        printf(" a = Álcool\n c = Cerveja\n w = Whisky\n v = Vodka\n\nEscolha sua opção: \n");
        scanf("%s", &bebidas);
    }
    switch (bebidas)
    {

    case 'a':
        printf("Você escolheu álcool, aguarde até ser servido. Obrigado pela preferência!\n");
        break;

    case 'c':
        printf("Você escolheu cerveja, aguarde até ser servido. Obrigado pela preferência!\n");
        break;

    case 'w':
        printf("Você escolheu whisky, aguarde até ser servido. Obrigado pela preferência!\n");
        break;

    case 'v':
        printf("Você escolheu vodka, aguarde até ser servido. Obrigado pela preferência!\n");
        break;

    default:
        printf("Opção inválida!\n");
    }

    return 0;
}
