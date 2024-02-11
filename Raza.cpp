// Created by sergio on 11/02/24.

#include "Raza.h"

Raza::Raza() {
    this->nombre="";
    this->paisOrigen="";
}
Raza::Raza(std::string nombre,std::string paisOrigen){
    this->nombre=nombre;
    this->paisOrigen=paisOrigen;
}

std::string Raza::getNombre() {
    return nombre;
}

std::string Raza::getPaisOrigen() {
    return paisOrigen;
}

void Raza::setPaisOrigen(std::string paisOrigen) {
    this->paisOrigen=paisOrigen;
}


void Raza::setNombre(std::string nombre) {
    this->nombre=nombre;
}
