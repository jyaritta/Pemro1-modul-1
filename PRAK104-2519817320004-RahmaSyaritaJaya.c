#include <stdio.h>

int main(){
    int A = 40000, B = 35000;
    float a = 0.13, b = 0.21;
    
    printf("Harga sepatu A adalah %d\nHarga sepatu A adalah %d\n", A, B);
    printf("Sepatu A mendapat diskon %.0f%% sehingga harganya menjadi %.0f\n", a*100, A*(1-a));
    printf("Sepatu B mendapat diskon %.0f%% sehingga harganya menjadi %.0f", b*100, B*(1-b));
    return 0;
}