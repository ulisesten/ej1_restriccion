#include "Restriccion.h"
#include <iostream>

float Restriccion::promedio() {

    /**Enero: 125
     * Febrero: 476
    */

    
    int i;
    int sumaTotalInfracciones = 0;

    for(i = 0; i < 12; i++){

        sumaTotalInfracciones += infracciones[i];

    }

    return sumaTotalInfracciones / 12;

}




bool Restriccion::pruebaTeria(int promedioAnual){

    bool res = false;
    int i;
    int sumaParInfracciones = 0;

    for(i = 0; i < 12; i++){

        if( (i + 1)%2 == 0 )
            sumaParInfracciones += infracciones[i];

    }

    sumaParInfracciones = sumaParInfracciones / 6;

    std::cout << "Promedio de infracciones en meses pares: " << sumaParInfracciones << std::endl;

    if(sumaParInfracciones > promedioAnual)
        res = true;

    return res;

}

bool  Restriccion::comparaCiudad(Restriccion* r2, int infraccionesR1[]){
    bool res = false;
    
    int* infraccionesR2 = r2->getInfracciones();
    int contadorComparacion = 0;

    for( int i = 0; i < 12; i++) {
        if( infraccionesR2[i] > infraccionesR1[i] ){
            contadorComparacion++;
        }

        std::cout <<  infraccionesR1[i] << " vs " << infraccionesR2[i] << std::endl;
    }

    if(contadorComparacion > 6)
        res=true;

    return res;

}

void  Restriccion::estadoAmbasCiudades(Restriccion* r2, Restriccion* r3){
    int max = 300;
    int control;
    int eac_arregloEstadoAmbasCiudad[12];

    int* infraccionesR2 = r2->getInfracciones();
    int* infraccionesR3 = r3->getInfracciones();

    for( int i = 0; i < 12; i++) {

        if(infraccionesR2[i] > max && infraccionesR3[i] > max)
             control = -1;

        else if(infraccionesR2[i] > max || infraccionesR3[i] > max)
            control = 1;

        else 
            control = 0;
        
        eac_arregloEstadoAmbasCiudad[i] = control;

        std::cout << eac_arregloEstadoAmbasCiudad[i] << std::endl;

    }

    r3->setEstadoAmbasCiudades(eac_arregloEstadoAmbasCiudad);
}

void Restriccion::setEstadoAmbasCiudades(int edo[20]) {
    for( int i = 0; i < 12; i++) {
        arregloEstadoAmbasCiudad[i] = edo[i];
    }
}

void Restriccion::setInfracciones(int infracciones[20]) {
    for( int i = 0; i < 12; i++) {
        this->infracciones[i] = infracciones[i];
    }
}

int* Restriccion::getInfracciones() {
    return this->infracciones;
}
