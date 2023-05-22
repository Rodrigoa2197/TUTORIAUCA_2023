#include<iostream>
using namespace std;

// este algoritmo almacena 10 datos y los imprime en pantalla
int main(){
	//const int tamanio = 10;
    int sum, variable[10]; //10 

   // do-while while for     

    for(int i = 0; i < 10; i++){
        cout << "Ingrese el dato " << i+1 <<": ";
        cin >> variable[i];
    }

    cout << "Los datos ingresados fueron los siguientes: ";
    for(int i = 0; i < 10; i++){
        if(i==0){
            cout << variable[0];
        }
        else{
            cout <<", ";
            cout << variable[i];
        }
     
    }
	cout << "\nLa suma total de los datos del arreglo son: ";
	for(int i = 0; i < 10; i++){
		sum = sum + variable[i];
    }
	cout << sum-2 << endl;
    return 0;
}

/*
#include<iostream>

using namespace std;

int main ()
{
	int n[9], sum=0, i=10, max=0, pos=0, min=0;
	
	n[0]=10;
	n[1]=45;
	n[2]=20;
	n[3]=35;
	n[4]=50;
	n[5]=60;
	n[6]=8;
	n[7]=99;
	n[8]=67;
	n[9]=77;
	
	for(int i=0; i<10; i++)
	{
		sum=sum+n[i];
	}
	//a) Que sume el contenido del arreglo y muestre el total
	cout<<"La suma total es: "<<sum<<endl;
	
	//b) Que imprima los datos del arreglo en orden inverso.
	while (i>=0)
	{
		cout<<n[i]<<endl;
		i--;
	}
	
	for(int i=0; i<10; i++)
	{
		if (n[i]>max)
		{
			max=n[i];
			pos=i;
		}
	}
	cout<<"La posicion "<<pos<<" "<<"contiene el numero mayor que es: "<<max<<endl;
	
	for(int i=0; i<10; i++)
	{
		if(n[i]<min)
		{
			min=n[i];
			pos=i;
		}
	}
	cout<<"La posicion "<<pos<<" "<<"contiene el numero menor que es: "<<min<<endl;
	
	return 0;
}*/