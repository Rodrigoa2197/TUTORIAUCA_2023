/*Elaborar un programa en C++ que calcule los puntos obtenidos por un deportista a partir de las calificaciones de 7 jueces.  
Las calificaciones pueden ser números enteros entre 0 y 10 inclusive. El programa deberá leer las 7 calificaciones y almacenarlas en un arreglo. 
El programa deberá imprimir las 7 calificaciones leídas, y los puntos finales que obtuvo el deportista.
Para obtener los puntos del deportista, se eliminan la calificación menor y la mayor, y se suman las 5 calificaciones restantes.*/
//#include<iostream>
//using namespace std;


//ARREGLO
/*a[7] 
  |
a[0] 0 -> 10 
a[1] 1 -> 9  
a[2] 2 -> 2   
a[3] 3 -> 1  
a[4] 4 -> 6
a[5] 5 -> 8
a[6] 6 -> 5
a[7] 7 -> 4*/
/*
void menu(){
	cout << "Este algortimo calcula los puntos obtenidos por un deportista a partir de las calificaciones de 7 jueces. El programa lee las 7 calificaciones en un arreglo.";
	cout << " Y imprime las calificaciones que obtuvo el deportista...\n\n";
    cout << "Porfavor, usuario solo ingrese numeros entre 0 y 10!\n";
    
}

int puntaje(){
    int a[7];
    int mayor, menor, sum, cont;
    menor = 9999999; // este es el limite de datos en c++
    mayor = 0;
    sum = 0;
    
    for(int i = 1; i < 8; i++){
        do{
            cout << "Juez " << i << " Calificacion" << ": ";
            cin >> a[i];
        }while(a[i] < 0 || a[i] > 10);
    } 
    cout << "\nEl puntaje de los jueces fueron: \n";

    for(int i = 1; i < 8; i++){// 4 5 7 10 8 9 0
        if(i==1)// 4 
        {
            cout << a[1];
        }
        else
        {
            cout <<", " << a[i];
        }
        if(a[i] > mayor){
            mayor = a[i]; //4 5 7 10
        }
        if(a[i] < menor){
            menor =  a[i];//4 0
        }

        sum = sum + a[i];
    } 
    cout <<"\n\n";
    cont = (sum-menor-mayor);
	cout << "Puntaje final del deportista con los 5 numeros restantes: "<< cont << endl;
}


int main(){

    menu();
    puntaje();
    return 0;

}

*/
#include<iostream>
#include<ctime> // numero aleatorio tipo manecilla de reloj!
#include<stdlib.h>
#include<string>
using namespace std;

void menu(){
    cout <<"Bienvenido a HIGH LOW GAME :D\n";
}

int main(){
    unsigned semilla;
    srand(time(0));

    int a, n;
    string opcion;

    n = (1+rand()%11);//Numeros aleatorios del 1 a 10. EJ. ALT.:Numeros aleatorios de 1 a 99 -> n=(1+rand()%100); 

    cout << "Ingrese el numero: ";

    do{
        int c = 0;
        do{
   
            cin >> a;
            cout <<"\n";
            if(a < n)
            {
                cout << "Te quedaste corto!\n"<<"Otra vez...\n";
            }
            if(a > n){
                cout << "Te pasaste!\n"<<"Otra vez...\n";
            }
        c+=1;
        }while(a!=n);

		cout << "Le atinaste en " << c << " intentos" << endl;
		cout << "Quieres volver a jugar? " << "(si o no)"<< endl;
		cin >> opcion;

    }while(opcion == "si");
    
    return 0;
}