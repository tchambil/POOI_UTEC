//
// Created by laptop on 10/06/2018.
//

#include "Estudiante.h"
Estudiante::~Estudiante() {};
Estudiante::Estudiante() {
    this->sp1 = 0;
    this->sp2 = 0;
    this->sp3 = 0;
    this->sp4 = 0;
};
void Estudiante::setCodigo(int _codigo) {
    this->codigo = _codigo;
}

void Estudiante::setSP(double _sp1, double _sp2, double _sp3) {
    this->sp1=_sp1;
    this->sp2=_sp2;
    this->sp3=_sp3;
};
void Estudiante::setSP4(double _sp4) {
    this->sp4=_sp4;
};
int Estudiante::getCodigo()  {
    return codigo;
}

double Estudiante::getSp1()  {
    return sp1;
}
double Estudiante::getSp2()  {
    return sp2;
}
double Estudiante::getSp3()  {
    return sp3;
}
double Estudiante::getSp4()  {
    return sp4;
}
string Estudiante::getNombres(){
    return  Nombres;
}
string Estudiante::getApellidos(){
    return Apellidos;
}
