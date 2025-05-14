#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funciones utilizadas
void llenarArreglo(int arr[], int n);
void ordenarBurbuja(int arr[], int n);
void ordenarSeleccion(int arr[], int n);
void duplicarArreglo(int origen[], int copia[], int n);
void mostrarArreglo(int arr[], int n);

int main() {
    int n;
    clock_t inicio, fin;
    double duracionBurbuja, duracionSeleccion;

    // Se pide al usuario el tamaño del arreglo, con verificación de rango
    do {
        printf("Digite la cantidad de elementos (entre 1 y 100000): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100000);

    // Declaración de arreglos
    int arregloBase[n];
    int arregloBurbuja[n];
    int arregloSeleccion[n];

    // Llenar el arreglo con números aleatorios
    llenarArreglo(arregloBase, n);

    // Se hacen copias del arreglo original para ordenarlos por separado
    duplicarArreglo(arregloBase, arregloBurbuja, n);
    duplicarArreglo(arregloBase, arregloSeleccion, n);

    // Se muestra el arreglo si es pequeño
    if (n <= 20) {
        printf("\nArreglo generado: ");
        mostrarArreglo(arregloBase, n);
    }

    // Tiempo que tarda el ordenamiento burbuja
    inicio = clock();
    ordenarBurbuja(arregloBurbuja, n);
    fin = clock();
    duracionBurbuja = ((double)(fin - inicio)) / CLOCKS_PER_SEC;

    // Tiempo que tarda el ordenamiento por selección
    inicio = clock();
    ordenarSeleccion(arregloSeleccion, n);
    fin = clock();
    duracionSeleccion = ((double)(fin - inicio)) / CLOCKS_PER_SEC;

    // Mostrar tiempos obtenidos
    printf("\nResultados para arreglo de tamaño %d:\n", n);
    printf("Ordenamiento Burbuja:     %.6f segundos\n", duracionBurbuja);
    printf("Ordenamiento por Selección: %.6f segundos\n", duracionSeleccion);

    // Mostrar los arreglos ya ordenados si son pequeños
    if (n <= 20) {
        printf("\nOrdenado con Burbuja: ");
        mostrarArreglo(arregloBurbuja, n);

        printf("Ordenado con Selección: ");
        mostrarArreglo(arregloSeleccion, n);
    }

    return 0;
}

// Llena un arreglo con números aleatorios del 0 al 99
void llenarArreglo(int arr[], int n) {
    srand(time(NULL)); // Inicializar semilla aleatoria
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
}

// Implementación del algoritmo Bubble Sort
void ordenarBurbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar
                int aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

// Implementación del algoritmo Selection Sort
void ordenarSeleccion(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minPos = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minPos]) {
                minPos = j;
            }
        }
        // Intercambio de elementos
        int temp = arr[minPos];
        arr[minPos] = arr[i];
        arr[i] = temp;
    }
}

// Copia los elementos de un arreglo a otro
void duplicarArreglo(int origen[], int copia[], int n) {
    for (int i = 0; i < n; i++) {
        copia[i] = origen[i];
    }
}

// Muestra en pantalla los elementos de un arreglo
void mostrarArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
