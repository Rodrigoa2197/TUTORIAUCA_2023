#include<iostream>
#include<string.h>
using namespace std;
// Que tome tres n�meros y 
// diga si el tercero es el resto de la divisi�n de los dos primeros.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
           
    cout << "Introduzca n�mero 1:";
    cin >> num1;
   
    cout << "Introduzca n�mero 2:";
    cin >> num2;  

    cout << "Introduzca n�mero 3:";
    cin >> num3;
   

    if (num1%num2==num3)
    {
        cout << "El tercer n�mero es el resto de la divisi�n de los dos primeros.\n";
    }
    else
    {
        cout <<"El tercer n�mero NO es el resto de la divisi�n de los dos primeros.\n";       
    }

    system("PAUSE");     
    return 0;
}
