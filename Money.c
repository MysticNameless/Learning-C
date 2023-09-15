#include <stdio.h>
#include <math.h>

int main(void)
{
    double change;

    printf("Coloque o valor em dolar: ");
        scanf("%lf", &change);

    while(change < 0)
    {
        printf("Insira novament o valor em dolar: ");
            scanf("%lf", &change);
    }

    int cents = round(change * 100);

    int moeda25, moeda10, moeda5, moeda1;

    moeda25 = cents / 25;
    cents %= 25;

    moeda10 = cents / 10;
    cents %= 10;

    moeda5 = cents / 5;
    cents %= 5;

    moeda1 = cents;

    int total = moeda25 + moeda10 + moeda5 + moeda1;

    printf("%d moedas.\n", total);

    printf("moeda de 25 cents: %d\n", moeda25);
    printf("moeda de 10 cents: %d\n", moeda10);
    printf("moeda de 5 cents: %d\n", moeda5);
    printf("moeda de 1 cents: %d\n", moeda1);

    return 0;
}