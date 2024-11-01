
#include <iostream>
#include <locale>
#include <codecvt>
#include "for_loop.h"  // Incluyo el encabezado para acceder a la función
#include "while_loop.h"
#include "do_while_loop.h"
#include "jump_instructions.h";

int main() {
    std::cout << "Imprimiendo números del 1 al 10:\n";
    imprimirNumerosFor();  // Llama a la función para ejecutar el bucle for

    int numero;
    std::cout << "Ingrese el numero para la multiplicación: ";
    std::cin >> numero;
    imprimirTablaMultiplicar(numero); // Llama a la función y pasa el número


    std::cout << "\nIngrese el numero para la multiplicación (bucle do-while): ";
    std::cin >> numero;

    imprimirTablaMultiplicarDoWhile(numero);


        sumarNumeros(); // Llamar a la función que suma números

    return 0;
}
