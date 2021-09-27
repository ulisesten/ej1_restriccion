#ifndef _RESTRICCION_H_
#define _RESTRICCION_H_

class Restriccion {
   private:
       int infracciones[20];
       int arregloEstadoAmbasCiudad[20];
       int tamano;
       int cantidad;

    public:
       float promedio();
       bool  pruebaTeria(int promedioAnual);
       bool  comparaCiudad(Restriccion* r2, int* infraccionesR1);
       void  setInfracciones(int infracciones[]);
       int*  getInfracciones();
       void  setEstadoAmbasCiudades(int arrEstadoAmbasCiudades[]);
       void  estadoAmbasCiudades(Restriccion* r2, Restriccion* r3);
};

#endif