//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros

Propietario::Propietario(int edad){
    this->edad=edad;
}

Propietario::Propietario(std::string nombre, std::string docIdentidad) {
    this->nombre = nombre;
    this->docIdentidad = docIdentidad;
}

void Propietario::setEdad(int edad) {
    this->edad=edad;
}
void Propietario::setDocIdentidad(std::string docIdentidad) {
    this->docIdentidad=docIdentidad;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}






std::string Propietario::getNombre()  {
    return nombre;
}
int Propietario::getEdad() {
    return edad;
}
std::string Propietario::getDocIdentidad() {
    return docIdentidad;
}

void Propietario::mostrarInfo() {
    std::cout<<"El nombre del propietario es "<<nombre<<", el documento de identidad es "<<docIdentidad<<" y la edad es "<<edad<<std::endl;
}
