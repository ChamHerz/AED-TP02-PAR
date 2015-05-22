#include <cstdlib>
#include <iostream>

/* Trabajp Practico N1 */

using namespace std;

//Es Par

int main(int argc, char *argv[])
{
	int Numero;
	int Resto;
	
	cout<<"Ingrese numero: ";
	cin>>Numero;
	
	Resto = Numero % 2;
	
	if (Resto == 0)
		cout<<"El numero es Par"<<endl;
	else
		cout<<"El numero no es Par"<<endl;
}
