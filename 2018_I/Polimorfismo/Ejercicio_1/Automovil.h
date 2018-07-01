//
// Created by laptop on 24/06/2018.
//

#ifndef VEHICULOPOLIMORFISMO_AUTOMOVIL_H
#define VEHICULOPOLIMORFISMO_AUTOMOVIL_H

#include "Vehiculo.h"
class Automovil: public Vehiculo {
public:
    Automovil(double _cantidad, double _consumo, double _capacidad);

    ~Automovil();

    void Refuel(double _liters) override ;
    void Drive(double _km) override;
};




#endif //VEHICULOPOLIMORFISMO_AUTOMOVIL_H
