// desafio Nivel novato 

#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    int x_vertical = 2;
    int y_vertical = 3;
    int tamanho_vertical = 4;

    int x_horizontal = 6;
    int y_horizontal = 1;
    int tamanho_horizontal = 3;

    printf("=== POSICIONAMENTO DOS NAVIOS ===\n\n");

    printf("Navio Vertical (tamanho %d):\n", tamanho_vertical);
    for (int i = 0; i < tamanho_vertical; i++) {
        tabuleiro[x_vertical + i][y_vertical] = 1;
        printf("Parte %d -> Coordenada: (%d, %d)\n", i + 1, x_vertical + i, y_vertical);
    }

    printf("\n");

    printf("Navio Horizontal (tamanho %d):\n", tamanho_horizontal);
    for (int j = 0; j < tamanho_horizontal; j++) {
        tabuleiro[x_horizontal][y_horizontal + j] = 1;
        printf("Parte %d -> Coordenada: (%d, %d)\n", j + 1, x_horizontal, y_horizontal + j);
    }

    printf("\n=== Fim do posicionamento ===\n");

    return 0;
}

// Desafio nivel Aventureiro 

import random

def posicionar_navio(tabuleiro, tamanho=3, direcao='H'):
    n = len(tabuleiro)
    while True:
        linha = random.randint(0, n - 1)
        coluna = random.randint(0, n - 1)
        
        # Calcular posições possíveis
        if direcao == 'H' and coluna + tamanho <= n:
            posicoes = [(linha, coluna + i) for i in range(tamanho)]
        elif direcao == 'V' and linha + tamanho <= n:
            posicoes = [(linha + i, coluna) for i in range(tamanho)]
        elif direcao == 'D' and linha + tamanho <= n and coluna + tamanho <= n:
            posicoes = [(linha + i, coluna + i) for i in range(tamanho)]
        else:
            continue
        
        # Verifica se as posições estão livres
        if all(tabuleiro[l][c] == 0 for l, c in posicoes):
            for l, c in posicoes:
                tabuleiro[l][c] = 3
            break

# Criar tabuleiro e posicionar 4 navios
tabuleiro = [[0]*10 for _ in range(10)]
direcoes = ['H', 'V', 'D', 'D']  # 2 diagonais
for d in direcoes:
    posicionar_navio(tabuleiro, 3, d)

    // Desaio Nivel Mestre 

    #include <stdio.h>

#define N 5 #include <stdio.h>

#define N 5 

void exibirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void limparMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = 0;
        }
    }
}

void habilidadeCone(int matriz[N][N]) {
    limparMatriz(matriz);
    int centro = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i >= centro && j >= centro - (i - centro) && j <= centro + (i - centro)) {
                matriz[i][j] = 1;
            }
        }
    }

    printf("🧿 Habilidade: CONE\n");
    exibirMatriz(matriz);
}

void habilidadeCruz(int matriz[N][N]) {
    limparMatriz(matriz);
    int centro = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == centro || j == centro) {
                matriz[i][j] = 1;
            }
        }
    }

    printf("✝️ Habilidade: CRUZ\n");
    exibirMatriz(matriz);
}

void habilidadeOctaedro(int matriz[N][N]) {
    limparMatriz(matriz);
    int centro = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                matriz[i][j] = 1;
            }
        }
    }

    printf("🔷 Habilidade: OCTAEDRO\n");
    exibirMatriz(matriz);
}


int main() {
    int tabuleiro[N][N];


    habilidadeCone(tabuleiro);
    habilidadeCruz(tabuleiro);
    habilidadeOctaedro(tabuleiro);

    return 0;
}

void exibirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void limparMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = 0;
        }
    }
}

void habilidadeCone(int matriz[N][N]) {
    limparMatriz(matriz);
    int centro = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i >= centro && j >= centro - (i - centro) && j <= centro + (i - centro)) {
                matriz[i][j] = 1;
            }
        }
    }

    printf("🧿 Habilidade: CONE\n");
    exibirMatriz(matriz);
}

void habilidadeCruz(int matriz[N][N]) {
    limparMatriz(matriz);
    int centro = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == centro || j == centro) {
                matriz[i][j] = 1;
            }
        }
    }

    printf("✝️ Habilidade: CRUZ\n");
    exibirMatriz(matriz);
}

void habilidadeOctaedro(int matriz[N][N]) {
    limparMatriz(matriz);
    int centro = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                matriz[i][j] = 1;
            }
        }
    }

    printf("🔷 Habilidade: OCTAEDRO\n");
    exibirMatriz(matriz);
}

int main() {
    int tabuleiro[N][N];

    habilidadeCone(tabuleiro);
    habilidadeCruz(tabuleiro);
    habilidadeOctaedro(tabuleiro);

    return 0;
}