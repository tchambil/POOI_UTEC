#include <iomanip>
#include "Estudiante.h"
int CalcularPromedioFinal(int n) {
    int x=0;
    x = (3 - (n % 3));
    if(n > 10 && (x)%2!=0)
        return n + x;
    return n;
}
double  calcularEximidos(Estudiante estudiante){
        double nota=0;
        float prom =0;
        if(estudiante.getSp1()>10&& estudiante.getSp2()>10 &&estudiante.getSp3()>10) {
            prom = estudiante.getSp1() + estudiante.getSp2() + estudiante.getSp3();
            if (int(prom / 3) >= 14) {
                nota = int(prom/3);
            }
        }
    return nota;
}
void imprimirLista( Estudiante *estudiante, int size){
    cout<<"-----------------Lista Estudiantes-----------------------------------"<<endl;
    cout<<"Codigo"<<setw(18)<<"Nombres"<<setw(15)<<"SP1"<<setw(4)<<"SP2"<<setw(4)<<"SP3"<<setw(4)<<"SP4"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    for (int j = 0; j < size; ++j) {
        cout<<estudiante[j].getCodigo()<<setw(18)<<estudiante[j].getNombres()<<setw(15);
        cout<<estudiante[j].getSp1()<<setw(3)<<estudiante[j].getSp2()<<setw(3)<<estudiante[j].getSp3()<<setw(3)<<estudiante[j].getSp4()<<setw(3)<<endl;
}
    cout<<"-------------------------------------------------------------------"<<endl;
}
int main() {
    int cant = 6;
    Estudiante *estudiante = new Estudiante[cant];
    for (int i = 0; i <cant ; ++i) {
        int codigo;
        string nombres;
        string apellidos;
        double sp1=0, sp2=0, sp3=0, sp4=0;
        cin>>codigo;
        cin>>apellidos;
        cin>>nombres;
        cin >> sp1 >> sp2 >> sp3 >> sp4;
        estudiante[i].setCodigo(codigo);
        estudiante[i].setNombres(nombres);
        estudiante[i].setApellidos(apellidos);
        estudiante[i].setSP(sp1,sp2,sp3);
        sp4 = calcularEximidos(estudiante[i]);
        estudiante[i].setSP4(CalcularPromedioFinal(sp4));
        cout<<"sp4"<<sp4<<endl;
        cout<<CalcularPromedioFinal(sp4)<<endl;
    }
    imprimirLista(estudiante,cant);
    return 0;
}