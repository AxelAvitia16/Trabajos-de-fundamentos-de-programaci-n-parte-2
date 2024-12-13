#include <iostream>//controlando el backspace
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
         cout << "Nombre (máximo 9 caracteres): ";
        int pos = 0;
        char c;
       	while (true) {
            c = getche(); // Leer carácter
            if (c == '\r') { // Enter, fin de la entrada
                break;
            }
            if (c == 8 && pos > 0) { // Backspace
                pos--; // Eliminar el último carácter
                cout << "\b \b"; // Mover el cursor atrás y borrar el carácter en pantalla
            } else if (pos < 9) { // Evitar desbordar el arreglo
                estudiantes[i].nombre[pos++] = c;
            } else {
                continue; // Si ya se alcanzó el límite, no capturar más caracteres
            }
        }
        estudiantes[i].nombre[pos] = '\0'; // Finalizar cadena con '\0'
        cout << endl;
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