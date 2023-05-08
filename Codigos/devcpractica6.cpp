#include<iostream>
using namespace std;
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

void menu (){
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
    switch(opcion){
        case '+': suma(); break;
        case '-': resta(); break;
        case '*': multi(); break;
        case '/': div(); break;
        default: "\nERROR: No selecciono una opcion valida" ; break;
    }

    return 0;
}
