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
        int pago_juguetes, pago_cosmeticos, pago_medicamentos, pago_accesorios, 
		cant_juguetes, cant_cosmeticos, cant_medicamentos, cant_accesorios,
		tot_juguetes = 0, tot_cosmeticos = 0, tot_medicinas = 0, tot_accesorios = 0;
        int juguetes = 0, cosmeticos = 0, medicinas = 0, accesorios = 0;
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
            pago_juguetes = cant_juguetes * 5; //total pagado    
            tot_juguetes = tot_juguetes + pago_juguetes; //guarda los pagos si vuelve a comprar    
            cout << "El total actual seria en juguetes: $" << tot_juguetes << "\n";
        break;
        case 2: 
            cout << "Cuantos cosmeticos desean: ";
            cin >> cant_cosmeticos; //ingresa la cantidad de cosmeticos
            pago_cosmeticos  = cant_cosmeticos * 15; //total pagado           
            tot_cosmeticos = tot_cosmeticos + pago_cosmeticos; //guarda los pagos si vuelve a comprar
    		cout << "El total actual seria en cosmeticos: $" << tot_cosmeticos << "\n";
        break;
        case 3:
            cout << "Cuantos medicamentos desean: ";
            cin >> cant_medicamentos; //ingresa la cantidad de medicamentos
            pago_medicamentos = cant_medicamentos * 20; //total pagado
            tot_medicinas = tot_medicinas + pago_medicamentos; //guarda los pagos si vuelve a comprar
            cout << "El total actual seria en medicamentos: $" << tot_medicinas << "\n";
        break;
        case 4: 
            cout << "Cuantos accesorios desean: ";
            cin >> cant_accesorios; //ingresa la cantidad de accesorios
            pago_accesorios = cant_accesorios * 10; //total pagado
            tot_accesorios = tot_accesorios + pago_accesorios; //guarda los pagos si vuelve a comprar
            cout << "El total actual seria en acessorios: $" << tot_accesorios<< "\n";
        break;
        case 5: 
                    if(tot_juguetes >= 100){
		                juguetes = tot_juguetes - (tot_juguetes* 0.10); //aplica el descuento
		                cout <<"\nLa cantidad a pagar seria en juguetes: $" << juguetes << "\n"; 
		            }else{
		            	cout <<"\nLa cantidad a pagar seria en juguetes: $" << tot_juguetes << "\n"; 
					}
					
                    if(tot_cosmeticos >= 100){
		                cosmeticos = tot_cosmeticos - (tot_cosmeticos* 0.10); //aplica el descuento
		                cout <<"\nLa cantidad a pagar seria en cosmeticos: $" << cosmeticos << "\n"; 
		            }else{
		            	cout <<"\nLa cantidad a pagar seria en cosmeticos: $" << tot_cosmeticos << "\n"; 
					}
					
					if(tot_medicinas >= 100){
		                medicinas = tot_medicinas - (tot_medicinas* 0.10); //aplica el descuento
		                cout <<"\nLa cantidad a pagar seria en medicinas: $" << medicinas << "\n"; 
		            }else{
		            	cout <<"\nLa cantidad a pagar seria en medicinas: $" << tot_medicinas << "\n"; 
					}
					
					if(tot_accesorios >= 100){
		                accesorios = tot_accesorios - (tot_accesorios* 0.10); //aplica el descuento
		                cout <<"\nLa cantidad a pagar seria en accesorios: $" << accesorios << "\n"; 
		            }else{
		            	cout <<"\nLa cantidad a pagar seria en accesorios: $" << tot_accesorios << "\n"; 
					}
        break;
        default: cout << "Lo sentimientos no contamos con ese producto actualmente...\n";break;
        }
    }while(pro_seleccion!=5);
}

int totalVendidos(int &tot_juguetes,int &tot_cosmeticos,int &tot_medicinas, int &tot_accesorios,int &juguetes,int &cosmeticos,int &medicinas,int &accesorios){
	cout << (tot_juguetes + tot_cosmeticos + tot_medicinas + tot_accesorios + juguetes + cosmeticos + medicinas +accesorios);
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
            //case 3: totalVendidos(tot_juguetes,&tot_cosmeticos, &tot_medicinas, &tot_accesorios, &juguetes, &cosmeticos, &medicinas, &accesorios); break;
            case 4: cout <<"Saliendo...\n"; exit(0); break;
            default: cout<< "Error: Opcion no valida"; break;
        }
      //  system("pause"); //pausar la informacion en pantalla
      //  system("clear"); //limpia la pantalla
    }while(opcion!= 4);

}
