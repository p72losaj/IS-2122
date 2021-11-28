/*
    Fichero con las declaraciones de las funcionalidades de los clientes
*/

#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;
// Clase cliente

class CLIENTE{
    private: 
        string nombre; // Nombre del cliente
        string email; // email del cliente
        string dni; // dni del cliente
        string contrasena; // contrasena del usuario
        string tipoCliente; // Tipo del cliente
        int nucleosReservables = 0; // Numero de núcleos de máquina reservables al mismo tiempo
        int tiempoReserva = 0; // tiempo maximo de reserva en dias
    public:
        CLIENTE(){}
        inline string getNombre(){ return this->nombre;}
        inline void setNombre(string nombre){ this->nombre = nombre;}
        inline string getEmail(){ return this->email;}
        inline void setEmail(string email){ this->email = email;}
        inline string getDni(){ return this->dni;}
        inline void setDni(string dni){ this -> dni = dni;}
        inline string getContrasena(){ return this->contrasena;}
        inline void setContrasena(string contrasena){ this->contrasena = contrasena;}
        inline string getTipoCliente(){ return this->tipoCliente;}
        inline void setTipoCliente(string tipo){ this->tipoCliente = tipo;}
        inline int getNucleosCliente(){ return this->nucleosReservables;}
        inline void setNucleosCliente(int nucleos){ this->nucleosReservables = nucleos;}
        inline int getTiempoReserva(){ return this->tiempoReserva;}
        inline void setTiempoReserva(int limite){ this->tiempoReserva = limite;}
};


#endif