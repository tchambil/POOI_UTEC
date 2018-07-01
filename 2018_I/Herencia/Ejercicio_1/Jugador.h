//
// Created by laptop on 3/06/2018.
//

#ifndef FIFA_JUGADOR_H
#define FIFA_JUGADOR_H


#include "Persona.h"

class Jugador : public Persona{
protected:
    string Pais;
    string Equipo;
public:
    Jugador();
    ~Jugador();
    void setPais(string _pais){
        this->Pais = _pais;
    }
    void setEquipo(string _equipo){
        this->Equipo;
    }
    string getPais(){
        return  Pais;
    }
    string getEquipo(){
        return  Equipo;
    }
};


#endif //FIFA_JUGADOR_H
