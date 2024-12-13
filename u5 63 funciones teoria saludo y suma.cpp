#include <iostream>
using namespace std;
void limpia(void){
	system("CLS");
}
void saludo(void){
	cout<<"Buen dia\n";
}
int suma(int x, int y){
	return(x+y);
}
int main()
{
	int cant1,cant2,cant3;
	limpia();
	saludo();
	cout<<"Dame un numero: ";
	cin>>cant1;
	cout<<"Dame otro numero: ";
	cin>>cant2;
	cant3=suma(cant1,cant2);
	cout<<"El total es: "<<cant3<<'\n';
	cout<<"La suma de 1000+2000="<<suma(1000,2000);
	return 0;
}