#include <iostream>
using namespace std;
//convierte de Centígrados a Fahrenheit
double ctof(double centi);
//convierte de Fahrenheit a Centígrados
double ftoc(double fahr);
int main()
{
    double temperatura;
    int opcion;
    cout<<"Ingrese una temperatura: ";
    cin>>temperatura;
    cout<<"Seleccione la opcion deseada: \n";
    cout<<"1. Centigrados a Fahrenheit\n";
    cout<<"2. Fahrenheit a Centigrados\n";
    cin>>opcion;
    switch(opcion)
    {
        case 1:
            cout<<temperatura<<" grados Centigrados son "<<ctof(temperatura)<<" grados Fahrenheit.\n";
            break;
        case 2:
            cout<<temperatura<<" grados Fahrenheit son " <<ftoc(temperatura) << " grados Centigrados.\n";
            break;
        default:
            cout<<"Opcion invalida.\n";
            break;
    }
    return 0;
}
double ctof(double centi)
{
    return (centi*9/5)+32;
}
double ftoc(double fahr)
{
    return (fahr-32)*5/9;
}