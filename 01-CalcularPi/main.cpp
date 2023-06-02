#include <iostream>
#include <iomanip>

using namespace std;


double Calculopi(){

    double numerador {4};
    double pi {0};
    int serie{1};
    double diferencia {1};
    double decimales {0.0000001};
    double valor {3.141592};

    for (int i=1; diferencia>=decimales;i+=2) {
        pi+=serie *(numerador/i);
        serie=-serie;
        diferencia= pi-valor;
        diferencia= (diferencia <0.0) ? -diferencia : diferencia;
        
    }
    return pi;
}

int main(){
    
    double pi=Calculopi();
    cout<<"El valor de pi es: "<<setprecision(6)<<fixed<<pi<<endl;
    return 0;

}