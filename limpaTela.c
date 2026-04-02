# include "estruturaBasica.c"
int main () {
Pixel background = {128 , 128 , 128};
for ( size_t j = 0; j < HEIGHT ; j ++) {
for ( size_t i = 0; i < WIDTH ; i ++) {
setPixel (i , j , background );
}
}
printTela () ;
}