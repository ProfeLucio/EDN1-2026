#include "stdio.h"

double array[5];

int main(){
    printf("%x\n", &array[0]);
    printf("%x\n", &array[1]);
    printf("%x\n", &array[2]);
    printf("%x\n", &array[3]);
    printf("%x\n", &array[4]);
    printf("%x\n", &array[5]);
    printf("%x\n", &array[6]);
    printf("%x\n", &array[7]);
    printf("%d\n", sizeof(array[8]));

}