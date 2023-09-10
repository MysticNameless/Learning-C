#include <stdio.h>

int main(void)
{
    int height, space, line, hashes;

    // Pede ao usuário para escolher a altura da piramêde.
    printf("Choose the height: "); 
        scanf("%i", &height);

    // Este loop verifica se a altura inserida pelo usuário esta entre o intervalo de 1 e 8, caso não esteja ele pede para esclher a altura novamente.
    while(height < 1 || height > 8)
    {
        printf("Choose again: ");
            scanf("%i", &height);
    }

    // Este loop é o responsável pelas linhas da pirâmede.
    for(line = 1; line <= height; line++)
    {
        // Este loop imprime os espaços em branco no lado esquerdo da pirâmede.
        for(space = 1; space <= height - line; space++)
        {
            printf(" ");
        }

        // Este loop imprime os primeiros "#" da pirâmede.
        for(hashes = 1; hashes <= line - 1; hashes++)
        {
            printf("#");
        }

        printf("  ");
        
        for(hashes = 1; hashes <= line - 1; hashes++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}