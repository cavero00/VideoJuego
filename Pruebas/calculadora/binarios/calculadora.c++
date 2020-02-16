#include "../clases/librerias/operaciones.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	operations oper;
	int elec;
	float operando1,operando2,result;
	char salir;

	do{
		cout<<"Todas las operaciones son para dos terminos\n\n";
		cout<<"Elige que operacion realizar:\n";
		cout<<"    - Suma a+b, pulsa 1\n";
		cout<<"    - Resta a-b, pulsa 2\n";
		cin>>elec;

		switch(elec){
		case 1:
			cout<<"\n\nLa sentencia va ha ser la siguiente:\n";
			cout<<"       operando1 + operando2\n";
			cout<<"Introduce el operando 1\n";
			cin>>operando1;
			cout<<"Introduce el operando 2\n";
			cin>>operando2;

			result = oper.suma(operando1,operando2);

			break;
		case 2:
                        cout<<"\n\nLa sentencia va ha ser la siguiente:\n";
                        cout<<"       operando1 - operando2\n";
                        cout<<"Introduce el operando 1\n";
                        cin>>operando1;
                        cout<<"Introduce el operando 2\n";
                        cin>>operando2;

                        result = oper.resta(operando1,operando2);

			break;
		}

		cout<<"\n\nEl resultado de la operacion elegida es: "<<result<<"\n";
		cout<<"\n¿Desea salir de la aplicacion?(S/N)\n";
		cin>>salir;

		if(salir=='N')
			system("clear");
	}while(salir != 'S' && salir == 'N');

	return 0;
}
