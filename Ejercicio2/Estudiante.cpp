#include "Estudiante.h"
#include <iostream>


Estudiante::Estudiante(const std::string &nombre, int edad, const std::string &genero, const std::string &grado)
    : Persona() {  // Llamar al constructor de Persona
    setNombre(nombre);  // Establecer el nombre
    setEdad(edad);      // Establecer la edad
    setGenero(genero);  // Establecer el género
    this->grado = grado; // Establecer el grado
}


void Estudiante::setGrado(const std::string &grado) {
    this->grado = grado;
}

std::string Estudiante::getGrado() {
    return grado;
}

void Estudiante::mostrarDetalles() {
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Edad: " << getEdad() << std::endl;
    std::cout << "Genero: " << getGenero() << std::endl;
    std::cout << "Grado: " << grado << std::endl;
}