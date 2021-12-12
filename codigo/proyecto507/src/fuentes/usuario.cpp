/*
Funcionalidades de usuario
Autor: Jaime Lorenzo Sanchez
*/

#include "usuario.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <string>
#include <vector>

#include <fstream>

using namespace std;

// Funcion que lee los datos de los usuarios registrados en el sistema

bool leerUsuarios(string nombreFichero,std::vector<USUARIO> &usuarios){
    bool lectura = true;
    // Abrimos el fichero de texto en formato de lectura
    ifstream fichero;
    fichero.open(nombreFichero.c_str(),ios::in);
    string cadena;
    int valor = 0;
    // Fichero abierto
    if(fichero.is_open()){
        // Leemos las lineas del fichero de texto
        while(!fichero.eof()){
            // Creamos un usuario vacio
            USUARIO usuario; 
            // dni del usuario
            fichero >> cadena;
            usuario.setDni(cadena);
            // Nombre del usuario
            fichero >> cadena;
            usuario.setNombre(cadena);
            // email del administrador
            fichero >> cadena;
            usuario.setEmail(cadena);
            // Contrasena del administrador
            fichero >> cadena;
            usuario.setContrasena(cadena);
            // Tipo de cliente
            fichero >> cadena;
            usuario.setTipoCliente(cadena);
            // Numero de nucleos reservables al mismo tiempo
            fichero >> valor;
            usuario.setNucleosCliente(valor);
            // Tiempo de reserva limite del cliente
            fichero >> valor;
            usuario.setTiempoReserva(valor);
            // Anadimos el usuario a la lista de usuarios
            usuarios.push_back(usuario);
        }   

    }
    // Fichero no abierto
    else{lectura = false;}
    return lectura;
}

bool registrarUsuario(USUARIO usuario,string nombreFichero){
    bool registro = true;
    // Leemos los datos de los usuarios registrados en el fichero de usuarios
    std::vector<USUARIO> usuarios;
    if(!leerUsuarios(nombreFichero,usuarios)){registro = false;}
    else{
        // Comprobamos si el usuario ya esta registrado
        for(int i=0; i < usuarios.size(); i++){
            // Usuario ya registrado
            if(usuarios[i].getDni() == usuario.getDni()){
                registro = false;
            }
        }
    }
    if(registro == true){
        // Abrimos el fichero de usuarios en formato adicion
        ofstream fichero;
        fichero.open(nombreFichero.c_str(), ios::app);
        // Fichero abierto
        if(fichero.is_open()){
            if(usuarios.size() != 0){
                // Escribimos en la siguiente linea 
                fichero << endl;
            }
            // dni del usuario
            fichero << usuario.getDni() << " ";
            // Nombre del usuario
            fichero << usuario.getNombre() << " ";
            // email del usuario
            fichero << usuario.getEmail() << " ";
            // Contrasena del usuario
            fichero << usuario.getContrasena() << " ";
            // Tipo de cliente
            fichero << usuario.getTipoCliente() << " ";
            // Numero de nucleos reservables al mismo tiempo del usuario
            fichero << usuario.getNucleosCliente() << " ";
            // Tiempo de reserva limite del usuario
            fichero << usuario.getTiempoReserva() << " ";
        }
        // Error: Fichero no abierto
        else{registro = false;}
        // Cerramos el fichero de texto
        fichero.close();
    }
    return registro;
}

