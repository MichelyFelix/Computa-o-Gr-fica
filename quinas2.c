# include "estruturaBasica.c"

typedef struct {
    int x;
    int y;
} Ponto ;
void putPixel ( Ponto , Pixel );

int main () {
    Pixel azulClaro = {0 , 100 , 180};
    Ponto P1 = {0 , 0};
    Ponto P2 = { WIDTH - 1, 0};
    Ponto P3 = { WIDTH - 1, HEIGHT - 1};
    Ponto P4 = {0 , HEIGHT - 1};
    putPixel (P1 , azulClaro );
    putPixel (P2 , azulClaro );
    putPixel (P3 , azulClaro );
    putPixel (P4 , azulClaro );
    printTela () ;
    return 0;
}
void putPixel ( Ponto ponto , Pixel pixel ){
    setPixel ( ponto .x , ponto .y , pixel );
}