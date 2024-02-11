#include <iostream>
#include "Perro.h"
#include "Propietario.h"

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;
    Perro *tobby = new Perro("Tobby",7,"schnauzer","Negro","grande");
    tobby->ladrar();
    Propietario *sergio = new Propietario(18);
    sergio->setDocIdentidad("1105366347");
    sergio->setNombre("Sergio");
    sergio->mostrarInfo();
    tobby->agregarPropietario("sergioo","1105366347");
    tobby->getPropietario()->setEdad(18);
    std::cout<<"El nombre del propietario de "<<tobby->getNombre()<<" es "<< tobby->getPropietario()->getNombre()<<std::endl;
    std::cout<<tobby->getPropietario()->getEdad()<<std::endl;
    tobby->agregarVeterinario("sergiopon",18);
    std::cout<<"El nombre del veterinario es "<<tobby->getVeterinario()->getNombre()<<std::endl;
    return 0;
}
