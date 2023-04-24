#include<iostream>
using namespace std;

int main(){
	char c;
	
	cout << "ingrese un caracter: ";
	cin >> c;
	
	switch(c){
		case 'a': 
		case 'e':
	    case 'i':
		case 'o':
		case 'u':
	cout << "El caracter es una vocal"<<endl;break;
	default: 
	cout << "El caracter no es una vocal"<<endl;break;
		
	}
}
