#include <stdio.h>
#include <math.h>

double xd(double investing, float rate, int months);

int main(void)
{
    float x[2] = {0.0839, 0.1225}; //Taxas de rendimento anual
    int months;

    l:

    printf("Prefere Poupanca ou Selic, para guardar seu suado dinheiro?\n")
    ;
    printf("1 para poupanca e 2 para Selic.\n");

    int b;
        scanf("%d", &b);

    while(b < 1 || b > 2)
    {
        printf("Numero nao aceito.\n");
        goto l;
    }

    if(b == 1)
    {
        printf("Segue um exemplo:\n");
        float jurosp = 1000 * pow((1 + x[0]), 1.0/12.0); //Calcula, com a fórmula dos juros compostos, o quanto renderia R$ 1000 na poupança.
            printf("R$ 1000 em 1 mes na poupanca renderia + ou -: R$ %.2f\n", jurosp - 1000);

        t:

        printf("Nos diga quanto deseja investir.\n");

        double a;
            scanf("%lf", &a); //Pega um novo valor, para fazer o cálculo.            

        printf("Nos diga o tempo que deseja deixar seu dinheiro investido. \n");
            scanf("%d", &months);

        while(months < 1 || months > 12)
        {
            printf("Invalid time.\n");
            goto t;
        }

        float invest = xd(a, x[0], months); //Passa o valor de months para a função

        printf("R$ %.2lf investido por %d meses, vai render: %.2f", a, months, invest - a);
    }

    else if(b == 2)
    {
        printf("Segue um exemplo:\n");
        float jurosS = 1000 * pow((1 + x[1]), 1.0/12.0); //Calcula quanto renderia R$ 1000 na Selic.
            printf("R$ 1000 em 1 mes no selic renderia + ou -: %.2f\n", jurosS - 1000);

    u:

        printf("Nos diga quanto deseja investir.\n");

        double g;
            scanf("%lf", &g);//Pega um novo valor, para fazer o cálculo.            

        printf("Nos diga o tempo que deseja deixar seu dinheiro investido. \n");
            scanf("%d", &months);

        while(months < 1 || months > 12)
        {
            printf("Invalid time.\n");
            goto u;
        }

        float money = xd(g, x[1], months); //Passa o valor de months para a função

        printf("R$ %.2lf investido por %d meses, vai render: %.2f", g, months, money - g);
        //Faz o cálculo usando as taxas declardas no conjunto, usando também outras variáveis
    }
}

double xd(double investing, float rate, int months)
{
    // Calcula a taxa mensal correspondente
    double monthlyRate = pow(1 + rate, 1.0 / 12.0) - 1;
    // Calcula o resultado usando a taxa mensal e os meses
    double resultado = investing * pow(1 + monthlyRate, months);

    return resultado;
}

