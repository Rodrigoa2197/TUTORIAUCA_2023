#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <unistd.h> // Para la funcion access()
#include "json.hpp"	
using json = nlohmann::json;



using namespace std;

int MAX_FILAS = 6;         // 6 filas + 1 fila de encabezados
int MAX_COLUMNAS = 6;      // 6 columnas + 1 columna de encabezados
int MAX_COLUMNAS_CAP = 26; // Limite maximo de columnas permitidas
int MAX_FILAS_CAP = 26;    // Limite maximo de columnas permitidas


class Celda
{
public:
    string valor;
    Celda *prev;
    Celda *next;

    Celda(const string &val) : valor(val), prev(nullptr), next(nullptr) {}
};

class Fila
{
public:
    Celda *primeraCelda;

    Fila() : primeraCelda(nullptr) {}

    ~Fila()
    {
        Celda *actual = primeraCelda;
        while (actual != nullptr)
        {
            Celda *siguiente = actual->next;
            delete actual;
            actual = siguiente;
        }
    }
};

class HojaCalculo
{
private:
    Fila **filas;
    int filaActual;
    int columnaActual;
    string valorCopiado;
    vector<vector<string>> celdas;

public:
    HojaCalculo()
    {
        // Inicializar la hoja de calculo con espacios en blanco
        filas = new Fila *[MAX_FILAS];
        crearFilasYCeldasIniciales();
        filaActual = 1;
        columnaActual = 1;
    }

    ~HojaCalculo()
    {
        for (int fila = 0; fila < MAX_FILAS; fila++)
        {
            delete filas[fila];
        }
        delete[] filas;
    }

    void crearFilasYCeldasIniciales()
    {
        for (int fila = 0; fila < MAX_FILAS; fila++)
        {
            filas[fila] = new Fila();
            for (int columna = 0; columna < MAX_COLUMNAS; columna++)
            {
                Celda *nuevaCelda = new Celda("");
                nuevaCelda->next = filas[fila]->primeraCelda;
                if (filas[fila]->primeraCelda != nullptr)
                {
                    filas[fila]->primeraCelda->prev = nuevaCelda;
                }
                filas[fila]->primeraCelda = nuevaCelda;
            }
        }
    }

    void mostrar()
    {
        cout << "Hoja de C lculo:" << endl;

        // Encabezados de las columnas
        cout << setw(5) << " ";
        for (int columna = 1; columna < MAX_COLUMNAS; columna++)
        {
            cout << setw(10) << static_cast<char>('A' + columna - 1);
        }
        cout << endl;

        // Delimitador de filas
        cout << setw(5) << " ";
        for (int columna = 1; columna < MAX_COLUMNAS; columna++)
        {
            cout << setw(10) << "----------";
        }
        cout << endl;

        // Contenido de la hoja de calculo
        for (int fila = 1; fila < MAX_FILAS; fila++)
        {
            cout << setw(3) << fila << "  ";
            Celda *actual = filas[fila]->primeraCelda;
            while (actual != nullptr)
            {
                cout << setw(10) << actual->valor;
                actual = actual->next;
            }
            cout << endl;
        }
    }

    void mostrarCeldaActual()
    {
        cout << "Celda actual: " << char(columnaActual + 'A' - 1) << filaActual << endl;
    }

