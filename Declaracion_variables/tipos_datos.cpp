#include <iostream>
#include <limits>
#include <iomanip> // Para std::setprecision
#include <locale>
#include <codecvt>

// Función que maneja varios tipos de datos
void pedirDatosTipos() { //Void para definir los datos en un lugar diferente del main sin devolver resultado directamente
    int sin_decimal; // Variable de tipo entero
    float pi_float = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620; // 32 bits = max 7 digitos | 1 bit para el signo, 8 bits para el exponente, y 23 bits para la mantisa
    double pi_double = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620; // 64 bits = max 16 digitos | 1 bit para el signo, 11 bits para el exponente, y 52 bits para la mantisa = 64 bits
    char un_caracter; // Variable de tipo carácter
    bool booleano = true; // Variable de tipo booleano

    std::cout << std::fixed; // Para mostrar números en notación fija
    std::cout << std::setprecision(20); // Configura la precisión a 10 dígitos después del punto decimal

    // Solicitar un número entero al usuario
    std::cout << "Ingresa un numero entero: ";
    std::cin >> sin_decimal;

    // Solicitar un carácter al usuario
    std::cout << "Ingresa la primera letra de tu nombre: ";
    std::cin >> un_caracter;

    // Mostrar los valores ingresados y sus tipos
    std::cout << "El número ingresado es: " << sin_decimal << "\n"; // Muestra el entero ingresado
    std::cout << "Tipo de 'sin_decimal': " << typeid(sin_decimal).name() << "\n"; // Muestra el tipo de 'sin_decimal'

    std::cout << "La letra ingresada es: " << un_caracter << "\n"; // Muestra el carácter ingresado
    std::cout << "Tipo de 'un_caracter': " << typeid(un_caracter).name() << "\n"; // Muestra el tipo de 'un_caracter'

    std::cout << "El valor de pi (float) es: " << pi_float << "\n"; // Muestra el valor de pi como float
    std::cout << "Tipo de 'pi_float': " << typeid(pi_float).name() << "\n"; // Muestra el tipo de 'pi_float'

    std::cout << "El valor de pi (double & + exacto) es: " << pi_double << "\n"; // Muestra el valor de pi como double
    std::cout << "Tipo de 'pi_double': " << typeid(pi_double).name() << "\n"; // Muestra el tipo de 'pi_double'

    std::cout << "El valor booleano es: " << (booleano ? "true" : "false") << "\n"; // Muestra el valor booleano
    std::cout << "Tipo de 'booleano': " << typeid(booleano).name() << "\n"; // Muestra el tipo de 'booleano'
}
