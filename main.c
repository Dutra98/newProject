#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    char sexo;
    int cervejas, refrigerantes, espetinhos;
    float consumo, couvert, ingresso, valorAPagar;

    printf("Sexo: ");
    scanf("%c", &sexo);
    printf("Quantidade de cervejas: ");
    scanf("%d", &cervejas);
    printf("Quantidade de refrigerantes: ");
    scanf("%d", &refrigerantes);
    printf("Quantidade de espetinhos: ");
    scanf("%d", &espetinhos);

    printf("\n");
    printf("RELATORIO:\n");

    consumo = cervejas * 5 + refrigerantes * 3 + espetinhos * 7;
    printf("Consumo = R$ %.2f\n", consumo);

    couvert = 0;
    if (consumo < 30)
    {
        couvert = 4;
        printf("Couvert = R$ %.2f\n", couvert);
    }
    else
    {
        printf("Isento de Couvert\n");
    }

    if (sexo == 'M')
    {
        ingresso = 10;
    }
    else
    {
        ingresso = 8;
    }

    printf("Ingresso = R$ %.2f\n", ingresso);

    valorAPagar = consumo + couvert + ingresso;
    printf("\n");
    printf("Valor a pagar = R$ %.2f\n", valorAPagar);
    return 0;
}