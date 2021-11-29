/*
Implementacion de las funcionalidades del sistema
Autor: Jaime Lorenzo Sanchez*/

#include "funcionalidades.hpp"
#include "administrador.hpp"
#include "usuario.hpp"

#include <string.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <iostream>

using namespace std;

int accederSistema(std::vector<USUARIO> usuarios,std::vector<ADMINISTRADOR> administradores,USUARIO &usuario,ADMINISTRADOR &administrador){
    string dni;
    string contrasena;
    // Dni de acceso
    cout << "Introduce tu dni: ";
    cin >> dni;
    // Busqueda en vector usuarios
    for(int i=0; i < usuarios.size(); i++){
        // dni encontrado
        if(usuarios[i].getDni() == dni){
            cout << "Introduce tu contrasena de usuario: ";
            cin >> contrasena;
            if(usuarios[i].getContrasena() == contrasena){
                usuario.setNombre(usuarios[i].getNombre());
                usuario.setContrasena(usuarios[i].getContrasena());
                usuario.setDni(usuarios[i].getDni());
                usuario.setEmail(usuarios[i].getEmail());
                usuario.setNucleosCliente(usuarios[i].getNucleosCliente());
                usuario.setTiempoReserva(usuarios[i].getTiempoReserva());
                usuario.setTipoCliente(usuarios[i].getTipoCliente());
                return 1;
            }
        }
    }
    // Busqueda vector administradores
    for(int i=0; i < administradores.size(); i++){
        // dni encontrado
        if(administradores[i].getDni() == dni){
            cout << "Introduce tu contrasena de administrador: ";
            cin >> contrasena;
            if(administradores[i].getContrasena() == contrasena){
                administrador.setNombre(administradores[i].getNombre());
                administrador.setContrasena(administradores[i].getContrasena());
                administrador.setDni(administradores[i].getDni());
                administrador.setEmail(administradores[i].getEmail());
                administrador.setNucleosCliente(administradores[i].getNucleosCliente());
                administrador.setTiempoReserva(administradores[i].getTiempoReserva());
                administrador.setTipoCliente(administradores[i].getTipoCliente());
                administrador.setRol(administradores[i].getRol());
                return 2;
            }
        }
    }
    return 0;
}

