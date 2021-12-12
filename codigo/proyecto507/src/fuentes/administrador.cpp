/*
Implementacion funciones de administrador
Autor: Jaime Lorenzo Sanchez 
*/

#include "administrador.hpp"
#include "usuario.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <string>
#include <vector>

#include <fstream>

using namespace std;

void FuncionalidadesAdministrador(ADMINISTRADOR &administrador,string ficheroAdministradores,string ficheroUsuarios){
    // Mostramos el menu de funcionalidades implementadas
    int opcion = -1;
    while(opcion != 0){
        menuFuncionalidadesAdministrador();
        cout << "Introduce una opcion: ";
        cin >> opcion;
        // Registro de cliente
        if(opcion == 1 && administrador.getRol() == "gestorUsuarios"){
            // Nombre del cliente
            string nombre;
            cout << "Introduce el nombre del cliente: ";
            cin >> nombre;
            // Email del cliente
            string email;
            cout << "Introduce el email del cliente: ";
            cin >> email;
            // DNI del cliente
            string dni;
            cout << "Introduce el dni del cliente: ";
            cin >> dni;
            // CONTRASENA DEL CLIENTE
            string contrasena;
            cout << "Introduce una contrasena: ";
            cin >> contrasena;
            // Numero de nucleos reservables del cliente
            int nucleos;
            cout << "Introduce el numero de nucleos de maquina reservables al mismo tiempo del usuario: ";
            cin >> nucleos;
            // Limite de reservas
            int limite;
            cout << "Introduce el limite de tiempo de reserva del usuario en dias: ";
            cin >> limite;
            // TIPOS DE USUARIOS    
            menuClientes();
            int tipoCliente = 0;
            cout << "Introduce un tipo de cliente (1 o 2): ";       
            cin >> tipoCliente;
            if(tipoCliente == 1){
                // Creamos un usuario
                USUARIO usuario(nombre,email,contrasena,dni,"usuario",nucleos,limite);
                // Registramos los datos del usuario
                if(registrarUsuario(usuario,ficheroUsuarios)){
                    cout << "Usuario registrado"<<endl;
                }
                // Caso de error: Usuario no registrado
                else{cout << "Usuario no registrado"<<endl; }
                
            }
            else if(tipoCliente == 2){
                // Creamos el nuevo administrador
                ADMINISTRADOR admin(nombre,email,contrasena,dni,"administrador",nucleos,limite);
                // Obtenemos el rol del nuevo administrador
                int rolAdmin;
                cout << "Introduce el rol de administrador \n1-Maquinas\t2-Usuarios: ";
                cin >> rolAdmin;
                // Rol de maquinas
                if(rolAdmin==1){admin.setRol("gestorMaquinas");}
                // Rol de usuario
                else if(rolAdmin == 2){admin.setRol("gestorUsuarios");}
                if(registrarAdministrador(admin,ficheroAdministradores)){
                    cout << "Administrador registrado"<<endl;
                }                 
            }
            else{cout << "Tipo de cliente no valido"<<endl;}
        }       
        else if(opcion == 1 && administrador.getRol() != "gestorUsuarios"){cout << "No tienes permiso de registro de un cliente" << endl;}
        // Listar clientes
    }
}

bool registrarAdministrador(ADMINISTRADOR administrador,string nombrefichero){
    bool registro = true;
    // Leemos los datos de los administradores registrados en el fichero de administradores
    std::vector<ADMINISTRADOR> administradores;
    leerAdministradores(nombrefichero,administradores);
    // Comprobamos si el administrador esta ya registrado
    for(int i=0; i < administradores.size(); i++){
        // Error: Administrador ya registrado
        if(administradores[i].getDni() == administrador.getDni()){registro = false;}
    }
    ofstream fichero;
    // Abrimos el fichero
    fichero.open(nombrefichero.c_str(), ios::app);
    if(fichero.is_open()){
        if(administradores.size() != 0){
            // Escribimos en la siguiente linea 
            fichero << endl;
        }
        fichero << administrador.getDni() << " ";
        fichero << administrador.getNombre() << " ";
        fichero << administrador.getEmail()<< " ";
        fichero << administrador.getContrasena()<< " ";
        fichero << administrador.getTipoCliente()<< " ";
        fichero << administrador.getNucleosCliente()<< " ";
        fichero << administrador.getTiempoReserva()<< " ";
        fichero << administrador.getRol();               
    }
    else{registro = false;}
    fichero.close();
    return registro;
}

void menuFuncionalidadesAdministrador(){
    cout << "######################"<<endl;
    cout << "MENU DE FUNCIONALIDADES DEL ADMINISTRADOR" << endl;
    cout << "0. Salir del sistema" << endl;
    cout << "1. Registrar un cliente" << endl;
}


void leerAdministradores(string nombreFichero,std::vector<ADMINISTRADOR> &administradores){
    ifstream fichero;
    fichero.open(nombreFichero.c_str(),ios::in);
    string cadena;
    int valor = 0;
    if(fichero.is_open()){
        while(!fichero.eof()){
        ADMINISTRADOR administrador; // Clase administrador
        // dni del administrador
        fichero >> cadena;
        administrador.setDni(cadena);
        // Nombre del administrador    
        fichero >> cadena;
        administrador.setNombre(cadena);
        // email del administrador
        fichero >> cadena;
        administrador.setEmail(cadena);
        // Contrasena del administrador
        fichero >> cadena;
        administrador.setContrasena(cadena);
        // Tipo de cliente
        fichero >> cadena;
        administrador.setTipoCliente(cadena);
        // Numero de nucleos reservables al mismo tiempo
        fichero >> valor;
        administrador.setNucleosCliente(valor);
        // Tiempo de reserva limite del cliente
        fichero >> valor;
        administrador.setTiempoReserva(valor);
        // Rol del administrador
        fichero >> cadena;
        administrador.setRol(cadena);
        // Anadimos el administrador al vector de administradores
        administradores.push_back(administrador);
        }   

    }
    else{
        cout << "Se ha producido un error al leer el fichero de propiedades"<<endl;
    }
}

void menuClientes(){
    cout << "######################"<<endl;
    cout << "TIPOS DE CLIENTES"<<endl;
    cout << "1. USUARIO"<<endl;
    cout << "2. ADMINISTRADOR" << endl;
}