#include "Declara_funcion.h"

#include <algorithm>
#include <iostream>
#include <ostream>
#include <locale>
#include <codecvt>


void declara_funcion() {
int a,b,c;
    std::cout << "Ingresa el 1º número: \n";
    std::cin >> a;
    std::cout << "Ingresa el 2º número \n";
    std::cin >> b;
    c = a + b ;
    std::cout << "El resultado de la suma de " << a << " + " << b << " = " << c;


}
