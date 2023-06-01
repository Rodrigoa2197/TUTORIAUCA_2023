#include<iostream>
using namespace std;

int lee(float &a, float &b, float &c);
int calcula(float a, float b, float c, float &suma, float &promedio);
int imprime(float a, float b, float c, float suma, float promedio);

	
int main(){
	float a, b, c, promedio, suma;
	lee(a, b, c);
	calcula(a, b, c, suma, promedio);
	imprime(a, b, c, suma, promedio);
	return 0;
}

//lectura
int lee(float &a,float &b,float &c){
	cout << "Este algoritmo lee tres numeros (a, b y c) , calcule la suma y el promedio, e imprima los tres numeros leidos, la suma y el promedio...\n\n";
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	cout << "Ingrese el tercer numero: ";
	cin >> c;
	return 0;	
}

//calcular
int calcula(float a, float b, float c, float &suma, float &promedio){
	suma = a + b + c;
	promedio = (a + b + c)/3;
	return 0;
}

//imprime en consola
int imprime(float a, float b, float c, float suma, float promedio){
	cout << "\nLos valores ingresados son: " << a << ", " << b << ", " << c;
	cout << "\nLa suma de los 3 numeros es: " << suma << "\n";
	cout << "El promedio de los 3 numeros es: " << promedio << "\n";
	return 0;
}
