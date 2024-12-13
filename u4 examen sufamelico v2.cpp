#include <iostream> //Sufamelico v2
using namespace std;
main()
{
	char cad[100];
	int i;
	cout<<"Dame una cadena : "; 
	gets(cad);
	for(i=0;cad[i]!='\0';i++)
	{
		cad[i]=toupper(cad[i]);
	}
	for(i=0;cad[i]!='\0';i++)
	{
		switch(cad[i])
		{
			case 'S':
				cad[i]='U';
				break;
			case 'U':
				cad[i]='S';
				break;
			case 'F':
				cad[i]='A';
				break;
			case 'A':
				cad[i]='F';
				break;
			case 'M':
				cad[i]='E';
				break;
			case 'E':
				cad[i]='M';
				break;
			case 'L':
				cad[i]='I';
				break;
			case 'I':
				cad[i]='L';
				break;
			case 'C':
				cad[i]='O';
				break;
			case 'O':
				cad[i]='C';
				break;
		}	
	}
	cout<<"El nombre cifrado es: "<<cad;
}