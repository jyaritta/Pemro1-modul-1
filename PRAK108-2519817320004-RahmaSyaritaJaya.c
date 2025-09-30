#include <stdio.h>

int main(){
    float a = 5, b = 14;

    printf("Diketahui: \n");
    printf("Pak Dengklek mengelilingi taman = %f Putaran\nJarak tempuh  Pak Dengklek = %f Kilometer\n\n", a, b);
    
    printf("Jawaban: \nJari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", (b/a)/(2 * 3.14));
    return 0;
}