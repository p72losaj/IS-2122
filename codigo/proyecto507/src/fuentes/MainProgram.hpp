/*
Declaracion de las funcionalidades del menu principal
Autor: Jaime Lorenzo Sanchez
*/

#ifndef MAINPROGRAM_HPP
#define MAINPROGRAM_HPP
#include <vector>
#include "usuario.hpp"
#include "administrador.hpp"
using namespace std;

// Menu con las funcionalidades implementadas
void menuPrincipal();

// Menu de los tipos de usuario
void menuTipoUsuario();

// Funcion que escribe los usuarios en un fichero de texto
void escribirUsuarios(string nombreFichero, std::vector<USUARIO> usuarios);

// Funcion que obtiene los usuarios de un fichero de texto
void leerUsuarios(string nombreFichero,std::vector<USUARIO> &usuarios);

// Funcion que escribe los administradores en un fichero de texto
void escribirAdministradores(string nombreFichero,std::vector<ADMINISTRADOR> administradores);

// Funcion que obtiene los administradores registrados en un fichero de texto
void leerAdministradores(string nombreFichero, std::vector<ADMINISTRADOR> administradores);
#endif