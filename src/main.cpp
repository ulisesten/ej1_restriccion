#include <iostream>
#include "Restriccion.h"

//source

using std::cout;
using std::endl;

int main(){
    int m_infracciones[20] = { 908,321, 987, 321, 787, 234, 789, 987, 897, 123, 987, 342};
    int m_infraccionesR2[20] = {125, 476, 667, 321, 312, 789, 123, 123, 435, 456, 456, 678};
    
    Restriccion restriccion;
    restriccion.setInfracciones(m_infracciones);
    
    Restriccion m_r2;
    m_r2.setInfracciones(m_infraccionesR2);

    Restriccion m_ambas_r;
    m_ambas_r.setInfracciones(m_infracciones);

    float promedioInfracciones;

    promedioInfracciones = restriccion.promedio();

    bool teoria = restriccion.pruebaTeria(promedioInfracciones);

    bool ciudad = restriccion.comparaCiudad(&m_r2, m_infracciones);

    restriccion.estadoAmbasCiudades(&m_r2, &m_ambas_r);

    cout << "Promedio de infracciones: " << promedioInfracciones << endl;
    cout << "Teoria: " << teoria << endl;
    cout << "Ciudad: " << ciudad << endl;

    return 0;
}