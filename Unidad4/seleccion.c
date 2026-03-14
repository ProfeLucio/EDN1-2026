#include <stdio.h>
#define N 5

int arreglo[N] = {6, 2, 4, 1, 5};
void mostrar(int n);
void selectionSort(int arr[], int n);

int main(){    
    mostrar(N);
    selectionSort(arreglo, N);
}


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        // Encontrar el mínimo en arr[i..n-1]
        for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Intercambiar el mínimo encontrado con el elemento en i
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        mostrar(N);
    }
}

void mostrar(int n){
    for(int i = 0; i < n; i++){
        printf("%d - ", arreglo[i] );
    }    
    printf("\n");
}