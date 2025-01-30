#include <iostream>
using namespace std;

// Algoritmo para sumar dos números binarios representados en arreglos
int *AddBinaryIntegers(int A[], int B[], int n)
{
    int carry = 0;  // Acarreo inicial, que empieza en 0
    int *C = new int[n + 1];  // Crear array para almacenar el resultado, con un tamaño extra por el posible acarreo final

    // La invariante de este loop es que en cada iteración, estamos sumando los bits correspondientes
    // de A y B, junto con el acarreo de la iteración anterior, y almacenando el resultado en C.
    // Después de la iteración, el acarreo es calculado para la siguiente suma de bits.
    for (int i = n - 1; i >= 0; i--)
    {
        int sum = A[i] + B[i] + carry; // Sumar los bits correspondientes de A y B y el acarreo anterior
        C[i + 1] = sum % 2; // El bit resultante de la suma se coloca en C, en la posición i+1 (debido al acarreo)
        carry = sum / 2;    // El acarreo para la siguiente iteración es la división entera de la suma por 2
    }

    C[0] = carry; // Al final, si hay un acarreo restante, se guarda en la primera posición de C

    return C; // Retornar el puntero al array resultante con la suma binaria
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
    for (int i = 0; i <= n; i++) // Imprimir el resultado binario
    {
        cout << C[i];
    }
    cout << endl;

    // Liberar la memoria dinámica
    delete[] C;

    return 0;
}
