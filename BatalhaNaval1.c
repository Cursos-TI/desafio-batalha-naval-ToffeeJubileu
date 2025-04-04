#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main() {
    char tabuleiro[LINHA][COLUNA];

     // Inicializar o tabuleiro com pontos
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            tabuleiro[i][j] = '0';
        }
    }


    // Posicionar a peça no meio do tabuleiro
   
    tabuleiro[2][2] = '3'; // 3,C 
    tabuleiro[2][3] = '3'; // 3,D
    tabuleiro[2][4] = '3'; // 3,E

    tabuleiro[5][7] = '3'; // 6,H
    tabuleiro[6][7] = '3'; // 7,H
    tabuleiro[7][7] = '3'; // 8,H

    // Posicionar a pesças vesticais
    tabuleiro[3][0] = '3'; // 4,A
    tabuleiro[4][1] = '3'; // 5,B
    tabuleiro[5][2] = '3'; // 6,C

    tabuleiro[0][9] = '3'; // 1,J
    tabuleiro[1][8] = '3'; // 2,I
    tabuleiro[2][7] = '3'; // 3,H

    //Posicição de Habilidade em octaedro
    tabuleiro[0][1] = '5'; // 1,B
    tabuleiro[1][1] = '5'; // 2,B
    tabuleiro[2][1] = '5'; // 3,B
    tabuleiro[1][0] = '5'; // 2,A
    tabuleiro[1][2] = '5'; // 2,C

    //Posicição de Habilidade em cruz
    tabuleiro[1][6] = '5'; // 2,G
    tabuleiro[2][6] = '5'; // 3,G
    tabuleiro[3][6] = '5'; // 4,G
    tabuleiro[4][6] = '5'; // 5,G
    tabuleiro[5][6] = '5'; // 6,G
    tabuleiro[3][4] = '5'; // 4,E
    tabuleiro[3][5] = '5'; // 4,F
    tabuleiro[3][7] = '5'; // 4,H
    tabuleiro[3][8] = '5'; // 4,I

    //Posicição de Habilidade em cone
    tabuleiro[6][3] = '5'; // 7,D
    tabuleiro[7][2] = '5'; // 8,C
    tabuleiro[7][3] = '5'; // 8,D
    tabuleiro[7][4] = '5'; // 8,E
    tabuleiro[8][1] = '5'; // 9,B
    tabuleiro[8][2] = '5'; // 9,C
    tabuleiro[8][3] = '5'; // 9,D
    tabuleiro[8][4] = '5'; // 9,E
    tabuleiro[8][5] = '5'; // 9,F


     // Imprimir o cabeçalho do tabuleiro
    printf("TABULEIRO DE BATALHA NAVAL\n");
    printf("   A B C D E F G H I J\n");

     // Imprimir as linhas do tabuleiro
    for (int i = 0; i < LINHA; i++) {
        printf("%2d ", i + 1); // Imprimir o número da linha
        for (int j = 0; j < COLUNA; j++) {
            printf("%c ", tabuleiro[i][j]); // Imprimir a célula do tabuleiro
        }
        printf("\n");
    }

    return 0;
}