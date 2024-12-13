#include <iostream>//captura con ciclo getche sin backspace
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	struct Estudiante {
    	char nombre[10];
    	int edad;
    	int calificaciones[3]; //Array p/calificaciones 3 materias
	};
	const int NUM_ESTUDIANTES = 3; //Número de estudiantes a almacenar
    Estudiante estudiantes[NUM_ESTUDIANTES]; //Arreglo de estructuras Estudiante
    // Ingreso de datos para cada estudiante
    for (int i=0; i<NUM_ESTUDIANTES;i++) {
        cout<<"\nIngresa los datos del estudiante #"<<i+1<<":\n";        
        cout << "Nombre: ";
        int j=0;
        char c;
        for (j=0;j<sizeof(estudiantes[i].nombre)-1;j++) {
            c=getche(); // Lee carácter por carácter y lo imprime
            if (c=='\r') { // Si es Enter (carácter de retorno de carro)
                break;
            }
            estudiantes[i].nombre[j]=c; // Agrega el carácter al arreglo
        }
        estudiantes[i].nombre[j] = '\0'; // Termina la cadena con '\0'
        cout << "\n";
        cout<<"Edad: ";
        cin>>estudiantes[i].edad;
        //Ingresamos las calificaciones
        cout<<"Ingresa las calificaciones de 3 materias:\n";
        for (int j=0;j<3; j++) {
            cout<<"Calificación #"<<j+1<<": ";
            cin>>estudiantes[i].calificaciones[j];
        }
    }
    //Mostramos la información de todos los estudiantes
    cout<<"\nInformación de los estudiantes:\n";
    for (int i=0;i<NUM_ESTUDIANTES;i++){
        cout<<"\nEstudiante #"<<i+1<<":\n";
        cout<<"Nombre: "<<estudiantes[i].nombre<<"\n";
        cout<<"Edad: "<<estudiantes[i].edad<<"\n";   
        cout << "Calificaciones: ";
        for (int j=0;j<3;j++){
            cout<<estudiantes[i].calificaciones[j]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}