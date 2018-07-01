//
// Created by laptop on 10/06/2018.
//

#ifndef POO_ESTUDIANTE_H
#define POO_ESTUDIANTE_H


#include "Persona.h"

class Estudiante: public Persona {
private:
    int codigo;
    double sp1;
    double sp2;
    double sp3;
    double sp4;
public:
    Estudiante();
    ~Estudiante();
    void setCodigo(int _codigo);
    void setSP(double _sp1, double _sp2, double _sp3);
    void setSP4( double _sp4);
    int getCodigo() ;
    double getSp1() ;
    double getSp2() ;
    double getSp3() ;
    double getSp4() ;
    string getNombres();
    string getApellidos();
};


#endif //POO_ESTUDIANTE_H
