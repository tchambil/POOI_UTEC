//
// Created by laptop on 24/06/2018.
//

#include "Camion.h"
Camion::Camion(double _cantidad, double _consumo, double _capacidad):Vehiculo(_cantidad,_consumo+1.9,_capacidad) {

}
Camion::~Camion() {}

void Camion::Refuel(double _liters){
    double freeSpace = this->tanqCapacidad - this->fuelCantidad;
    if (_liters > freeSpace)
    {
        cout<<"Camion no se puede reabastecer el tanque, esta lleno"<<endl;
        return;
    }
    else{
        this->fuelCantidad += (_liters * 0.95);
        cout<<"La cantidad de combustible del camion es: "<<fuelCantidad<<endl;
    }
}
void Camion::Drive(double _km) {
    double fuelRequiere = _km*this->fuelConsumo;
    if(fuelCantidad-fuelRequiere<0){
        cout<<"Camion necesita reabastecimiento de combustible "<<endl;

    }
    else{
        this->fuelCantidad -=fuelRequiere;
        cout<<"Camion viajó " +to_string(_km)+" km"  <<endl;
    }
}