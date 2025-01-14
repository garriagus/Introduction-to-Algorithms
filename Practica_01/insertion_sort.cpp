#include <iostream>
using namespace std;

// Función que implementa el algoritmo de Insertion Sort
void insertionSort(int arr[], int n) {
    // Recorre el arreglo desde el segundo elemento
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // Elemento actual a insertar
        int j = i - 1;     // Indice para comparar con los elementos previos
	cout << "Este es el paso " << i << std::endl;
        // Mueve los elementos del arreglo que son mayores que 'key' una posición a la derecha
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Coloca 'key' en su posición correcta
        arr[j + 1] = key;
    }
}

// Función para imprimir el arreglo
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};  // Arreglo desordenado
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Arreglo original: ";
    printArray(arr, n);

    insertionSort(arr, n);  // Ordena el arreglo usando Insertion Sort

    cout << "Arreglo ordenado: ";
    printArray(arr, n);

    return 0;
}
