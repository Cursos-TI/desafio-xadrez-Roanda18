#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    const int torreMovimentos = 5;
    int bispoMovimentos = 0;
    int rainhaMovimentos = 0;
    int cavaloMovimentos = 0;

    printf("Movimentação da Torre: \n");
    for (size_t i = 0; i <= torreMovimentos; i++)
    {
        printf("Direita \n", i + 1);
    }
    printf("\n");
    
    printf("Movimentação do Bispo: \n");
    while (bispoMovimentos < 5)
    {
        printf("Cima, Direita \n");
        bispoMovimentos++;
    }
    printf("\n");

    printf("Movimentação da Rainha: \n");
    do
    {
        printf("Esquerda \n");
        rainhaMovimentos++;
    } while (rainhaMovimentos < 8);
    printf("\n");

    printf("Movimentação do Cavalo: \n");
    for (size_t i = 0; i < 1; i++)
    {        
        while (cavaloMovimentos < 2)
        {
            printf("Baixo \n");
            cavaloMovimentos++;
        }   
        printf("Esquerda \n");                 
        
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
