//
// Created by sergio on 11/02/24.
//
#include "Veterinario.h"
Veterinario::Veterinario() {
    this->nombre="";
    this->aniosExperiencia=0;
};
Veterinario::Veterinario(std::string nombre,int aniosExperiencia){
    this->nombre=nombre;
    this->aniosExperiencia=aniosExperiencia;
};

void Veterinario::setNombre(std::string nombre){
    this->nombre=nombre;
}
void Veterinario::setAniosExperiencia(int aniosExperiencia){
    this->aniosExperiencia= aniosExperiencia;
}
std::string Veterinario::getNombre(){
    return nombre;
}
int Veterinario::getAniosExperiencia() {
    return aniosExperiencia;
}
