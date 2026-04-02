#include <stdio.h> // Removidos os espaços

#define MAX_COLORS 256
#define WIDTH 800
#define HEIGHT 600

typedef unsigned char cor;

typedef struct {
    cor r;
    cor g;
    cor b;
} Pixel;

Pixel tela[HEIGHT][WIDTH];

void setPixel(int x, int y, Pixel p) {
    // Trocado o símbolo ≥ por >=
    if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) {
        tela[y][x].r = p.r;
        tela[y][x].g = p.g;
        tela[y][x].b = p.b;
    } else {
        fprintf(stderr, "Erro: Coordenadas invalidas.\n");
    }
}

void printPixel(int x, int y) {
    printf("%d %d %d ", tela[y][x].r, tela[y][x].g, tela[y][x].b);
}

void printCabecalho(char *padrao, int w, int h, int M) {
    printf("%s\n", padrao);
    printf("%d %d\n", w, h);
    printf("%d\n", M);
}

void printTela() {
    printCabecalho("P3", WIDTH, HEIGHT, MAX_COLORS - 1);
    
    for (int j = 0; j < HEIGHT; j++) {
        for (int i = 0; i < WIDTH; i++) {
            printPixel(i, j);
        }
        printf("\n"); // Adicionado para quebrar linha entre as fileiras de pixels
    }
}