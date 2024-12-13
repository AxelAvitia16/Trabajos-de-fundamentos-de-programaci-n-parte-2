#include <iostream>
#include <windows.h>
using namespace std;
int y=123;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);}
int main()
{//marco1
	int x=0;/*var local a main*/
	int r1,r2,c1,c2;
	char c;
	for(x=1;x<80;x++)
	{
		gotoxy(x,1);
		cout<<"-";
		gotoxy(x,25);
		cout<<"-";
	}
	for(x=2;x<26;x++)
	{
		gotoxy(1,x);
		cout<<"|";
		gotoxy(79,x);
		cout<<"|";
	}
	gotoxy(10,12);
	cout<<"El valor de x en la funcion es: "<<x;
	gotoxy(10,13);
	cout<<"el valor de y en la funcion es: "<<y;/*var global*/
	//marco2 60,2,70,5
	for(x=60;x<=70;x++)
	{
		gotoxy(x,2);
		cout<<'*';
		gotoxy(x,5);
		cout<<'*';
	}
	for(x=2;x<=5;x++)
	{
		gotoxy(60,x);
		cout<<'*';
		gotoxy(70,x);
		cout<<'*';
	}
	//marco2'@',10,20,60,23
	for(x=10;x<=60;x++)
	{
		gotoxy(x,20);
		cout<<'@';
		gotoxy(x,23);
		cout<<'@';
	}
		for(x=20;x<=23;x++)
	{
		gotoxy(10,x);
		cout<<'@';
		gotoxy(60,x);
		cout<<'@';
	}
	gotoxy(1,26);
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
	//marco2 c,c1,r1,c2,r2
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
	return 0;
}