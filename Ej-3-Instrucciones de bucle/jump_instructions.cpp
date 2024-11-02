#include <locale>
#include <codecvt>
#include <iostream>
#include "jump_instructions.h"


void sumarNumeros()
{
    float numero;
    float sumaTotal = 0;
    std::cout << "Introduce números a sumar (0 para salir):\n";

    // Bucle que continuará hasta que se introduzca 0
    while (true)
    {
        std::cout << "Número: ";
        std::cin >> numero;

        if (numero == 0)
        {
            std::cout << "La suma total ha sido " << sumaTotal << std::endl;
        break;

        }
        sumaTotal += numero;

        std::cout << "La suma total es: " << sumaTotal << std::endl;

    }

}
