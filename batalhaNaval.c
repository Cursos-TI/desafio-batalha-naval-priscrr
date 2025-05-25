#include <stdio.h>

// Tamanho fixo do tabuleiro
#define TAMANHO_TABULEIRO 10

// Tamanho fixo dos navios
#define TAMANHO_NAVIO 3

int main()
{
    // Inicializa o tabuleiro com água (0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {{0}};

    // Declara e inicializa os vetores para os navios
    int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3};
    int navio_vertical[TAMANHO_NAVIO] = {3, 3, 3};

    // Posiciona os navios no tabuleiro
    // Navio horizontal nas coordenadas (3, 3) a (3, 5)
    for (int i = 0; i < TAMANHO_NAVIO; i++)
    {
        tabuleiro[3][3 + i] = navio_horizontal[i];
    }

    // Navio vertical nas coordenadas (6, 2) a (8, 2)
    for (int i = 0; i < TAMANHO_NAVIO; i++)
    {
        tabuleiro[6 + i][2] = navio_vertical[i];
    }

    // Exibe o tabuleiro
    printf("   ");
    for (char letra = 'A'; letra <= 'J'; letra++)
    {
        printf("%c ", letra);
    }
    printf("\n");

    for (int i = 0; i < TAMANHO_TABULEIRO; i++)
    {
        if (i < 9)
        {
            printf("%d  ", i + 1);
        }
        else
        {
            printf("%d ", i + 1);
        }
        for (int j = 0; j < TAMANHO_TABULEIRO; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}