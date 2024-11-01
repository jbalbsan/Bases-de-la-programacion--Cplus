#include <iostream>
#include "while_loop.h"
#include <locale>
#include <codecvt>


void imprimirTablaMultiplicar(int numero) { // Usamos el número pasado como parámetro
    int contador = 1;

    while (contador <= 10) {
        std::cout << numero << " x " << contador << " = " << (numero * contador) << "\n"; // Imprimir la tabla
        contador++; // Incrementar el contador +1 por cada uso
    }
}


