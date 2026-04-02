# include "estruturaBasica.c"
typedef struct {
unsigned int x;
unsigned int y;
} ponto ;
int main () {
ponto ini = {100 , 100};
ponto fim = {300 , 300};
Pixel verdeEscuro = {20 , 200 , 100};
for ( size_t i = 0; i < WIDTH ; i ++) {
for ( size_t j = 0; j < HEIGHT ; j ++) {
if (i > ini .x && i < fim .x) {
if (j > ini . y && j < fim .y) {
setPixel (i , j , verdeEscuro ) ;
}
}
}
}
printTela () ;
}
