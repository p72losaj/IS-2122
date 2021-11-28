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

class USUARIO: public Cliente{
    public:
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
    // Funcion que modifica los datos personales del usuario
    void modificarUsuario(USUARIO &usuario);
};

#endif