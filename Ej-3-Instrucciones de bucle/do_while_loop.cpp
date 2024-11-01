#include <iostream>
#include "do_while_loop.h"
#include <locale>
#include <codecvt>

void imprimirTablaMultiplicarDoWhile(int numero) {
    int contador = 1; // Aun que haya otro contador pueden repetirse ya que son variables locales

    // Bucle do-while para imprimir la tabla de multiplicar del número
    do
    {
        std::cout << numero << " x " << contador << " = " << (numero * contador) << "\n" ;
        contador++; // Incrementa el contador en cada iteración
        } while (contador <= 10); // Condición para que se ejecute hasta el 10
    }