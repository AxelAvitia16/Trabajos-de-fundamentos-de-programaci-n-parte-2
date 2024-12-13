#include <iostream> //Sufamelico v1
using namespace std;
main()
{
	char cad[100];
	int i;
	cout<<"Dame una cadena : "; 
	gets(cad);
	for(i=0;cad[i]!='\0';i++)
	{
		switch(cad[i])
		{
			case 'S':
				cad[i]='U';
				break;
			case 's':
				cad[i]='u';
				break;
			case 'U':
				cad[i]='S';
				break;
			case 'u':
				cad[i]='s';
				break;
			case 'F':
				cad[i]='A';
				break;
			case 'f':
				cad[i]='a';
				break;
			case 'A':
				cad[i]='F';
				break;
			case 'a':
				cad[i]='f';
				break;
			case 'M':
				cad[i]='E';
				break;
			case 'm':
				cad[i]='e';
				break;
			case 'E':
				cad[i]='M';
				break;
			case 'e':
				cad[i]='m';
				break;
			case 'L':
				cad[i]='I';
				break;
			case 'l':
				cad[i]='i';
				break;
			case 'I':
				cad[i]='L';
				break;
			case 'i':
				cad[i]='l';
				break;
			case 'C':
				cad[i]='O';
				break;
			case 'c':
				cad[i]='o';
				break;
			case 'O':
				cad[i]='C';
				break;
			case 'o':
				cad[i]='c';
				break;
		}	
	}
	cout<<"El nombre cifrado es: "<<cad;
}