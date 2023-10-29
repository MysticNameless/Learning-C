#include <stdio.h>

int main(void)
{
    int v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14,
    v15, v16;

    long long numb = 0;

    printf("Numero: ");
        scanf("%lld", &numb);

    while(numb <= 0)
    {
        printf("Numero: ");
            scanf("%lld", &numb);
    }

    //Pegando o segundo valor de trás para frente, começando do penúltimo, pulando de um em um, para multiplicar por 2.
    v15 = ((numb / 10) % 10) * 2;
    v13 = ((((numb / 10) /100) % 10)) * 2;
    v11 = ((((numb / 10) /100) /100) % 10) * 2;
    v9 = (((((numb / 10) /100) /100) /100) % 10) * 2;
    v7 = ((((((numb / 10) /100) /100) /100) /100) % 10) * 2;
    v5 = (((((((numb / 10) /100) /100) /100) /100) /100) % 10) * 2;
    v3 = ((((((((numb / 10) /100) /100) /100) /100) /100) /100) % 10) * 2;
    v1 = (((((((((numb / 10) /100) /100) /100) /100) /100) /100) /100) % 10) * 2;

    //Pegando os valores e somando(transformando em unidade).
    v15 = ((v15 / 10) % 10) + (v15 % 10);
    v13 = ((v13 / 10) % 10) + (v13 % 10);
    v11 = ((v11 / 10) % 10) + (v11 % 10);
    v9 = ((v9 / 10) % 10) + (v9 % 10);
    v7 = ((v7 / 10) % 10) + (v7 % 10);
    v5 = ((v5 / 10) % 10) + (v5 % 10);
    v3 = ((v3 / 10) % 10) + (v3 % 10);
    v1 = ((v1 / 10) % 10) + (v1 % 10);

    int Soma1 = v15 + v13 + v11 + v9 + v7 + v5 + v3 + v1;

    //Pegando os que ainda não foram somados.
    v2 = numb % 10;
    v4 = (numb / 10000) % 10;
    v6 = (numb / 1000000) % 10;
    v8 = (numb / 100000000) % 10;
    v10 = (numb / 10000000000) % 10;
    v12 = (numb / 1000000000000) % 10;
    v14 = (numb / 100000000000000) % 10;
    v16 = (numb / 10000000000000000) % 10;

    int Soma2 = v2 + v4 + v6 + v8 + v10 + v12 + v14 + v16;

    int Soma = Soma1 + Soma2;

    //Verificando se a soma de tudo acaba com o digito 0.
    if(Soma % 10 != 0)
    {
        printf("INVALIDO\n");
        return 0;
    }
    
    //Contando os digítos do cartão.
    int contador = 0;

    while(numb != 0)
    {
        numb /= 10;
        contador++;
    }

    //Verificando a marca do cartão;
    if(contador == 16 && ((v1 + v2) >= 6 && (v1 + v2) <= 10))
    {
        printf("MATERCARD\n");
    }

    else if(contador == 15 && ((v1 + v2) >= 7 && (v1 + v2) <= 10))
    {
        printf("AMEX\n");
    }

    else if((contador == 13 || contador == 16) && (v2 == 4))
    {
        printf("VISA\n");
    }
    
    return 0;
}
