//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"

class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;
    Raza* pRaza;


public:
    Perro();
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();
    Perro(std::string nombre, int edad,std::string raza,std:: string color,std::string tamanio);
    // Sirve para asociarle un propietario un objeto
    void agregarPropietario(std::string nombre, std::string docIdentidad);
    Veterinario*  getVeterinario();
    void agregarVeterinario(std::string nombre, int aniosExperiencia);
    void agregarRaza(std::string nombre, std::string paisOrigen);
    // Sirve para relacionar dos clases cuando ya se tiene un objeto
   /* void setPropietario(Propietario * pPropietario);
    void setVeterinario(Veterinario* pVeterinario);
*/
   Raza* getRazaa();


    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
    void mostrarInfo();
};
#endif
