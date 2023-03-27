#include<iostream> //  libreria para ocupar la logica de la programacion
using namespace std; // nos permite ocupar las lectura y escritrura de pantalla
//int -> 1,1,2,4,4 alamacena numeros enteros 
//float -> 23.31  alamacena decimales
//double float -> 0.111 , 123123.1223 almacena decimales grandes
//if, else, for, switch, do while, while -> se ocupa cuando primero realice la verificacion de condicion
int main(){ 
	float a , b, suma, resta, multi;//declaramos variables 
	float divi; //declaramos variables
	cout << "CALCULADORA"; //impresion de pantalla (imprime en el compilador)
	cout << endl << "Ingresa el primer dato: "; //impresion de pantalla (imprime en el compilador)
	cin >> a; //lectura de pantalla (almacenar informacion)
	cout << endl << "Ingresa el segundo dato: "; //impresion de pantalla (imprime en el compilador)
	cin >> b; //lectura de pantalla (almacenar informacion)
	suma = a + b;// almacena la suma de a + b en la variable 'suma'
	resta = a - b;// almacena la resta de a - b en la variable 'resta'
	multi = a * b;// almacena la multi de a * b en la variable 'multi'
	divi = a / b;// almacena la divi de a / b en la variable 'divi'
	cout << "\nLa Suma de a + b es: " << suma;
	cout << "\nLa Resta de a - b es: " << resta;
	cout << "\nLa Multiplicacion de a * b es: " << multi;
	if(b==0){
		cout << "\nLogica matematica no correcta\n";
	}else{
		cout << "\nLa Division de a / b es: " << divi;
	}
	return 0;
	
}