    void modificarCelda(const string &valor)
    {
        if (filaActual >= 1 && filaActual < MAX_FILAS && columnaActual >= 1 && columnaActual < MAX_COLUMNAS)
        {
            Fila *fila = filas[filaActual];
            Celda *actual = fila->primeraCelda;
            int columna = 1;

            // Encuentra la celda correspondiente a la columna actual
            while (columna < columnaActual && actual != nullptr)
            {
                actual = actual->next;
                columna++;
            }

            if (actual != nullptr && columna == columnaActual)
            {
                // Actualizar el valor de la celda existente
                actual->valor = valor;
                cout << "Celda modificada correctamente." << endl;
            }
            else
            {
                // La celda no existe, crear una nueva celda en la posici n actual
                Celda *nuevaCelda = new Celda(valor);
                if (actual == nullptr)
                {
                    // La celda actual es la  ltima de la fila
                    if (fila->primeraCelda == nullptr)
                    {
                        fila->primeraCelda = nuevaCelda;
                    }
                    else
                    {
                        Celda *ultimaCelda = fila->primeraCelda;
                        while (ultimaCelda->next != nullptr)
                        {
                            ultimaCelda = ultimaCelda->next;
                        }
                        ultimaCelda->next = nuevaCelda;
                        nuevaCelda->prev = ultimaCelda;
                    }
                    columnaActual = columna; // Actualizar la columna actual a la nueva celda
                }
                else
                {
                    // La celda actual no es la  ltima de la fila
                    if (actual->prev == nullptr)
                    {
                        fila->primeraCelda = nuevaCelda;
                    }
                    else
                    {
                        actual->prev->next = nuevaCelda;
                        nuevaCelda->prev = actual->prev;
                    }
                    nuevaCelda->next = actual;
                    actual->prev = nuevaCelda;
                }
                cout << "Celda modificada correctamente." << endl;
            }
        }
        else
        {
            cout << "Error: Posici n de celda inv lida." << endl;
        }
    }

    void moverCeldaArriba()
    {
        if (filaActual > 1)
        {
            filaActual--;
            cout << "Celda movida hacia arriba." << endl;
        }
        else
        {
            cout << "Error: No se puede mover m s arriba." << endl;
        }
    }

    void moverCeldaAbajo()
    {
        if (filaActual < MAX_FILAS - 1)
        {
            filaActual++;
            cout << "Celda movida hacia abajo." << endl;
        }
        else
        {
            cout << "Error: No se puede mover m s abajo." << endl;
        }
    }

    void moverCeldaIzquierda()
    {
        if (columnaActual > 1)
        {
            columnaActual--;
            cout << "Celda movida hacia la izquierda." << endl;
        }
        else
        {
            cout << "Error: No se puede mover m s hacia la izquierda." << endl;
        }
    }

    void moverCeldaDerecha()
    {
        if (columnaActual < MAX_COLUMNAS - 1)
        {
            columnaActual++;
            cout << "Celda movida hacia la derecha." << endl;
        }
        else
        {
            cout << "Error: No se puede mover m s hacia la derecha." << endl;
        }
    }

    void copiarCelda()
    {
        if (filaActual >= 1 && filaActual < MAX_FILAS && columnaActual >= 1 && columnaActual < MAX_COLUMNAS)
        {
            Fila *fila = filas[filaActual];
            Celda *actual = fila->primeraCelda;
            int columna = 1;
            while (columna < columnaActual && actual != nullptr)
            {
                actual = actual->next;
                columna++;
            }
            if (actual != nullptr)
            {
                valorCopiado = actual->valor;
                cout << "Celda copiada correctamente." << endl;
            }
            else
            {
                cout << "Error: La celda no existe." << endl;
            }
        }
        else
        {
            cout << "Error: Posici n de celda inv lida." << endl;
        }
    }

    void pegarCelda()
    {
        if (filaActual >= 1 && filaActual < MAX_FILAS && columnaActual >= 1 && columnaActual < MAX_COLUMNAS)
        {
            Fila *fila = filas[filaActual];
            Celda *actual = fila->primeraCelda;
            int columna = 1;
            while (columna < columnaActual && actual != nullptr)
            {
                actual = actual->next;
                columna++;
            }
            if (actual != nullptr)
            {
                // Actualizar el valor de la celda actual
                actual->valor = valorCopiado;
                cout << "Celda pegada correctamente." << endl;
            }
            else
            {
                cout << "Error: La celda actual no existe." << endl;
            }
        }
        else
        {
            cout << "Error: Posici n de celda inv lida." << endl;
        }
    }

