/*
Clase administrador
Autor: Jaime Lorenzo Sanchez
*/

#ifndef ADMINISTRADOR_HPP
#define ADMINISTRADOR_HPP
#include "cliente.hpp"

class ADMINISTRADOR: public CLIENTE{
    private:
    string rolAdministrador; // Rol del administrador
    public:
    // Constructor de clase vacio
    ADMINISTRADOR(){}
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
    // Funcion que muestra los datos de un administrador
    void mostrarAdministrador(ADMINISTRADOR administrador);
    // Funcion que muestra los administradores registrados en el sistema
    void mostrarAdministradores(std::vector<ADMINISTRADOR> administradores);
    // Funcion que modifica los datos de un administrador
    void modificarAdministrador(ADMINISTRADOR administrador, std::vector<ADMINISTRADOR> &administradores);
    // Funcion que registra los datos de un administrador
    void registrarAdministrador(ADMINISTRADOR administrador, std::vector<ADMINISTRADOR> &administradores);
    // Funcion que elimina los datos de un administrador
    void eliminarAdministrador(string dni,std::vector<ADMINISTRADOR> &administradores);
};

#endif