#include <iostream>
#include <string>
#include <typeinfo>

    int current_year = 2024; // Variable global
    int mayoria_edad = 18;  // Variable global para mayoría de edad

    void mostrar_year_nacimiento(int edad)
    // Variable local por que solo es accesible desde donde se ya se ha definido edad
    {
    int year_nacimiento = current_year - edad; //Calculo año nacimeiento
    std::cout << "Naciste el año: " << year_nacimiento;
    }

    void verificar_mayoria_edad(int edad)
    {
        if (edad >= mayoria_edad){
            std::cout << "Eres mayor de edad. \n ";
        } else
        {
            std::cout << " Eres menor de edad. \n ";
        }
    }
int main()
{

    //Definir variable nombre de tipo texto
    std::string nombre;
    //Definir variable n de tipo numero (entero) para la edad
    int edad;

    //Muestra mensaje por pantalla
    std::cout << "Porfavor ingresa el Nombre:";
    // Guardo lo que se escriba por el usuario en la variable nombre
    std::cin >> nombre;
    // Guardo lo que se escriba por el usuario en la variable edad
    std::cout << "Porfavor ingresa tu edad en numero: ";
    std::cin >> edad;

        // Esta línea generaría un error al llamar a la variable local
        //   std::cout << "El año local es: " << year_nacimiento << "\n";


    std::cout << "Hola  " << nombre << "! :) Tienes " << edad << " años. \n\n";
        mostrar_year_nacimiento(edad);
        verificar_mayoria_edad(edad);

        //Mostrar tipos de variables
                std::cout << "Para este ejercicio se han usado los tipos de datos:  ";
                std::cout << "Tipo de 'entero': " << typeid(current_year).name() << "\n";


    return 0;

}
