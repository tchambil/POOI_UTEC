//
// Created by laptop on 24/06/2018.
//

#include "Automovil.h"
Automovil::Automovil(double _cantidad, double _consumo, double _capacidad):Vehiculo(_cantidad,_consumo+0.9,_capacidad) {

}
Automovil::~Automovil() {}

void Automovil::Refuel(double _liters) {
    double freeSpace = this->tanqCapacidad - this->fuelCantidad;
    if (_liters > freeSpace)
    {
        cout<<"Automovil no se puede reabastecer el tanque, esta lleno"<<endl;
        return;
    }
    else{
        fuelCantidad += _liters;
        cout<<"La cantidad de combustible del vehiculo es: "<<fuelCantidad<<endl;
    }
}
void Automovil::Drive(double _km) {
    double fuelRequiere = _km*this->fuelConsumo;
    if(fuelCantidad-fuelRequiere<0){
        cout<<"Automovil necesita reabastecimiento de combustible "<<endl;
    }
    else{
        this->fuelCantidad -=fuelRequiere;
        cout<<"Automovil viajó " +to_string(_km)+" km"  <<endl;
    }
}
