//
// Created by sergio on 11/02/24.
//

#ifndef INC_3_CREAROBJASOCIACION_RAZA_H
#define INC_3_CREAROBJASOCIACION_RAZA_H

#include <string>
#include <iostream>

class Raza {
private:
    std::string nombre;
    std::string paisOrigen;
public:
    Raza();
    Raza(std::string nombre,std::string paisOrigen);

    std::string getNombre();
    std::string getPaisOrigen();
    void setNombre(std::string nombre);
    void setPaisOrigen(std::string paisOrigen);
};


#endif //INC_3_CREAROBJASOCIACION_RAZA_H
