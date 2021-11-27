/*
    Fichero con las declaraciones de las funcionalidades de los clientes
*/

#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// Clase cliente

class Cliente{
    private: 
        string nombre; // Nombre del cliente
        string email; // email del cliente
        string dni; // dni del cliente
        string contrasena; // contrasena del usuario
        string tipoCliente; // Tipo del cliente
        int nucleosReservables = 0; // Numero de núcleos de máquina reservables al mismo tiempo
        int tiempoReserva = 0; // tiempo maximo de reserva en dias
    public:
        string getNombre(){ return this->nombre;}
        void setNombre(string nombre){ this->nombre = nombre;}
        string getEmail(){ return this->email;}
        void setEmail(string email){ this->email = email;}
        string getDni(){ return this->dni;}
        void setDni(string dni){ this -> dni = dni;}
        string getContrasena(){ return this->contrasena;}
        void setContrasena(string contrasena){ this->contrasena = contrasena;}
        string getTipoCliente(){ return this->tipoCliente;}
        void setTipoCliente(string tipo){ this->tipoCliente = tipo;}
        int getNucleosCliente(){ return this->nucleosReservables;}
        void setNucleosCliente(int nucleos){ this->nucleosReservables = nucleos;}
        int getTiempoReserva(){ return this->tiempoReserva;}
        void setTiempoReserva(int limite){ this->tiempoReserva = limite;}
        void mostrarCliente(string dni);
};


#endif