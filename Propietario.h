//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
#include <iostream>

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(int edad);
    Propietario(std::string nombre, std::string docIdentidad);
    void setEdad(int edad);
    void setDocIdentidad(std::string docIdentidad);
    void mostrarInfo();
    void setNombre(std::string nombre);


    std::string getNombre();
    int getEdad();
    std::string getDocIdentidad();


};


#endif //PROPIETARIO_H
