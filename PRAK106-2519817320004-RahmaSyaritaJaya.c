#include <stdio.h>

int main(){
    int a =  4, b = 8, c = 3;
    printf("Variabel a bernilai %d\nVariabel b bernilai %d\nVariabel c bernilai %d\n", a, b, c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", a > b);
    printf("Apakah b lebih besar c ? jawabannya adalah %d\n", b > c);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", a != c);
    return 0;
}