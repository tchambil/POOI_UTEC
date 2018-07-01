//
// Created by laptop on 24/06/2018.
//

#include "Vehiculo.h"
Vehiculo::Vehiculo(double _fuelcantidad, double _fuelconsumo, double _tanqcapacidad) {
    this->fuelCantidad = _fuelcantidad;
    this->fuelConsumo = _fuelconsumo;
    this->tanqCapacidad = _tanqcapacidad;
}
Vehiculo::~Vehiculo() {}
void Vehiculo::Drive(double _km) {
    double fuelRequiere = _km*this->fuelConsumo;
    if(fuelCantidad-fuelRequiere<0){
        cout<<"Vehiculo necesita reabastecimiento de combustible "<<endl;
        return;
    }
    else{
        this->fuelCantidad -=fuelRequiere;
        cout<<"Vehiculo viajó " +to_string(_km)+" km"  <<endl;
    }
}
void Vehiculo::Refuel(double _liters) {

}