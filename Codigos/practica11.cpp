#include<iostream>
using namespace std;

/*
Cuanto aumentara el costo del parque despu�s de 30 min: $0.50
Aqu� p�danle al usuario cuanto tiempo paso parqueado 
Cin>> min
For(int i = 0; i<min; i++){}
*/
void slogan(){
	
}

int main(){
	int opcionPrincipal;
	cout <<"Menu Principal";
	cout <<"1) Generar el slogan";
	cout <<"2) Opciones usuario administrador";
	cout <<"3) Opciones usuario general";
	cin >> opcionPrincipal;
	switch(opcionPrincipal){
		case 1: slogan(); break;
		case 2: 
			cout <<"Opciones usuario administrador";
			cout <<"Mostrar la cantidad por de tipo de veh�culos parqueados";
			cout <<"Mostrar los autos, motos de mayor ingreso al parqueo";
			cout <<"Mostrar la cantidad de parqueos disponibles y no disponibles";
			cout <<"Bloquear parqueos espec�ficos (capacidades especiales, embarazadas)";
							

		break;
		case 3: break;
	}
	return 0;
}
