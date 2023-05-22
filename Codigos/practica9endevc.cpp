#include<iostream>
using namespace std;

// este algoritmo almacena 10 datos y los imprime en pantalla
int main(){
    int a[10]; //10 
    /*
    variable[0]; // 1
    variable[1]; // 2
    variable[2] ;// 3
    variable[3] ;// 4
    variable[4] ;// 5
    variable[5] ;// 6
    variable[6] ;// 7
    variable[7] ;// 8
    variable[8] ;// 9
    variable[9] ;// 10
    variable[10]; // 11
   */
   // do-while while for     

    for(int i = 0; i <= 10; i++){
        cout << "Ingrese el dato " << i <<": ";
        cin >> a[i];
    }

    cout << "Los datos ingresados fueron los siguientes:";
    for(int i = 0; i <= 10; i++){
        if(i==1){
            cout << a[1];
        }
        else{
            cout <<", ";
            cout << a[i];
        }
     
    }
    return 0;
}
