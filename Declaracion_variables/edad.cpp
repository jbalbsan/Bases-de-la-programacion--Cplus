#include <iostream>
#include <locale>
#include <codecvt>

// Variables globales
extern int current_year; // La variable existe pero en otro archivo
extern int mayoria_edad; //

// Función que calcula y muestra el año de nacimiento
void mostrar_year_nacimiento(int edad) {
    // Variable local porque solo es accesible desde donde se ha definido la edad
    int year_nacimiento = current_year - edad; // Cálculo del año de nacimiento
    std::cout << "Naciste el año: " << year_nacimiento << "\n"; // Muestra el año de nacimiento
}

// Función que verifica y muestra si el usuario es mayor o menor de edad
void verificar_mayoria_edad(int edad) {
    if (edad >= mayoria_edad) {
        std::cout << "Eres mayor de edad. \n"; // Mensaje si es mayor de edad
    } else {
        std::cout << "Eres menor de edad. \n"; // Mensaje si es menor de edad
    }
}
