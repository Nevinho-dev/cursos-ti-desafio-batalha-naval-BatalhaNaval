#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
int tabuleiro[10][10] = {
    {0,0,0,0,3,3,3,3,3,0,},
    {0,0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,0,},
    {0,0,0,3,0,0,0,0,0,0,},
    {0,0,0,3,0,0,0,0,0,0,},
    {0,0,0,3,0,0,0,0,0,0,},
    {0,0,0,3,0,0,0,0,0,0,},
    {0,0,0,3,0,0,0,0,0,0,},
    {0,0,0,3,0,0,0,0,0,0,}
};

printf("Navio 1 (Horizontal):\n");
printf("Parte 1: (0,4)\n");
printf("Parte 2: (0,5)\n");
printf("Parte 3: (0,6)\n");
printf("Parte 4: (0,7)\n");
printf("parte 5: (0,8)\n");
printf("\n");
printf("Navio 2 (Vertical):\n");
printf("Parte 1: (4,3)\n");
printf("Parte 2: (5,3)\n");
printf("Parte 3: (6,3)\n");
printf("Parte 4: (7,3)\n");
printf("Parte 5: (8,3)\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
