#include <stdio.h>

int main(){
    float a = 9, b = 6, x = 10, y = 7;
    
    printf("Variabel a bernilai %.0f\nVariabel b bernilai %.0f\nVariabel x bernilai %.0f\nVariabel y bernilai %.0f\n", a, b, x, y);
    printf("Hasil dari a dikali b dibagi c adalah %.2f", (a+b)*x/y);
    return 0;
}