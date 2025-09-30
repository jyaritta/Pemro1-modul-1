#include <stdio.h>
#include <math.h>

int main() {
    int a = 5, b = 12, c = sqrt((a*a)+(b*b));
    printf("Diketahui:\nAlas = %d cm\nTinggi = %d cm\n\n", a,b);
    printf("Jawab:\nSisi A = %d cm\nSisi B %d cm\nSisi C = %d cm\n", a,b,c);
    printf("Keliling = %d cm\nLuas = %d cm", a+b+c, (a*b)/2);
    return 0;
}