#include <iostream>

using namespace std;

int main()
{
    int dd, mm, aa, ddSig, mmSig, aaSig;

    cout << endl;
    cout << "CÁLCULO DEL DÍA SIGUIENTE" << endl << endl;

    cout << "Digite tres enteros correspondiente a día, mes y año: ";
    cin >> dd >> mm >> aa;
    // Forma 2 para pedir datos al usuario
  /*
        cout << "Ingrese el dia: ";
        cin >> dd;
        cout << "Ingrese el mes: ";
        cin >> mm;
        cout << "Ingrese el año: ";
        cin >> aa;
    */
    switch(mm){ //31/1/2020
        case 1:
        case 3: 
        case 5:
        case 7:
        case 8:
        case 10:
            if(dd >= 1 && dd <= 30){ //si cumple
                ddSig = dd + 1; //2 -> 3
                mmSig = mm; //1
                aaSig = aa; // 2020
                cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; //31/1/2020
            }
            else if(dd == 31){ // 31 = 31
                    ddSig = 1;  // 1
                    mmSig = mm + 1; //2
                    aaSig = aa; //2020
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; //1/2/2020
                }
                else
                    cout << "Dato no válido para día" << endl;
            break;
        case 4: // 2/4/2020
        case 6:
        case 9:
        case 11:
            if(dd >= 1 && dd <= 29){
                ddSig = dd + 1;  // 2 + 1 = 3
                mmSig = mm; // 4
                aaSig = aa; // 2020
                cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; //3/4/2020
        }
            else
                if(dd == 30){ // 30/4/2020  
                    ddSig = 1; // 30 -> 1
                    mmSig = mm + 1; //4 -> 5  (4 + 1 = 5)
                    aaSig = aa; // 2020
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; // 1/5/2020
                }
                else
                    cout << "Dato no válido para día" << endl;
            break;                    
        case 12: // 12/12/2020
            if(dd >= 1 && dd <= 30){
                ddSig = dd + 1; // 12 -> 13
                mmSig = mm; // 12
                aaSig = aa; // 2020
                cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; // 13/12/2020
            }
            else //31/12/2020
                if(dd == 31){ //31 = 31 si cumple
                    ddSig = 1; // 31 -> 1
                    mmSig = 1; // 12 -> 1
                    aaSig = aa + 1; // 2020 + 1 = 2021
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
                }
                else
                    cout << "Dato no válido para día" << endl;
            break;                    
        case 2: //caso 1. 28/2/2019 -> 1/3/2019   caso 2. 29/2/2020 -> 1/3/2020
            if(aa % 400 == 0 || (aa % 4 == 0 && aa % 100 != 0)) // este determina si es año bisiesto o no 
                if(dd >= 1 && dd <= 28){ // 2 / 2 /2020 
                    ddSig = dd + 1; // 2 -> 3
                    mmSig = mm; // 2
                    aaSig = aa; // 2020
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; // 3/2/2020
                }
                else
                    if(dd == 29){
                        ddSig = 1;
                        mmSig = 3;
                        aaSig = aa;
                        cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
                }
                    else
                        cout << "Dato no válido para día" << endl;
            else
                if(dd == 1 && dd <= 27){ // 1/2/2019
                    ddSig = dd + 1; // 1 -> 2
                    mmSig = mm; // 2
                    aaSig = aa; // 2019
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
            }
                else
                    if(dd == 28){ 
                        ddSig = 1;
                        mmSig = 3;
                        aaSig = aa;
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
                    }
                    else
                        cout << "Dato no válido para día" << endl;
            break;
        default:
            cout << "Dato no válido para mes" << endl;
    }

    cout << endl;
    return 0;
}
