#include <iostream> //Sufamelico v3
using namespace std;
main()
{
	char cad[100];
	int i;
	cout<<"Dame una cadena : "; 
	gets(cad);
	for(i=0;cad[i]!='\0';i++)
	{
		if(cad[i]=='S' or cad[i]=='s')
			cad[i]='U';
		else
			if(cad[i]=='U' or cad[i]=='u')
				cad[i]='S';
			else
				if(cad[i]=='F' or cad[i]=='f')
					cad[i]='A';
				else
					if(cad[i]=='A' or cad[i]=='a')
						cad[i]='F';
					else
						if(cad[i]=='M' or cad[i]=='m')
							cad[i]='E';
						else
							if(cad[i]=='E' or cad[i]=='e')
								cad[i]='M';
							else
								if(cad[i]=='L' or cad[i]=='l')
									cad[i]='I';
								else
									if(cad[i]=='I' or cad[i]=='i')
										cad[i]='L';
									else
										if(cad[i]=='C' or cad[i]=='c')
											cad[i]='O';
										else
											if(cad[i]=='O' or cad[i]=='o')
												cad[i]='C';											
	}	
	cout<<"El nombre cifrado es: "<<cad;
}