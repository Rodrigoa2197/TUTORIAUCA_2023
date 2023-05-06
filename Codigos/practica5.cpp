#include<iostream>
using namespace std;

int main(){ 

/*   int num, limit;
    cout << "Ingrese hasta que numero de contador se exprese en pantalla: ";
    cin >> num; //10
*/ 
/*    while( setencia de expresion ){
        //expresion a cumplir
        //.....
        //...    i++;
        }
*/  
/*
    //DESCENDIENTE
    limit = 1;
    while (  limit <= num){// si pasa
        cout << num << endl ; //imprime en pantalla el dato almacenado
        num--;// num = num - 1 == num-=1 == num--;
    }

    //ASCENDENTE
    limit = 1;
    while (  limit <= num){// se rompe
        cout << limit << endl ; //imprime en pantalla el dato almacenado
        limit++;// num = num - 1 == num-=1 == num--;
    }
*/

/*  do{
        //expresion a cumplir
        //.....
        //...    i++;
    }while(setencia de expresion);
*/
/*    limit = 1;
    do{
        cout << num << endl ; //imprime en pantalla el dato almacenado
        num-=1; // num = num - 1 == num-=1 == num--;
    }while(limit <= num);
*/
/*string valor;

cout << "Escribe algo...";
cin >> valor;

while(valor == "hola"){
    cout << "\nEscribio hola el usuario\n";
}

do{
    cout << "\nEscribio hola el usuario\n"; 
}while(valor == "hola");
*/

int opcion;
float sueldo, renta, afp, isss;
	cout << "MENU DE CALCULADORA DESCUENTOS" << endl;
	cout << "1) Aportes de renta (10%)" << endl;
	cout << "2) Aportes de AFP (6.25%)" << endl;
	cout << "3) Aportes de ISSS (2%)" << endl;
	cout << "Opcion: ";
	cin >> opcion;
switch(opcion){
    case 1:
        cout <<"Ingrese su sueldo: $";
        cin >> sueldo;
        cout << "Su sueldo original es: $" << sueldo << endl;
        renta = sueldo - (sueldo * 0.10);
        cout << "El descuento por aportes de renta es de: $" << renta << "\n";
    break;

    case 2:
    	cout << "Ingrese su sueldo: $";
		cin >> sueldo;
        cout << "Su sueldo original es: $" << sueldo << endl;
        afp = sueldo - (sueldo * 0.0625);
        cout << "El descuento por AFP es de: $" << afp << "\n";
    break;

    case 3: 
		cout << "Ingrese su sueldo: $";
		cin >> sueldo;
        cout << "Su sueldo original es: $" << sueldo << endl;
        isss = sueldo - (sueldo * 0.02);
        cout << "El descuento por ISSS es de: $" << isss << "\n";
	break;

	default: cout <<"ERROR: Numero ingresado no esta dentro del menu" << endl;
} 
return 0;
}