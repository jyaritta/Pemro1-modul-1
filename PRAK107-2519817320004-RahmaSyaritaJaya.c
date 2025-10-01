#include <stdio.h>

int main(){
    int a = 4, b = 5, c = 7, k = a+b+c, h = 85000;

    printf("Diketahui: ");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
    printf("Harga tanah Per Meter adalah %d\n", h);
    printf("Biaya yang diperlukan Pak Dengklek adalah: Rp %d", h*k);
    return 0;

}
