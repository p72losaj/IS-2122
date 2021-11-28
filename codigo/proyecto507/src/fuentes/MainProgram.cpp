#include <iostream>

#include "MainProgram.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
#include "usuario.hpp"
#include "administrador.hpp"

int main(){
    int opcion = -1; 
    // Vector de usuarios
    std::vector<USUARIO> usuarios;
    // Vector de administradores
    std::vector<ADMINISTRADOR> administradores;
    // Lectura de los usuarios registrados en el sistema
    leerAdministradores("../../ficheros/administradores.txt",administradores);
    for(int i=0; i < administradores.size(); i++){
        cout << administradores[i].getNombre()<<","<<
            administradores[i].getEmail()<<","<<administradores[i].getContrasena()<<","<<
            administradores[i].getTipoCliente()<<","<<administradores[i].getNucleosCliente()
            <<","<<administradores[i].getTiempoReserva()<<","<<administradores[i].getRol()<<endl;
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

void leerAdministradores(string nombreFichero,std::vector<ADMINISTRADOR> &administradores){
    ADMINISTRADOR administrador; // Clase divisa
    ifstream fichero;
    fichero.open(nombreFichero.c_str(),ios::in);
    string cadena;
    int valor = 0;
    if(fichero.is_open()){
        while(!fichero.eof()){
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
            if(administrador.getNombre() != "usuarios"){
                // Anadimos los datos del administrador
                administradores.push_back(administrador);
            }
        }
    }
    else{
        cout << "Fichero" << nombreFichero << " no encontrado" << endl;   
    }
}