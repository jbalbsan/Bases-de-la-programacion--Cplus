#include <iostream>
#include <string>
#include <typeinfo>
#include <locale>
#include <codecvt> //Manejar los caracteres con tildes | se debe insertar alli donde se encuentran tildes tambien

// Variables globales
int current_year = 2024; // Variable global que almacena el año actual
int mayoria_edad = 18;   // Variable global que define la mayoría de edad

// Prototipos de funciones
void mostrar_year_nacimiento(int edad);
void verificar_mayoria_edad(int edad);
void pedirDatosTipos(); // Maneja tipos de datos

int main() {
    // Definir variable nombre de tipo texto
    std::string nombre;
    // Definir variable n de tipo número (entero) para la edad
    int edad;

    // Muestra mensaje por pantalla pidiendo el nombre
    std::cout << "Por favor ingresa el Nombre: ";
    // Guardo lo que se escriba por el usuario en la variable nombre
    std::cin >> nombre;

    // Guardo lo que se escriba por el usuario en la variable edad
    std::cout << "Por favor ingresa tu edad en número: ";
    std::cin >> edad; //Variable local

    // Saludo al usuario
    std::cout << "Hola " << nombre << "! :) Tienes " << edad << " años. \n\n";

    // Llamadas a funciones para mostrar el año de nacimiento y verificar la mayoría de edad
    mostrar_year_nacimiento(edad);
    verificar_mayoria_edad(edad);

    // Llamada a la función que maneja tipos de datos
    pedirDatosTipos();

    return 0; // Fin del programa
}

