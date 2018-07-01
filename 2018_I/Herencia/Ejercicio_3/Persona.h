//
// Created by laptop on 10/06/2018.
//

#ifndef POO_PERSONA_H
#define POO_PERSONA_H
#include <iostream>
using  namespace std;

class Persona {
protected:
    string Nombres;
    string Apellidos;
public:
    Persona();
    ~Persona();
    void setNombres( string _nombres){
        this->Nombres = _nombres;
    }
    void setApellidos(string _apellidos){
        this->Apellidos =_apellidos;
    }
    string getNombres(){
        return  this->Nombres;
    }
    string getApellidos(){
        return this->Apellidos;
    }
};


#endif //POO_PERSONA_H
