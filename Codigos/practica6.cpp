#include <iostream>
#include <math.h>
using namespace std;
/*
// METODO DE FUNCION 1
//[prototipos]
int suma();
int resta();
int multi();
int div();

//funcion main
int main(){
    int a, b, c, d, e, f, g, h, sum, rest, div, multi;
    cout << "ingrese dato 1: ";
    cin >> a; 
    cout << "ingrese dato 2: ";
    cin >> b;
    sum = a+b;

    cout << "ingrese dato 1: ";
    cin >> c; 
    cout << "ingrese dato 2: ";
    cin >> d;
    rest = c+d;

    cout << "ingrese dato 1: ";
    cin >> e; 
    cout << "ingrese dato 2: ";
    cin >> f;
    multi = e+f;

    cout << "ingrese dato 1: ";
    cin >> g; 
    cout << "ingrese dato 2: ";
    cin >> h;
    div = g+h;

    cout << "El total de suma es: " << sum;
    cout << "El total de resta es: " << rest;
    cout << "El total de multilpicacion es: " << multi;
    cout << "El total de division es: " << div;
    return 0;
}

// funcion suma
int suma(){

}
// funcion resta
int resta(){
    
}
// funcion multi
int multi(){
    
}
// funcion div
int div(){
    
}
*/

// METODO DE FUNCION 2
// funcion suma
/*
int suma(){
    int a, b, sum;
    cout << "ingrese dato 1: ";
    cin >> a; 
    cout << "ingrese dato 2: ";
    cin >> b;
    sum = a+b;
    cout << "El total de suma es: " << sum << endl;
}
// funcion resta
int resta(){
    int c, d, rest;
    cout << "ingrese dato 1: ";
    cin >> c; 
    cout << "ingrese dato 2: ";
    cin >> d;
    rest = c-d;
    cout << "El total de resta es: " << rest << endl;
}
// funcion multi
int multi(){
    int e, f, multi;
    cout << "ingrese dato 1: ";
    cin >> e; 
    cout << "ingrese dato 2: ";
    cin >> f;
    multi = e*f;
    cout << "El total de multiplicacion es: " << multi << endl;
}
// funcion div
int div(){
    float g, h, div;
    cout << "ingrese dato 1: ";
    cin >> g; 
    cout << "ingrese dato 2: ";
    cin >> h;
    div = g/h;
    cout << "El total de Division es: " << div << endl;
}

void menu(){
    cout <<"CALCULADORA BASICA 2.1\n";
    cout <<"+) Realice la suma\n";
    cout <<"-) Realice la resta\n";
    cout <<"*) Realice la multiplicacion\n";
    cout <<"/) Realice la division\n";
    cout <<"Opcion: ";
}


int main(){
    char opcion;

    menu();
    cin >> opcion;
    switch(opcion){
        case '+': suma(); break;
        case '-': resta(); break;
        case '*': multi(); break;
        case '/': div(); break;
        default: cout << "\nERROR: No selecciono una opcion valida" ; break;
    }

    return 0;
}
*/
/*
int notaPromedio(){
    float nota1, nota2, nota3, prom;
    cout << "Digite nota 1: ";
    cin >> nota1; 
    cout << "Digite nota 2: ";
    cin >> nota2; 
    cout << "Digite nota 3: ";
    cin >> nota3; 

    prom = (nota1+nota2+nota3)/3;

    if(prom >= 6){ 
		
		cout << prom << " Aprobado\n" ;
		
	}else {
		
		cout << prom << " Reprobado\n" ;
	}
}

int main(){
    notaPromedio();
    return 0;
}
*/
int perimetro(){
    float radio = 0, pi = 3.1416, perimetro = 0;
    cout << "Ingrese el radio: ";
	cin >> radio;
	perimetro = 2 * pi * radio;
    cout << "\nLongitud de la circunferencia es: " << perimetro;
}

int area(){
    float radio = 0, pi = 3.1416, area = 0;
    cout << "Ingrese el radio: ";
	cin >> radio;
	area = pi * pow(radio, 2);
    cout << "\nArea del circulo es: " << area;
}

int volumen(){
    float radio = 0, pi = 3.1416, volumen = 0;
    cout << "Ingrese el radio: ";
	cin >> radio;
	volumen = (4* pi * (pow(radio, 3))) / 3;
	cout << "\nVolumen de la esfera es: " << volumen << endl;
}

int main(){
    int opcion;
    cout <<"Menu"<<endl;
    cout <<"1) Determinar perimetro"<<endl;
    cout <<"2) Determinar area"<<endl;
    cout <<"3) Determinar volumen"<<endl;
    cout <<"Opcion: ";
    cin >> opcion;
    switch(opcion){
        case 1: perimetro(); break;
        case 2: area(); break;
        case 3: volumen(); break;
        default: cout <<"ERROR: Dato ingresado no valido"<<endl;
    }
	return 0;
}


