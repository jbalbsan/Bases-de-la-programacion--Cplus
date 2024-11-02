#include <iostream>
#include "arrays.h"

void imprimirArray() {
    const int SIZE = 10; // Tamaño del array
    int numeros[SIZE];   // Declaración del array de enteros

    // Llenar el array con los primeros 10 números naturales
    for (int i = 0; i < SIZE; ++i) {
        numeros[i] = i; // Asignar el valor del índice a la posición correspondiente
    }

    // Imprimir los elementos del array
    std::cout << "Elementos del array: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numeros[i] << " "; // Imprimir cada elemento
    }
    std::cout << std::endl;


    // Imprimir las posiciones 0 y 3 del array
    std::cout << "Elementos en las posiciones 3 y 5 del array: \n";
    std::cout << "Posición 0: " << numeros[0] << "\n"; // Imprimir el elemento en la posición 0
    std::cout << "Posición 3: " << numeros[3] << std::endl; // Imprimir el elemento en la posición 3
}


