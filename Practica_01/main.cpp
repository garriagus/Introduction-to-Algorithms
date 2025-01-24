// main.cpp
#include <iostream>
#include "insertion-sort.cpp" // Importamos la función insertionSort
using namespace std;

// Función para imprimir un arreglo
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Arreglo original: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Arreglo ordenado: ";
    printArray(arr, n);

    return 0;
}
