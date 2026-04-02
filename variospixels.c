# include "estruturaBasica.c"

typedef struct {
int x;
int y;
} Ponto ;
void putPixel ( Ponto , Pixel );
int main () {
Pixel p [5] = {
{255 , 0, 0} , {0 , 255 , 0} , {0 , 0 , 255} , {255 , 0 , 255} , {0 , 255 , 255}};
Ponto pontos [5] = {{10 , 20} , {30 , 40} , {50 , 60} , {70 , 80} , {90 , 100}};
for (int i = 0; i < 5; i ++) {
putPixel ( pontos [ i], p[i ]) ;
}
printTela () ;
return 0;
}
void putPixel ( Ponto ponto , Pixel pixel ){
setPixel ( ponto .x , ponto .y , pixel );
}