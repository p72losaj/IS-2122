/*
Declaraciones de las funcionalidades de administrador
Autor: Jaime Lorenzo Sanchez
*/

#ifndef ADMINISTRADOR_HPP
#define ADMINISTRADOR_HPP
#include "cliente.hpp"
#include "usuario.hpp"
#include <vector>
class ADMINISTRADOR: public CLIENTE{
    private:
    string rolAdministrador; // Rol del administrador
    public:
    // Constructor de clase vacio
    ADMINISTRADOR(){};
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
// Funcion que muestra los datos de un administrador
void mostrarAdministrador(ADMINISTRADOR administrador);
// Funcion que muestra los administradores registrados en el sistema
void mostrarAdministradores();
// Funcion que modifica los datos de un administrador
void modificarAdministrador(ADMINISTRADOR administrador);
// Funcion que elimina los datos de un administrador
void eliminarAdministrador(string dni);
// Funcion que registra los datos de un administrador
bool registrarAdministrador(ADMINISTRADOR administrador,string nombrefichero);
// Declaracion de las funcionalidades de administrador
void FuncionalidadesAdministrador(ADMINISTRADOR &administrador,string ficheroAdministradores,string ficheroUsuarios);
// Menu de funcionalidades de administrador
void menuFuncionalidadesAdministrador();
// TIPOS DE CLIENTES A REGISTRAR
void menuClientes();
// OBTENCION DE LOS ADMINISTRADORES
void leerAdministradores(string nombreFichero,std::vector<ADMINISTRADOR> &administradores);
#endif