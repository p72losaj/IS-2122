#include <iostream>

#include "MainProgram.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

#include "usuario.hpp"
#include "administrador.hpp"
#include "funcionalidades.hpp"

int main(){
    int opcion = -1; 
    // Vector de usuarios
    std::vector<USUARIO> usuarios;
    // Vector de administradores
    std::vector<ADMINISTRADOR> administradores;
    USUARIO usuario; // Usuario que ha accedido al sistema
    ADMINISTRADOR administrador;
    // Lectura de los usuarios registrados en el sistema
    string ficheroAdministradores = "../../ficheros/administradores.txt";
    string ficheroUsuarios = "../../ficheros/usuarios.txt";
    leerAdministradores(ficheroAdministradores,administradores);
    // Acceso al sistema
    int acceso = accederSistema(usuarios,administradores,usuario,administrador);
    if(acceso == 0){
        cout << "Error al acceder al sistema"<<endl;
    }
    // Funcionalidades de usuario
    else if(acceso == 1){
        
    }
    // Funcionalidades de administrador
    else{
        FuncionalidadesAdministrador(administrador,administradores,usuarios,ficheroAdministradores,ficheroUsuarios);
    }

}

