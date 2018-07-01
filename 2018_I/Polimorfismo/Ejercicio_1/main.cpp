#include <iostream>
#include "Vehiculo.h"
#include "Automovil.h"
#include "Camion.h"
#include <string>
int main() {
    string tipovehiculo;
    string comando;
    double fuelCantidad;
    double fuelConsumo;
    double tanqCapacidad=100;
    int cantcomands;
    int Distancia ;
    double Combustible;
    Vehiculo *vehiculo[2];
    cout<<"Ingrese el tipo de vehiculo(Autmovil/Camion)"<<endl;
    getline (cin,tipovehiculo);
    cout<<"Ingrese cantidad de combustible"<<endl;
    cin>>fuelCantidad;
    cout<<"Ingrese consumo combustible(L/Km)"<<endl;
    cin>>fuelConsumo;
    if(tipovehiculo=="Automovil"){
        vehiculo[0] = new Automovil(fuelCantidad,fuelConsumo,tanqCapacidad);
        cout<<"Ingrese distancia a conducir"<<endl;
        cin>>Distancia;
        vehiculo[0]->Drive(Distancia);
        cout<<"Ingrese cantidad de combustible a reabastecer"<<endl;
        cin>>Combustible;
        vehiculo[0]->Refuel(Combustible);
    } else if(tipovehiculo=="Camion"){
        vehiculo[1] = new Camion(fuelCantidad,fuelConsumo,tanqCapacidad);
            cout<<"Ingrese distancia a conducir"<<endl;
            cin>>Distancia;
            vehiculo[1]->Drive(Distancia);
            cout<<"Ingrese cantidad de combustible recargar"<<endl;
            cin>>Combustible;
            vehiculo[1]->Refuel(Combustible);
        }

}