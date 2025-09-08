// https://judge.beecrowd.com/pt/problems/view/1100

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define N 8  // Tabuleiro 8x8

typedef struct {
    int x, y;
} Pos;

typedef struct {
    Pos pos;
    int dist;
    Pos caminho[64];
    int tam;
} Estado;

int moves[8][2] = {
    {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
    {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
};

bool verifica_limite(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N);
}


Pos strParaPos(const char *s) {
    Pos p;
    p.x = s[0] - 'a';      
    p.y = s[1] - '1'; 
    return p;
}

void imprimeCasa(Pos p) {
    char coluna = 'a' + p.x;
    int linha = p.y + 1;
    printf("%c%d", coluna, linha);
}

void bfs(Pos start, Pos end) {
    bool visitado[N][N] = {false};

    Estado fila[1000];

    int inicio = 0, fim = 0;

    fila[fim].pos = start;
    fila[fim].dist = 0;
    fila[fim].caminho[0] = start;
    fila[fim].tam = 1;
    fim++;
    visitado[start.x][start.y] = true;

    while (inicio < fim) {
        Estado atual = fila[inicio++];
        
        if (atual.pos.x == end.x && atual.pos.y == end.y) {
            printf("To get from ");
            imprimeCasa(start);
            printf(" to ");
            imprimeCasa(end);
            printf(" takes %d\n", atual.dist);
            return;
        }

        for (int i = 0; i < 8; i++) {
            int nx = atual.pos.x + moves[i][0];
            int ny = atual.pos.y + moves[i][1];

            if (verifica_limite(nx, ny) && !visitado[nx][ny]) {
                visitado[nx][ny] = true;

                Estado novo;
                novo.pos.x = nx;
                novo.pos.y = ny;
                novo.dist = atual.dist + 1;

                for (int j = 0; j < atual.tam; j++) {
                    novo.caminho[j] = atual.caminho[j];
                }
                novo.caminho[atual.tam] = (Pos){nx, ny};
                novo.tam = atual.tam + 1;

                fila[fim++] = novo;
            }
        }
    }
}

int main() {
    char origem[3], destino[3];

    while (scanf("%2s %2s", origem, destino) == 2) {
        Pos inicio = strParaPos(origem);
        Pos fim = strParaPos(destino);

        bfs(inicio, fim);
    }

    return 0;
}
