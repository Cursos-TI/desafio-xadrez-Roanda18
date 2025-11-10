#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void moverTorre(int movimentosRestantes)
{
    if (movimentosRestantes > 0)
    {
        printf("Direita \n");
        moverTorre(movimentosRestantes - 1);
    }
}

void moverBispo(int movimentosRestantes)
{
    if (movimentosRestantes > 0)
    {
        printf("Cima \n");
        for ( int i = 0; i < 1; i++)
        {
            printf("Direita \n");
        }
        moverBispo(movimentosRestantes - 1);
    }    
}

void moverRainha(int movimentosRestantes)
{
    if (movimentosRestantes > 0)
    {
        printf("Esquerda \n");
        moverRainha(movimentosRestantes - 1);
    }
}

int main()
{
    int i, j;

    printf("Movimentação da Torre: \n");
    moverTorre(5);
    printf("\n");

    printf("Movimentação do Bispo: \n");
    moverBispo(5);
    printf("\n");

    printf("Movimentação da Rainha: \n");
    moverRainha(8);
    printf("\n");

    printf("Movimentação do Cavalo: \n");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Cima \n");
        }

        printf("Direita \n");
    }
    printf("\n");

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
