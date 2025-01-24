#include <iostream>
using namespace std;

// Algoritmo para sumar los elementos de un arreglo
int sumArray(int arr[], int n)
{
    int sum = 0; // Inicialización: la suma comienza en 0

    for (int i = 0; i < n; i++) // Recorremos el arreglo
    {
        sum = sum + arr[i]; // Mantenimiento: sumamos el valor de arr[i] a la suma total
    }

    return sum; // Finalización: la suma total de los elementos del arreglo
}

// Ejemplo de uso de la función
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Mostrar la suma de los elementos del arreglo
    cout << "La suma de los elementos del arreglo es: " << sumArray(arr, n) << endl;

    return 0;
}

// Precondición:
// - El arreglo `arr[]` tiene n elementos.
// - El arreglo puede contener números enteros o flotantes.

// Invariante de bucle:
// - Al finalizar cada iteración del bucle, la variable `sum` contendrá la suma
// de todos los elementos arr[0..i-1] del arreglo.

// Inicialización:
// - Antes de comenzar el bucle, la suma se inicia en 0 (sum = 0).

// Invariante de bucle:
// - Al finalizar cada iteración del bucle, la variable `sum` contendrá la suma
// de todos los elementos arr[0..i-1] del arreglo.

// Mantenimiento:
// - En cada iteración del bucle, se va sumando el elemento arr[i] a la variable `sum`.

// Finalización:
// - Al finalizar el bucle, `sum` contendrá la suma de todos los elementos del arreglo.
// - La invariante es válida, ya que hemos sumado todos los elementos arr[0..n-1].