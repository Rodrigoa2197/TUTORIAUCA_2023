#include<iostream>
#include <cstdlib> 
#include<stdlib.h>
using namespace std;

int productos(){
    cout <<"\nPRODUCTOS:\n";
    cout <<"Juguetes $5\n";
    cout <<"Cosmeticos $15\n";
    cout <<"Medicamentos $20\n";
    cout <<"Accesorios $10\n";
}

int ventas(){
    int pro_seleccion;
        int pago_juguetes=0, cant_juguetes, juguetes, tot_juguetes = 0, tot_cosmeticos = 0, tot_medicinas = 0, tot_accesorios = 0;
        int cosmeticos, medicamentos, accesorios, pago_cosmeticos, pago_medicamentos, pago_accesorios;
    do{


        cout <<"\nPRODUCTOS:\n";
        cout <<"1)Juguetes\n";
        cout <<"2)Cosmeticos\n";
        cout <<"3)Medicamentos\n";
        cout <<"4)Accesorios\n";
        cout <<"5)Factura a pagar\n"; 
        cout <<"Eliga el producto: ";
        cin >> pro_seleccion;

        switch (pro_seleccion)
        {
        case 1:
            cout << "Cuantos juguetes desean: ";
            cin >> cant_juguetes; //ingresa la cantidad de juguetes
            pago_juguetes = (cant_juguetes * 5); //total pagado

            if(pago_juguetes <= 100){
                juguetes = pago_juguetes * 0.10; //aplica el descuento
            }
        
            tot_juguetes = tot_juguetes + juguetes + pago_juguetes; //guarda los pagos si vuelve a comprar
            
			if(tot_jueguetes <= 100){
                juguetes = pago_juguetes * 0.10; //aplica el descuento
            }
        
            cout <<tot_juguetes;
        break;
        case 2: 
            int cant_cosmeticos; 

            cout << "Cuantos cosmeticos desean: ";
            cin >> cant_cosmeticos; //ingresa la cantidad de cosmeticos
            pago_cosmeticos  = cant_cosmeticos * 5; //total pagado

            if(pago_cosmeticos == 100){
                cosmeticos = pago_cosmeticos * 0.10; //aplica el descuento
            }else{
                pago_cosmeticos ; //no aplica el descuento
            }
            
            tot_cosmeticos = tot_cosmeticos + pago_cosmeticos; //guarda los pagos si vuelve a comprar
        break;
        case 3: 
            int cant_medicamentos; 

            cout << "Cuantos medicamentos desean: ";
            cin >> cant_medicamentos; //ingresa la cantidad de medicamentos
            pago_medicamentos = cant_medicamentos * 5; //total pagado

            if(pago_medicamentos == 100){
                medicamentos = pago_medicamentos * 0.10; //aplica el descuento
            }else{
                pago_medicamentos; //no aplica el descuento
            }
            
            tot_medicinas = tot_medicinas + pago_medicamentos; //guarda los pagos si vuelve a comprar
        break;
        case 4: 
            int cant_accesorios; 

            cout << "Cuantos accesorios desean: ";
            cin >> cant_accesorios; //ingresa la cantidad de accesorios
            pago_accesorios = cant_accesorios * 5; //total pagado

            if(pago_accesorios == 100){
                accesorios = pago_accesorios * 0.10; //aplica el descuento
            }else{
                pago_accesorios; //no aplica el descuento
            }
            
            tot_accesorios = tot_accesorios + pago_accesorios; //guarda los pagos si vuelve a comprar
        break;
        case 5: cout <<"\nLa cantidad a pagar seria por juguetes: $" << tot_juguetes << "\n"; 
                cout <<"\nLa cantidad a pagar seria por cosmeticos: $" << tot_cosmeticos << "\n";
                cout <<"\nLa cantidad a pagar seria por medicamentos: $" << tot_medicinas << "\n";
                cout <<"\nLa cantidad a pagar seria por accesorios: $" << tot_accesorios << "\n";
        break;
        default: cout << "?? Lo sentimientos no contamos con ese producto actualmente...\n";break;
        }
    }while(pro_seleccion!=5);
}

int totalVendidos(){

}

void menu(){
    cout <<"\nMENU:\n";
    cout <<"1) Mostrar Productos\n";
    cout <<"2) Realizar Venta\n";
    cout <<"3) Calcular el total de productos vendidos\n";
    cout <<"4) Salir";
}

int main(){
    string continuar;
    int opcion;

    do{
        menu();

        cout << "\nOpcion: ";
        cin >> opcion;
        switch(opcion){
            case 1: productos(); break;
            case 2: ventas(); break;
            case 3: break;
            case 4: cout <<"Saliendo...\n"; exit(0); break;
            default: cout<< "Error: Opcion no valida"; break;
        }
      //  system("pause"); //pausar la informacion en pantalla
      //  system("clear"); //limpia la pantalla
    }while(opcion!= 4);

}