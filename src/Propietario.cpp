#include <iostream>
#include <iomanip>
#include "Propietario.h"

Propietario::Propietario()
{
    identificacion = 0;
    nombre = "";
    propiedad = NULL;
    cout << "Se ha creado un nuevo propietario." << std::endl;
}

void Propietario::mostrarDatos()
{ // Para mostrar los datos
    cout << "**********************\n";
    cout << "El nombre es: " << nombre << "\n";
    cout << std::setprecision(20) << "La identificacion es: " << identificacion << "\n";
    if (propiedad != NULL)
    {
        cout << "Detalle de la propiedad: " << "\n";
        propiedad->mostrarDatos();
    }
    cout << "**********************";
}

Propiedad *Propietario::getPropiedad() const
{
    return propiedad;
}

const long &Propietario::getIdentificacion() const
{
    return identificacion;
}

const string &Propietario::getNombre() const
{
    return nombre;
}

void Propietario::setIdentificacion(long identificacion)
{
    Propietario::identificacion = identificacion;
}

void Propietario::setNombre(const string &nombre)
{
    Propietario::nombre = nombre;
}

void Propietario::setPropiedad(Propiedad *propiedad)
{
    Propietario::propiedad = propiedad;
}

Propietario::~Propietario()
{
    delete propiedad;
}
