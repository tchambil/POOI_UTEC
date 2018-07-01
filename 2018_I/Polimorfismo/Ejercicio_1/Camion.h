//
// Created by laptop on 24/06/2018.
//

#ifndef VEHICULOPOLIMORFISMO_CAMION_H
#define VEHICULOPOLIMORFISMO_CAMION_H

#include "Vehiculo.h"
class Camion: public Vehiculo {
public:

    Camion(double _cantidad, double _consumo, double _capacidad);
    ~Camion();
    void Refuel(double _liters) override ;
    void Drive(double _km) override;
};


#endif //VEHICULOPOLIMORFISMO_CAMION_H
