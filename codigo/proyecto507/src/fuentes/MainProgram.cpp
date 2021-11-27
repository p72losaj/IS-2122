#include <iostream>

#include "MainProgram.hpp"

#include <string>
using namespace std;

int main(){
    int opcion = -1; 
    while(opcion != 0){
        menuPrincipal();
        cout << "Introduzca una opcion: ";
        cin >> opcion;
        // Registro de un cliente
        if(opcion == 1){
            // Nombre del cliente
            string nombre;
            cout << "Introduzca su nombre: ";
            cin >> nombre;
            // email del cliente
            string email;
            cout << "Introduzca su email: ";
            cin >> email;
            // Contrasena del cliente
            string contrasena;
            cout << "Introduzca su contrasena: ";
            cin >> contrasena;
            // Tipo del cliente
            string tipoCliente;
            menuTipoUsuario();
            cout << "Elige el tipo de usuario: "; 
            int opcionCliente;
            cin >> opcionCliente;
            // Cliente es un usuario
            if(opcionCliente == 1) tipoCliente = "usuario";
            else if(opcionCliente == 2) tipoCliente = "administrador";
            else cout << "Error: Tipo de usuario no valido" << endl;
            if(tipoCliente.size() != 0){
                // Numero de recursos del cliente
                int nucleos;
                cout << "Introduzca el numero de nucleos que puede reservar al mismo tiempo: ";
                cin >> nucleos;
                if(nucleos < 0) cerr << "Numero de nucleos no puede ser negativo" << endl;
            }
        }
        cout << "######################################" << endl;
    }
}

void menuTipoUsuario(){
    cout << "MENU DE TIPO DE USUARIO" << endl;
    cout << "1. Usuario" << endl;
    cout << "2. Administrador" << endl;
}

void menuPrincipal(){
    cout << "MENU DE FUNCIONALIDADES IMPLEMENTADAS" << endl;
    cout << "0. Salir del sistema" << endl;
    cout << "1. Registrar un cliente" << endl;
}