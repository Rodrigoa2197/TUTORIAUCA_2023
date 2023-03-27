/*#include<iostream>
using namespace std;

int main(){
//CONDICIONES
//	IF ELSE, SWITCH, FOR, WHILE, DO WHILE.
int a;
cout << "Ingrese el dato: ";
cin >> a;

if(a==1){ //si
	cout << "hola";
}else{//sino
	cout <<"adios";
}	

}*/

/*Algoritmo que determinara si el numero es par o impar*/
/*#include<iostream>
using namespace std;

int main(){
	int num;
	
	cout << "Digite un numero: ";
	cin >> num; //6
	
	//cout << "El numero almacenado fue: " << num << endl; //endl - salto de linea
	
	// 6 % 2 == 0  
	
	if(num % 2 == 0){
		cout << "El numero es PAR" << endl;
	}else{
		cout << "EL numero es IMPAR" << endl;
	}
	
	
	system("pause");// visual requiere esto para ver la informacion que da el compilador
	return 0;
}*/

//#include<iostream>
//using namespace std;

// %  para par e impar
// / para dividir
 
/*int main(){
	float nota1, nota2, nota3, prom;
	
	cout << "Digite Nota 1: ";
	cin >> nota1;
	cout << "Digite Nota 2: ";
	cin >> nota2;
	cout << "Digite Nota 3: ";
	cin >> nota3;	
	
	prom = nota1 + nota2 + nota3/ 3;
		
	if(prom >= 6){  // 10 >=  6 SI,  6 >= 6 SI
		
		cout << prom << " Aprobado\n" ;
		
	}else {
		
		cout << prom << " Reprobado\n" ;
	}
	system("pause");
	return 0;
}*/

/*1. Capturar (leer) un valor numérico y determinar si se trata de un número positivo, 
negativo o cero, imprimiendo un mensaje que lo indique. */
/*#include<iostream>
using namespace std;

int main(){
	//int lee numeros enteros
	int num;
	
	cout << "Digite el numero: ";
	cin >> num; // 6 0 -1
	
	//< >  ==
	
	//   8>0 cumple  2<1 no cumple    num>0 
	if(num == 0){   //  6 == 0 ? NO, 0 == 0 ? SI, -1 == 0 ? NO
		cout << "El numero ingresado es 0\n";
	}else if(num > 0){   // 6>0 ? SI,   0 > 0 ? NO, -1 > 0 ? NO       
		cout << "El numero es POSITIVO\n";	
	}else{
		cout <<"El numero es NEGATIVO";
	}
}*/

/* Determina el mayor de los tres numeros*/
//#include<iostream>
//using namespace std;

/*int main(){
	//FORMA 1
	int numero, mayor;

	cout << "Ingrese el 1 numero: ";
	cin >> mayor; //5
	cout << "Ingrese el 2 numero: ";
	cin >> numero; //3
	//3 > 5 X 
	if(numero > mayor){
		mayor = numero; //sobreescribe la informacion de la variable "mayor"
	}

	cout << "Ingrese el 3 numero: ";
	cin >> numero; //2
	//2 > 5 x
	if(numero > mayor){
		mayor = numero;
	}

	cout << "El mayor de los 3 numeros es: " << mayor <<endl;
}*/
	//FORMA 2
/*	int n1, n2, n3;

	cout << "Ingrese el primer numero: ";
	cin >>n1; //6

	cout << "Ingrese el segundo numero: ";
	cin >>n2; //16

	cout << "Ingrese el Tercer numero: ";
	cin >>n3; //4
	//&& == and -> En una condicion and si no se cumple una de las dos condiciones 
	//no me dara la expresion de la condicion if
	if(n1 >= n2 && n1 >= n3){
		cout << "El mayor de los 3 numeros es: " << n1 << endl;
	}else if(n2 > n3){
		cout << "El mayor de los 3 numeros es: " << n2 << endl;
	}else{
		cout << "El mayor de los 3 numeros es: " << n3 << endl;
	}
	return 0;
}*/

/*Determina la cantidad de salario aumentado al empleado*/
#include<iostream>
using namespace std;

int main(){

	float sueldo,  nuevoSueldo;

	cout <<" Ingrese el sueldo del trabajador: ";
	cin >> sueldo; //400

	cout <<"Sueldo actual es: $" << sueldo << endl;
	
	if(sueldo < 1000){
		//logica : aumenato el nuevo sueldo a un 15%
		nuevoSueldo = sueldo + (sueldo * 0.15); 
		
		cout << "Nuevo sueldo aumento un 15% es: $" << nuevoSueldo << endl;
	}
	else{
		//logica: aumento el nuevo sueldo aun 12%
		nuevoSueldo = sueldo + (sueldo * 0.12); 

		cout << "Nuevo sueldo aumento un 12% es $: " << nuevoSueldo << endl;
	}

	return 0;
}

