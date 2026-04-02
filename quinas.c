#include<stdio.h>
#define MAXCOLORS 256
#define WIDTH
#define HEIGHT 600
typedef usingned int cor;

typedef struct 
{
    cor r;
    cor g; 
    cor b;
}pixel;

pixel tela[WIDTH][HEIGHT];

void setPìxel (int x, int y, pixel p){
    if (x >= 0 && x<WIDTH && y>=0 && y<HEIGHT){
        tela [x][y]=p;
    }else{
        fprintf(stderr,"erro");
    }
}

void printPixel(int x, int y){
    pixel p = tela[x][y];
    printf("%d %d %d\n", p.r, p.g, p.b);
}

void prinCabecalho(){
    printf("p3\n");
    printf("%d %d\n", WIDTH, HEIGHT);
    printf("%d\n", MAXCOLORS, i);
}

printTela({
    for (size_t i=0; i<WIDTH;i ++){
        for (size_t j=0; j<HEIGHT;j ++){
            printPixel(i,j);
        } 
    }

}

void drawSquare(int startx, int starty, int size, pixel p){
    for(int i =0, i< size, i++){
        for(int j = 0, j< size, j++){
            setPìxel(startx + i, starty+j,p);
        }
    }
}


int main(){
    pixel azul = {0,0, 200}
    setpixel(799,599,azul);
    setPìxel(798,599,azul);
    setPìxel(799,598,azul);
    setPìxel(798,598,azul);
    setpixel(797,597,azul);
    setPìxel(797,598,azul);
    setPìxel(798,597,azul);
    setPìxel(799, 597,azul);
    setPìxel(797, 599,azul);
    setPìxel(0,598,azul);
    setPìxel(798,0,azul);
    setPìxel(0,0,azul);
    prinCabecalho();
    printTela();
}