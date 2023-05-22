#include <iostream>
#include <conio.h>
#include <windows.h>

class Cell {
public:
    std::string data;

    Cell() : data("") {}
};

class Node {
public:
    Cell cell;
    Node* prev;
    Node* next;

    Node() : prev(nullptr), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    Node* current;

public:
    LinkedList() : head(nullptr), current(nullptr) {}

    void insert(Cell cell) {
        Node* newNode = new Node();
        newNode->cell = cell;

        if (head == nullptr) {
            head = newNode;
            current = newNode;
        } else {
            Node* temp = current->next;

            current->next = newNode;
            newNode->prev = current;
            newNode->next = temp;

            if (temp != nullptr) {
                temp->prev = newNode;
            }

            current = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp == current) {
                std::cout << "[" << temp->cell.data << "]\t";
            } else {
                std::cout << temp->cell.data << "\t";
            }
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void moveLeft() {
        if (current->prev != nullptr) {
            current = current->prev;
        }
    }

    void moveRight() {
        if (current->next != nullptr) {
            current = current->next;
        }
    }

    void editCell() {
        std::cout << "Ingrese el nuevo valor: ";
        std::getline(std::cin, current->cell.data);
    }
};

int main() {
    LinkedList rows;
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));

    int key;

    while (true) {
        system("cls"); // Limpiar la pantalla
        rows.display();

        key = _getch(); // Leer una tecla

        if (key == 27) { // Tecla Esc (Salir)
            break;
        } else if (key == 224) { // Tecla de función especial
            key = _getch(); // Leer tecla de función

            if (key == 75) { // Flecha Izquierda
                rows.moveLeft();
            } else if (key == 77) { // Flecha Derecha
                rows.moveRight();
            }
        } else if (key == 13) { // Tecla Enter (Editar celda)
            rows.editCell();
        }
    }

    return 0;
}