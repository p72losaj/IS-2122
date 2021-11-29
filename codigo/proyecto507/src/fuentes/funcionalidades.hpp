/*
Declaracion de las funcionalidades
Autor: Jaime Lorenzo Sanchez*/

#ifndef FUNCIONALIDADES_HPP
#define FUNCIONALIDADES_HPP
#include <string>
#include <vector>
#include "administrador.hpp"
#include "usuario.hpp"
using namespace std;

int accederSistema(std::vector<USUARIO> usuarios,std::vector<ADMINISTRADOR> administradores,USUARIO &usuario,ADMINISTRADOR &administrador);


#endif