//
// Created by sergio on 11/02/24.
//

#ifndef INC_3_CREAROBJASOCIACION_VETERINARIO_H
#define INC_3_CREAROBJASOCIACION_VETERINARIO_H
#include <iostream>
#include <string>

class Veterinario {
private:
    std:: string nombre;
    int aniosExperiencia;
public:
    Veterinario();
    Veterinario(std::string nombre,int aniosExperiencia);
    void setNombre(std::string nombre);
    void setAniosExperiencia(int aniosExperiencia);
    std::string getNombre();
    int getAniosExperiencia();

};


#endif //INC_3_CREAROBJASOCIACION_VETERINARIO_H
