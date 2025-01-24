#include <iostream>
using namespace std;

// Algoritmo de ordenamiento por inserción
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1; // j apunta al último elemento del subarreglo ordenado

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Desplaza arr[j] hacia la derecha
            j--;                 // Mueve j una posición hacia la izquierda
        }

        arr[j + 1] = key; // Insertamos el "key" en su posición correcta
    }
     // Precondición:
    // - El arreglo `arr[]` tiene n elementos.
    // - El arreglo no está necesariamente ordenado.

    // La invariante de bucle es que, en cada iteración del bucle exterior,
    // el subarreglo arr[0..i-1] está ordenado y contiene los primeros i elementos
    // que deberían estar en el arreglo final ordenado.

    // Inicialización:
    // - Antes de la primera iteración, el subarreglo arr[0..0] está "ordenado" por sí mismo,
    // ya que solo contiene un solo elemento.
    
    // Mantenimiento: El bucle interno asegura que el subarreglo arr[0..i-1] esté ordenado.
    // Compara el "key" con cada elemento anterior y lo desplaza hacia la derecha
    // si el elemento actual es mayor que el "key".
    // Después de que el bucle interno termina, colocamos "key" en la posición correcta
    // del subarreglo ordenado.

    // Finalización:
    // Al finalizar el bucle exterior, el arreglo está completamente ordenado.
    // La invariante de bucle sigue siendo válida para todo el arreglo arr[0..n-1],
    // ya que hemos recorrido todos los elementos y los hemos insertado correctamente.

    // Invariante final:
    //  ∀i (0 <= i < n-1), arr[i] <= arr[i+1] para todos los elementos i en arr[0..n-1].
}

// Ejemplo de uso de la función
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Mostrar el arreglo original
    cout << "Arreglo original: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Llamada a la función de ordenamiento
    insertionSort(arr, n);

    // Mostrar el arreglo ordenado
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