    void cortarCelda()
    {
        if (filaActual >= 1 && filaActual < MAX_FILAS && columnaActual >= 1 && columnaActual < MAX_COLUMNAS)
        {
            Fila *fila = filas[filaActual];
            Celda *actual = fila->primeraCelda;
            int columna = 1;
            while (columna < columnaActual && actual != nullptr)
            {
                actual = actual->next;
                columna++;
            }
            if (actual != nullptr)
            {
                // Obtener el valor de la celda actual
                valorCopiado = actual->valor;

                // Eliminar la celda actual
                if (actual->prev == nullptr)
                {
                    fila->primeraCelda = actual->next;
                    if (actual->next != nullptr)
                    {
                        actual->next->prev = nullptr;
                    }
                }
                else
                {
                    actual->prev->next = actual->next;
                    if (actual->next != nullptr)
                    {
                        actual->next->prev = actual->prev;
                    }
                }
                delete actual;

                cout << "Celda cortada correctamente." << endl;
            }
            else
            {
                cout << "Error: La celda no existe." << endl;
            }
        }
        else
        {
            cout << "Error: Posici n de celda inv lida." << endl;
        }
    }

    void saltarCelda()
    {
        int fila, columna;
        cout << "Ingrese la fila: ";
        cin >> fila;
        cout << "Ingrese la columna: ";
        cin >> columna;

        if (fila >= 1 && fila < MAX_FILAS && columna >= 1 && columna < MAX_COLUMNAS)
        {
            filaActual = fila;
            columnaActual = columna;
            cout << "Se ha saltado a la celda " << static_cast<char>('A' + columnaActual - 1) << filaActual << "."
                 << endl;
        }
        else
        {
            cout << "Error: Posici n de celda inv lida." << endl;
        }
    }

    void agregarColumna()
    {
        if (MAX_COLUMNAS < MAX_COLUMNAS_CAP)
        {
            MAX_COLUMNAS++;

            for (int fila = 0; fila < MAX_FILAS; fila++)
            {
                Fila *filaActual = filas[fila];
                Celda *nuevaCelda = new Celda("");
                Celda *ultimaCelda = filaActual->primeraCelda;

                if (ultimaCelda == nullptr)
                {
                    filaActual->primeraCelda = nuevaCelda;
                }
                else
                {
                    while (ultimaCelda->next != nullptr)
                    {
                        ultimaCelda = ultimaCelda->next;
                    }
                    ultimaCelda->next = nuevaCelda;
                    nuevaCelda->prev = ultimaCelda;
                }
            }

            cout << "Se ha agregado una nueva columna." << endl;
        }
        else
        {
            cout << "Error: Se ha alcanzado el l mite m ximo de columnas." << endl;
        }
    }

    void agregarFila()
    {
        if (MAX_FILAS < MAX_FILAS_CAP)
        {
            MAX_FILAS++;
            filas[MAX_FILAS - 1] = new Fila();

            // Crear las celdas para la nueva fila
            Fila *filaNueva = filas[MAX_FILAS - 1];
            for (int columna = 0; columna < MAX_COLUMNAS; columna++)
            {
                Celda *nuevaCelda = new Celda("");
                nuevaCelda->next = filaNueva->primeraCelda;
                if (filaNueva->primeraCelda != nullptr)
                {
                    filaNueva->primeraCelda->prev = nuevaCelda;
                }
                filaNueva->primeraCelda = nuevaCelda;
            }

            cout << "Se ha agregado una nueva fila." << endl;
        }
        else
        {
            cout << "Error: Se ha alcanzado el l mite m ximo de filas." << endl;
        }
    }

