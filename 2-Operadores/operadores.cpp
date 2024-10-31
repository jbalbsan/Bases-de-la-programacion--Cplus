// operadores.cpp
#include <iostream>
#include "operadores.h"
#include <locale>
#include <codecvt>

void demostrarOperadoresAritmeticos() {
    int a , b;
    std::cout << "Porfavor introduce el 1º numero entero: ";
    std::cin >> a;
    std::cout << "Porfavor introduce el 2º nº entero" ": ";
    std::cin >> b;


    std::cout << "Operadores Aritméticos:\n";
    std::cout << "a + b = " << a + b << "\n";
    std::cout << "a - b = " << a - b << "\n";
    std::cout << "a * b = " << a * b << "\n";

    // Se convierte uno de los valores a float para que la división sea de punto flotante y se convierte el 2º valor
    std::cout << "a / b  = " << static_cast<float>(a) / b << std::endl;

    std::cout << "a % b (resto) = " << a % b << "\n";
}

void demostrarOperadoresComparacion() {
    int a, b;
    std::cout << "\nOperadores de Comparación:\n";
    std::cout << "a == b: " << (a == b) << "\n";
    std::cout << "a != b: " << (a != b) << "\n";
    std::cout << "a < b: " << (a < b) << "\n";
    std::cout << "a > b: " << (a > b) << "\n";
    std::cout << "a <= b: " << (a <= b) << "\n";
    std::cout << "a >= b: " << (a >= b) << "\n";
}

void demostrarOperadoresLogicos() {
    bool x = true, y = false;
    std::cout << "\nOperadores Lógicos:\n";
    std::cout << "(Iguales) x && y : " << (x && y) << "\n"; // ¿Iguales?
    std::cout << "(¿Alguno verdadero?) x || y:  " << (x || y) << "\n"; // ¿Alguno es verdadero?
    std::cout << "(Invierte el valor de x=true(1) !x  : " << (!x) << "\n"; // Invierte el valor de la variable
}