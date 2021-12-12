#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "assert.h"
#include "../fuentes/usuario.hpp"
#include "../fuentes/usuario.cpp"
#include "../fuentes/administrador.hpp"
#include "../fuentes/administrador.cpp"


void testRegistroUsuario(USUARIO usuario){
    bool exito =  registrarUsuario(usuario,"../usuarios.txt");
    assert (exito == true);
    cout << "Test Registro usuario: " << exito << endl;
}

void testRegistroAdministrador(ADMINISTRADOR administrador){
    bool exito = registrarAdministrador(administrador,"../administradores.txt");
    assert (exito == true);
    cout << "Test Registro administrador: " << exito << endl;
}

int main(){
    std::cout << "TESTS DE PRUEBAS UNITARIAS" << std::endl;
    // Creamos un usuario
    USUARIO usuario("nombre","email","contrasena","dni","usuario",0,0);
    // Creamos un administrador
    ADMINISTRADOR administrador("nombre","email","contrasena","dni","administrador",4,16);
    administrador.setRol("usuarios");
    // Prueba unitaria para registrar usuario
    //testRegistroUsuario(usuario);
    // Prueba unitaria para registrar un administrador
    testRegistroAdministrador(administrador);
}