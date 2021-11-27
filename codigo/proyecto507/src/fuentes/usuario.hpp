/*
Clase USUARIO
Autor: Jaime Lorenzo Sanchez
*/
#include <stdio.h>
#include <string>
#include <vector>
#include "cliente.hpp"
using namespace std;

class Usuario: public Cliente{
    public:
    // Constructor de clase
    Usuario(string nombre, string email,string contrasena, string dni,string tipo, int nucleos, int limite){
        this->setNombre(nombre);
        this->setEmail(email);
        this->setContrasena(contrasena);
        this->setDni(dni);
        this->setTipoCliente(tipo);
        this->setNucleosCliente(nucleos);
        this->setTiempoReserva(limite);
    }
    // Funcion que modifica los datos personales del usuario
    void modicarUsuario(Usuario usuario,std::vector<Usuario> &usuarios);
};