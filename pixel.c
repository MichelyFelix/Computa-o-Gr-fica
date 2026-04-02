# include "estruturaBasica.c"

int main () {
    Pixel p = {0 , 100 , 180};
    int x = 200 , y = 300;
    setPixel (x , y , p);
    printTela () ;
    return 0;
}