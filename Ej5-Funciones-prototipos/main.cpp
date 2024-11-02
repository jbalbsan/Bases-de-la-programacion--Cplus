#include <iostream>
#include "Declara_funcion.h"
#include <locale>
#include <codecvt>



int main() {
    int a, b;
    std::cout << "Introduce el 1º número: ";
    std::cin >> a;
    std::cout << "Introduce el 2º número: ";
    std::cin >> b;
    // No necesito crear una nueva variable para expresar el resultado
    std::cout << "El resultado de la suma de " << a << " + " << b << " = " << suma(a, b) << std::endl;

    return 0;
}
