#include <iostream>
using namespace std; //Función que realiza la suma de dos números
int sumar(int a, int b);
int main()
{
    int num1, num2;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    int resultado=sumar(num1, num2);
    cout<<"El resultado de la suma es: "<<resultado<<'\n';
    cout<<"El resultado es: "<<sumar(num1,num2);
    cout<<"num1 despues de la funcion: "<<num1;
    cout<<"\nnum2 despues de la funcion: "<<num2;
    
    return 0;
}
int sumar(int a, int b)
{
	a=0;
	b=-1000;
    return a+b;
}