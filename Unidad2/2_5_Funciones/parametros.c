#include "stdio.h"
void incrementarUno(int *p);
void incrementarDos(int p);
int incrementarTres(int p);

int main(){
    int x = 8;
    printf("%d\n", x);
    incrementarUno(&x);
    printf("%d\n", x);
    incrementarDos(x); // Esto no cambia la original
    printf("%d\n", x);
    x = incrementarTres(x);
    printf("%d\n", x);
    
}
void incrementarUno(int *p) { (*p)++; }
void incrementarDos(int p) { p++; }
int incrementarTres(int p) { return ++p; }