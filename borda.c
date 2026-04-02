# include "estruturaBasica.c"
typedef struct {
unsigned int x;
unsigned int y;
} ponto ;
int main () {
ponto ini = {100 , 100};
ponto fim = {200 , 200};
Pixel azulClaro = {0 , 100 , 180};
for ( size_t j = 0; j < HEIGHT ; j ++) {
for ( size_t i = 0; i < WIDTH ; i ++) {
if (i == 0 || j == 0 || i == ( WIDTH - 1) || j == ( HEIGHT - 1) ) {
setPixel (i , j , azulClaro );
}
}
}
printTela () ;
}