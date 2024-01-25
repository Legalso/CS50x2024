#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    // Imprime o corpo da pirâmide chamando a função print_row
    for (int i = 0; i < n; i++)
    {
        // A função print_row recebe o número de espaços e tijolos a serem impressos
        // Para o corpo da pirâmide, o número de espaços diminui enquanto o número de tijolos aumenta
        // A expressão (n - i - 1) representa o número de espaços, e (i + 1) representa o número de tijolos
        print_row(n - i - 1, i + 1);
    }
}

void print_row(int spaces, int bricks)
{
    // Imprime espaços
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // Imprime tijolos
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    // Nova linha para separar as linhas da pirâmide
    printf("\n");
}
