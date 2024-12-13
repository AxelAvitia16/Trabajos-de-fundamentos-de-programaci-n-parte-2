#include <iostream>
#include <windows.h>
using namespace std;
void marco(char c,int c1,int r1,int c2,int r2);
void gotoxy(int x, int y);
int y=123;/*var global*/
int x=1000;
main(void)
{
	int x=0;/*var local a main*/
	int r1,r2,c1,c2;
	char c;
	//marco('%',1,1,150,25);
	marco('%',1,1,79,19);
	gotoxy(12,10);
	cout<<"El valor de x en main es: "<<x;
	gotoxy(12,12);
	cout<<"El valor de x en la funcion es: "<<x;
	gotoxy(12,13);
	cout<<"el valor de y en la funcion es: "<<y;/*var global*/
	marco('@',10,3,60,16);
	gotoxy(3,17);
	system("PAUSE");
	system("CLS");
	printf("Captura de parametros\n");
	printf("Con cual caracter quieres que se imprima el marco? ");
	cin>>c;
	cout<< "Dame la Columna 1: ";
	cin>>c1;
	cout<< "Dame el Renglon 1: ";
	cin>>r1;
	cout<< "Dame la Columna 2: ";
	cin>>c2;
	cout<< "Dame el Renglon 2: ";
	cin>>r2;
	marco(c,c1,r1,c2,r2);
	gotoxy(1,26);
}
void marco(char c,int c1,int r1,int c2,int r2)
{
	int x;
	for(x=c1;x<=c2;x++)
	{
		gotoxy(x,r1);
		cout<<c;
		gotoxy(x,r2);
		cout<<c;
	}
	for(x=r1;x<=r2;x++)
	{
		gotoxy(c1,x);
		cout<<c;
		gotoxy(c2,x);
		cout<<c;
	}
	return;/*esta si tiene return*/
}
void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}