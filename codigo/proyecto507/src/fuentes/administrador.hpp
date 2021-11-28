/*
Clase administrador
Autor: Jaime Lorenzo Sanchez
*/

#ifndef ADMINISTRADOR_HPP
#define ADMINISTRADOR_HPP
#include "cliente.hpp"
class ADMINISTRADOR: public Cliente{
    private:
    string rolAdministrador; // Rol del administrador
    public:
    // Constructor de clase
    ADMINISTRADOR(string nombre,string email,string contrasena,string dni,string tipo, int nucleos,int limite){
        this->setNombre(nombre);
        this->setEmail(email);
        this->setContrasena(contrasena);
        this->setDni(dni);
        this->setTipoCliente(tipo);
        this->setNucleosCliente(nucleos);
        this->setTiempoReserva(limite);
    }
    inline string getRol(){ return this->rolAdministrador;}
    inline void setRol(string rol){ this->rolAdministrador = rol;}
};

#endif