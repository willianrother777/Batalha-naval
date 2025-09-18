#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3


void aplicarHabilidade(int tabuleiro[LINHAS][COLUNAS], int habilidade[5][5], int origemX, int origemY) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = origemX + i - 2;
            int y = origemY + j - 2;


            if (x >= 0 && x < LINHAS && y >= 0 && y < COLUNAS && habilidade[i][j] == 1) {
                tabuleiro[x][y] = 5;
            }
        }
    }
}


int main (){

    int tabuleiro [LINHAS][COLUNAS] = {0};
    int navio [NAVIO] = {3, 3, 3};


    for (int i = 0; i < 3; i++) {
        tabuleiro[3 + i][2] = navio[i];
    }
       
 
    for (int i = 0; i < 3; i++) {
        tabuleiro[0][6 + i] = navio[i];
    }
    
    
    for (int i = 0; i < 3; i++) {
        tabuleiro[4 - i][5 + i] = navio[i];
    }
    
    
    for (int i = 0; i < 3; i++) {
        tabuleiro[7 + i][0 + i] = navio[i];
    }
    
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
        

    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    for (int i = 0; i < 5; i++) {
        tabuleiro[2][2 + i] = 5;
        for (int j = 0; j < 3; j++){
            tabuleiro[1][3 + j] = 5;
            tabuleiro[3][3 + j] = 5;
            for (int k = 0; k < 1; k++){
                tabuleiro[0][4] = 5;
                tabuleiro[4][4] = 5;
            }
        }
    }


    aplicarHabilidade(tabuleiro, cone, 8, 4);
    aplicarHabilidade(tabuleiro, cruz, 5, 7);
    aplicarHabilidade(tabuleiro, octaedro, 2, 4);

    // Exibir o tabuleiro

     printf("\nTabuleiro:\n");

     for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {

        printf("%d ", tabuleiro[i][j]);

        }

    printf("\n");

    }

    return 0;

}
