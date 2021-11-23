#include <cstring>
#include "Pizzeria.h"


Pizzeria::Pizzeria()
{
    //ctor
}



int Pizzeria::getCapacidad(){
    return _capacidad;
}

int Pizzeria::getOcupacion(){
    return _ocupacion;
}

float Pizzeria::getPrecioTotal(){
    return _precioTotal;
}

char *Pizzeria::getMedioDePago(){
    return _medioDePago;
}

void Pizzeria::setCapacidad(int Capacidad){
    _capacidad = Capacidad;
}

void Pizzeria::setOcupacion(int Ocupacion){
    _ocupacion = Ocupacion;
}

void Pizzeria::setPrecioTotal(float PrecioTotal){
    _precioTotal = PrecioTotal;
}

void Pizzeria::setMedioDePago(char *MedioDePago){
    strcpy(_medioDePago,MedioDePago);
}

Pizzeria::~Pizzeria()
{
    //dtor
}
