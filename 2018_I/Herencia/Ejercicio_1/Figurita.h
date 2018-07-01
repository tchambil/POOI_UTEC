//
// Created by laptop on 3/06/2018.
//

#ifndef FIFA_FIGURITA_H
#define FIFA_FIGURITA_H


#include "Jugador.h"

class Figurita: public Jugador {
private:
    int codigo;
    string repite;
public:
    Figurita();
    ~Figurita();
    void setCodigo(int _cod){
        this->codigo = _cod;
    }
    void setRepite(string _rep){
        this->repite = _rep;
    }
    string getRepite(){
        return this->repite;
    }
    int getCodigo(){
        return this->codigo;
    }

};


#endif //FIFA_FIGURITA_H
