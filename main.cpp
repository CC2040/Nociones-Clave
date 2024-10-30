#include <iostream>
#include "Ejercicio1/Princ_caract.h"
#include "Ejercicio2/Estudiante.h"
#include "Ejercicio4/Funciones.h"
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))



int g=20;

int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma1(5, 3) << std::endl;

    std::cout << "Valor de g antes de la funcion suma: " << g << std::endl;
    std::cout << "La suma es: " << suma1(5, g) << std::endl;
    std::cout << "Valor de g despues de la funcion suma: " << g << std::endl;

    //Parte 2
    Estudiante estudiante1("Carlos",15,"M","Tercero");
    estudiante1.mostrarDetalles();
    //Parte 4
    std::cout<<suma(5,5);
    std::cout<<resta(5,12);

    return 0;
}