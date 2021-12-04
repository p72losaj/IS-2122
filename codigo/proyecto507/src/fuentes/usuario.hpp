/*
Clase USUARIO
Autor: Jaime Lorenzo Sanchez
*/
#ifndef USUARIO_HPP
#define USUARIO_HPP
#include <stdio.h>
#include <string>
#include <vector>
#include "cliente.hpp"
using namespace std;

class USUARIO: public CLIENTE{
    public:
    // CONSTRUCTOR DE CLASE VACIO
    USUARIO(){};
    // Constructor de clase
    USUARIO(string nombre, string email,string contrasena, string dni,string tipo, int nucleos, int limite){
        this->setNombre(nombre);
        this->setEmail(email);
        this->setContrasena(contrasena);
        this->setDni(dni);
        this->setTipoCliente(tipo);
        this->setNucleosCliente(nucleos);
        this->setTiempoReserva(limite);
    }
};

// Funcion que modifica los datos personales del usuario
void modificarUsuario();
// Funcion que muestra los datos de un usuario
void mostrarUsuario(USUARIO usuario);
// Funcion que muestra los datos de los usuarios registrados
void mostrarUsuarios();
// Funcion que registra los datos de un usuario
bool registrarUsuario(USUARIO usuario,string nombreFichero);
// Funcion que lee los datos de los usuarios registrados en el sistema
bool leerUsuarios(string nombreFichero,std::vector<USUARIO> &usuarios);

#endif