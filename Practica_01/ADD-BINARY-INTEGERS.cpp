#include <iostream>
using namespace std;

// Algoritmo para sumar dos números binarios representados en arreglos
int *AddBinaryIntegers(int A[], int B[], int n)
{
    int carry = 0;
    int *C = new int[n + 1]; // Crear array de tamaño (n+1) para el posible acarreo

    for (int i = n - 1; i >= 0; i--)
    {
        int sum = A[i] + B[i] + carry;
        C[i + 1] = sum % 2; // Guardar el bit resultante
        carry = sum / 2;    // Guardar el acarreo
    }

    // Guardar el acarreo en la primera posición
    C[0] = carry;

    return C; // Retornar el puntero al array resultante
}

int main()
{
    int A[] = {1, 1, 0, 1, 1}; // 11011 (27 en decimal)
    int B[] = {1, 0, 1, 1, 0}; // 10110 (22 en decimal)

    int n = sizeof(A) / sizeof(A[0]); // Calcular el tamaño correcto del array

    // Llamar a la función
    int *C = AddBinaryIntegers(A, B, n);

    // Mostrar el resultado en consola
    cout << "Suma binaria: ";
    for (int i = 0; i <= n; i++)
    {
        cout << C[i];
    }
    cout << endl;
    cout << endl;

    // Liberar la memoria dinámica
    delete[] C;

    return 0;
}