    void exportarJSON()
    {
        std::string carpetaArchivos = "../archivos"; // Ruta de la carpeta "archivos"

        // Verificar si la carpeta "archivos" ya existe utilizando la funci n access()
        if (access(carpetaArchivos.c_str(), F_OK) != 0)
        {
            // La carpeta no existe, crearla utilizando el comando mkdir
            std::string comandoCrearCarpeta = "mkdir -p \"" + carpetaArchivos + "\"";
            int resultado = std::system(comandoCrearCarpeta.c_str());

            if (resultado != 0)
            {
                std::cout << "No se pudo crear la carpeta 'archivos'\n";
                return;
            }
        }

        std::string rutaArchivo = carpetaArchivos + "/hoja_de_calculo.json";
        std::ofstream archivo(rutaArchivo);

        if (archivo.is_open())
        {
            archivo << "{\n"; // Iniciar el JSON

            for (int fila = 1; fila < MAX_FILAS; fila++)
            {
                archivo << "  \"" + std::to_string(fila) + "\": {\n"; // Abrir una nueva fila

                Celda *actual = filas[fila]->primeraCelda;
                int columna = 1;
                while (actual != nullptr)
                {
                    archivo << "    \"" + std::string(1, char('A' + columna - 1)) + "\": \"" + actual->valor +
                                   "\""; // Agregar la celda actual
                    actual = actual->next;
                    if (actual != nullptr)
                        archivo << ",";
                    archivo << "\n";
                    columna++;
                }

                archivo << "  }"; // Cerrar la fila actual
                if (fila < MAX_FILAS - 1)
                    archivo << ",";
                archivo << "\n";
            }

            archivo << "}\n"; // Cerrar el JSON

            archivo.close();
            std::cout << "El JSON se ha guardado en " << rutaArchivo << "\n";
        }
        else
        {
            std::cout << "No se pudo abrir el archivo para guardar el JSON\n";
        }
    }

    void insertarCelda(int fila, int columna, const string& valor) {
    if(fila > 0 && columna > 0) { 
        if (fila > celdas.size()) {
            celdas.resize(fila);
        }
        if (columna > celdas[fila - 1].size()) {
            celdas[fila - 1].resize(columna);
        }
        celdas[fila - 1][columna - 1] = valor;
    }
}
    void cargarJSON(string archivo)
    {
        std::ifstream i(archivo);
        json j;
        i >> j;

        for (auto &fila : j.items())
        {
            int numFila = stoi(fila.key());
            for (auto &celda : fila.value().items())
            {
                int numColumna = celda.key()[0] - 'A' + 1;
                string valor = celda.value();
                insertarCelda(numFila, numColumna, valor);
            }
        }
    }
};

int main()
{
    HojaCalculo hoja;
    int opcion;
    string valor;
string archivo;
    do
    {
        cout << endl;
        hoja.mostrarCeldaActual();
        cout << endl;
        cout << "1. Mostrar hoja de c lculo" << endl;
        cout << "2. Mostrar celda actual" << endl;
        cout << "3. Modificar celda actual" << endl;
        cout << "4. Mover celda arriba" << endl;
        cout << "5. Mover celda abajo" << endl;
        cout << "6. Mover celda izquierda" << endl;
        cout << "7. Mover celda derecha" << endl;
        cout << "8. Copiar celda" << endl;
        cout << "9. Pegar celda" << endl;
        cout << "10. Cortar celda" << endl;
        cout << "11. Saltar celda" << endl;
        cout << "12. Agregar Columna" << endl;
        cout << "13. Agregar Fila" << endl;
        cout << "14. Exportar como JSON" << endl;
        cout << "15. Cargar desde un archivo JSON" << endl;

        cout << "0. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            hoja.mostrar();
            break;
        case 2:
            hoja.mostrarCeldaActual();
            break;
        case 3:
            cout << "Ingrese el nuevo valor de la celda: ";
            cin >> valor;
            hoja.modificarCelda(valor);
            break;
        case 4:
            hoja.moverCeldaArriba();
            break;
        case 5:
            hoja.moverCeldaAbajo();
            break;
        case 6:
            hoja.moverCeldaIzquierda();
            break;
        case 7:
            hoja.moverCeldaDerecha();
            break;
        case 8:
            hoja.copiarCelda();
            break;
        case 9:
            hoja.pegarCelda();
            break;
        case 10:
            hoja.cortarCelda();
            break;
        case 11:
            hoja.saltarCelda();
            break;
        case 12:
            hoja.agregarColumna();
            break;
        case 13:
            hoja.agregarFila();
            break;
        case 14:
            hoja.exportarJSON();
            break;
        case 15:
            
            cout << "Ingrese el nombre del archivo: ";
            cin >> archivo;
            hoja.cargarJSON(archivo);
            break;

        case 0:
            cout << " Hasta luego!" << endl;
            break;
        default:
            cout << "Opci n inv lida. Intente de nuevo." << endl;
            break;
        }
    } while (opcion != 0);

    return 0;
}