#include <stdio.h>

int main(){
    int a = 9, b = 5, x = 8, y = 8;
    
    printf("Variabel a bernilai %d\nVariabel b bernilai %d\nVariabel x bernilai %d\nVariabel y bernilai %d\n", a, b, x, y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", (a % b) + (x % y));
    return 0;
}