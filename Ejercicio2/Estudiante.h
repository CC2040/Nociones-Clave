#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
#include "Persona.h"

class Estudiante : public Persona {
    std::string grado;

public:
    Estudiante(const std::string &nombre, int edad, const std::string &genero, const std::string &grado); //Constructor para estudiante
    void setGrado(const std::string &grado);
    std::string getGrado();
    void mostrarDetalles();
};

#endif //ESTUDIANTE_H
