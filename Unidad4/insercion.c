#include <stdio.h>
#define N 5

int arreglo[N] = {6, 2, 4, 1, 5};
void mostrar(int n);
void insertionSort(int arr[], int n);
int main(){    
    mostrar(N);
    insertionSort(arreglo, N);
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int clave = arr[i]; // Elemento a insertar
        int j = i - 1; //mira lo de atras
        // De<s>plazar hacia la derecha los elementos} mayores que 'clave'
        while (j >= 0 && arr[j] > clave) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Insertar 'clave' en la posición que dejó libre
        arr[j + 1] = clave;
        mostrar(N);
    }
}

void mostrar(int n){
    for(int i = 0; i < n; i++){
        printf("%d - ", arreglo[i] );
    }    
    printf("\n");
}