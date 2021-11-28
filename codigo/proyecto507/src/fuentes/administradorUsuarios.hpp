/*
Clase ADMINISTRADOR_USUARIOS
Autor: Jaime Lorenzo Sanchez
*/

#ifndef ADMINISTRADORUSUARIOS_HPP
#define ADMINISTRADORUSUARIOS_HPP
#include "administrador.hpp"
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class ADMINISTRADOR_USUARIOS: public ADMINISTRADOR{
    private:
    public:
    // Constructor de clase
    ADMINISTRADOR_USUARIOS(string nombre,string email,string contrasena,string dni,string tipo, int nucleos,int limite):ADMINISTRADOR(nombre,email,contrasena,dni,tipo,nucleos,limite)
    {this->setRol("gestorUsuarios");}
};

#endif