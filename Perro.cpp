#include "Perro.h"
#include <iostream>


// Ejemplo de constructor por defecto con lista inicializadora
//Perro::Perro() : edad(7), raza("schnauzer"), tamanio("mediano"), color("gris") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
Perro::Perro() {
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
}
Perro::Perro(std::string nombre, int edad,std::string raza,std:: string color,std::string tamanio){
    this->nombre=nombre;
    this->edad=edad;
    this->raza=raza;
    this->color=color;
    this->tamanio=tamanio;
}
void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad);
}
void Perro::agregarVeterinario(std::string name, int aniosExperiencia){
    this-> pVeterinario = new Veterinario(name,edad);
}
/*
void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
void Perro::setVeterinario(Veterinario *pVeterinario) {
    this->pVeterinario = pVeterinario;
}*/
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}
Veterinario* Perro::getVeterinario(){
    return this->pVeterinario;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}




