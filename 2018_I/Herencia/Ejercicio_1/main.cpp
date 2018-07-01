#include <iostream>
#include "Coleccionista.h"
#include "Figurita.h"
#include <string>
#include <iomanip>

string validarFigurita(Figurita *figurita,int cod, int size){
    string value ="no";
    for (int j = 0; j < size; j++) {
       if (figurita[j].getCodigo()==cod){
           value= "si";
           break;
        }
        else{
           value=  "no";
        }
    }
    return  value;
}
void imprimirLista(Figurita *figurita, int size){
    cout<<"-----------------Lista Figuritas-----------------------------------"<<endl;
    cout<<"Nro"<<setw(10)<<"Codigo"<<setw(10)<<"Nombres"<<setw(10)<<"Pais"<<setw(10)<<"Repite"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    for (int j = 0; j < size; ++j) {
        cout<<j+1<<setw(10)<<figurita[j].getCodigo()<<setw(10)<<figurita[j].getNombres()<<setw(10)<<figurita[j].getPais()<<setw(10)<<figurita[j].getRepite()<<endl;
    }
    cout<<"-------------------------------------------------------------------"<<endl;
}
void imprimirRepetidos(Figurita *figurita, int size){
    cout<<"-----------------Lista Repetidos-----------------------------------"<<endl;
    cout<<"Nro"<<setw(10)<<"Codigo"<<setw(10)<<"Nombres"<<setw(10)<<"Pais"<<setw(10)<<"Repite"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    for (int j = 0; j < size; ++j) {
        if(figurita[j].getRepite()=="si"){
            cout<<j+1<<setw(10)<<figurita[j].getCodigo()<<setw(15)<<figurita[j].getNombres()<<setw(10)<<figurita[j].getPais()<<setw(10)<<figurita[j].getRepite()<<endl;
        }
    }
    cout<<"-------------------------------------------------------------------"<<endl;
}
int main() {

    string Nombres;
    string FNac;
    double Talla;
    int Peso;

    int s=2;
    int f=s*5;
    Figurita *figurita = new Figurita[f];

        for (int j = 0; j < f; ++j) {

            int _cod;
            Jugador jugador = Jugador();
            string nombres;
            string repite;
            string pais;
            cin>>_cod;
            cin>> nombres;
            cin>>pais;
            repite = validarFigurita(figurita,_cod,f);
            jugador.setNombres(nombres);
            figurita[j].setCodigo(_cod);
            figurita[j].setNombres(nombres);
            figurita[j].setPais(pais);
            figurita[j].setRepite(repite);
        }



    imprimirLista(figurita, f);
    imprimirRepetidos(figurita, f);

    delete [] figurita;
    return 0;
}