//
// Created by laptop on 24/06/2018.
//

#ifndef VEHICULOPOLIMORFISMO_VEHICULO_H
#define VEHICULOPOLIMORFISMO_VEHICULO_H

#include <iostream>
using namespace std;
class Vehiculo {
protected:
    double fuelCantidad;
    double fuelConsumo;
    double tanqCapacidad;
public:
    Vehiculo(double _fuelcantidad, double _fuelconsumo, double _tanqcapacidad);
    ~Vehiculo();

    virtual void Refuel(double _liters);
    virtual void Drive(double _km);
};


#endif //VEHICULOPOLIMORFISMO_VEHICULO_H
