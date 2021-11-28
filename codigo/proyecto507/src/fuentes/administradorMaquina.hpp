/*
Biblioteca de la clase ADMINISTRADOR_MAQUINA
Autor: Jaime Lorenzo Sanchez
*/

#ifndef ADMINISTRADORMAQUINA_HPP
#define ADMINISTRADORMAQUINA_HPP
#include "administrador.hpp"
class ADMINISTRADOR_MAQUINA: public ADMINISTRADOR{
    private:

    public:
    // Constructor de clase
    ADMINISTRADOR_MAQUINA(string nombre,string email,string contrasena,string dni,string tipo, int nucleos,int limite):ADMINISTRADOR(nombre,email,contrasena,dni,tipo,nucleos,limite)
    {this->setRol("gestorMaquina");}
};
#endif