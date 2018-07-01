//
// Created by laptop on 3/06/2018.
//

#ifndef FIFA_PERSONA_H
#define FIFA_PERSONA_H

#include <iostream>
using  namespace std;
class Persona {
protected:
    string Nombres;
    string FNac;
    double Talla;
    int Peso;
public:
    Persona();
    ~Persona();
    void setNombres(string _nom){
        this->Nombres = _nom;
    }
    void setFNac(string _nac){
        this->FNac = _nac;
    }
    void setTalla(double _talla){
        this->Talla = _talla;
    }
    void setPeso(int _peso){
        this->Peso = _peso;
    }
    string getNombres(){
        return  Nombres;
    }
    string  getFNac(){
        return  FNac;
    }
    double  getTalla(){
        return  Talla;
    }
    int getPeso(){
        return Peso;
    }

};


#endif //FIFA_PERSONA_H
