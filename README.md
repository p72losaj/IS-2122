# IS-2122
Proyecto de IS

# Problema

1- Sistema de Gestion de los recursos informaticos para tareas de investigacion

2-Realizar reservas de maquinas y sus recursos para la ejecucion de experimentos, de modo que se tenga una planificacion

y distribucion justa de dichos recursos entre todos los usuarios.

###############################

# Requisitos del sistema

1-Funcionales:  Expresan qué debe hacer el sistema; cómo debe reaccionar ante ciertas entradas.

Los requisitos funcionales obtenidos son los siguientes:

###############################

NUEVO EN LA PRACTICA3

RF1) El usuario debe ser capaz de realizar la reserva de cualquier máquina y sus núcleos.

RF2) El usuario debe ser capaz de modificar los datos de cualquiera de sus reservas.

RF3) El usuario debe ser capaz de obtener una lista con la información de todas sus reservas.

RF4) El usuario debe ser capaz de cancelar cualquiera de sus reservas.

RF5) El usuario debe ser capaz de obtener la información de cualquiera de sus reservas.

RF6) El usuario debe ser capaz de reservar una máquina en cualquier fecha.

RF7) El usuario debe ser capaz de obtener la información de las máquinas con recursos disponibles

RF8) El usuario debe ser capaz de obtener la información de cualquier máquina registrada en el sistema.

RF9) El usuario debe ser capaz de obtener una lista con la información de todas las máquinas registradas en el sistema

RF10) El usuario debe ser capaz de obtener toda su información personal.

RF11) El usuario debe ser capaz de obtener la información de contacto de cualquier administrador del sistema.

RF12) Cualquier administrador debe ser capaz de modificar los datos de cualquier reserva.

RF13) Cualquier administrador debe ser capaz de cancelar cualquier reserva.

RF14) Cualquier administrador debe ser capaz de obtener una lista con la informacion de todas las reservas registradas en el sistema.

RF15) Cualquier administrador debe ser capaz de obtener la informacion de una reserva concreta.

RF16) El administrador con rol de gestión de máquinas debe ser capaz de dar de alta a cualquier máquina.

RF17) El administrador con rol de gestión de máquinas debe ser capaz de obtener una lista con la información de todas las maquinas registradas

RF18) El administrador con rol de gestión de máquinas debe ser capaz de obtener la informacion de una maquina concreta

RF19) El administrador con rol de gestión de máquinas debe ser capaz de modificar los datos de cualquier máquina registrada

RF20) El administrador con rol de gestión de máquina debe ser capaz de eliminar cualquier maquina registrada

RF21) El administrador con rol de gestion de usuarios debe ser capaz de registrar los datos de cualquier usuario en el sistema

RF22) El administrador con rol de gestion de usuarios debe ser capaz de obtener una lista con los datos de todos los usuarios registrados

RF23) El administrador con rol de gestion de usuarios debe ser capaz de obtener la informacion de cualquier usuario registrado en el sistema.

RF24) El administrador con rol de gestion de usuarios debe ser capaz de modificar los datos de cualquier usuario.

RF25) El administrador con rol de gestion de usuarios debe ser capaz de eliminar a cualquier usuario registrado

###############################

2- Información: Detallan la información que necesita manejar el sistema y cómo se organiza.

Los requisitos de informacion obtenidos son los siguientes:

###############################

NUEVO EN PRACTICA3

RI1) El sistema debe almacenar información sobre el usuario que ha realizado la reserva, la máquina que se ha reservado, el número de recursos de la máquina reservados y la fecha de reserva.

RI2)  El sistema debe almacenar la siguiente información personal del usuario espectador: Nombre,email,DNI, tipo de usuario, numero de núcleos que puede reservar al mismo tiempo, l�mite de tiempo de las reservas.

RI3)  El sistema debe almacenar la siguiente informacion de una maquina: identificador de la maquina y su numero de nucleos

RI4) El sistema debe almacenar la siguiente informacion de los administradores: Nombre,email,DNI,tipo de usuario, rol de administrador,  numero de núcleos que puede reservar al mismo tiempo, l�mite de tiempo de las reservas.

RI5) El sistema debe almacenar la siguiente informaciñon de una reseva: Identificador de la reserva, identificador de la máquina, dni del usuario que ha realizado la reserva y la fecha l�mite de la reserva

###############################

3- No funcionales: Expresan cómo debe comportarse el programa

+ Indican restricciones al sistema que pueden afectar a la calidad del servicio

+  Pueden hacer referencia a consideraciones sobre el desarrollo del sistema

Los requisitos no funcionales obtenidos son los siguientes:

###############################

NUEVO EN PRACTICA3

RN1)  En caso de caida, debe solucionarse el problema en un tiempo máximo de 10/15 minutos.

RN2)  Un usuario no puede reservar si se supera su limite (numero de nucleos a reservar de una maquina al mismo tiempo no supera un maximo y el limite de tiempo de una reserva no supera un maximo ) o si la maquina no tiene recursos suficientes para el proyecto del usuario.

RN3)  El sistema debe registrar 2 tipos de usuarios: usuario normal y usuario administrador

RN4)  El sistema debe comprobar que el usuario y la maquina son unicos ( no deben repetirse).

RN5)  El lenguaje de programacion sera c++

RN6) El sistema debe registrar 2 tipos de administradores: administrador de usuarios y administrador de maquinas

RN7) El sistema debe recomendar al usuario, en caso de que una maquina no disponga de recursos disponibles, al menos una maquina con recursos disponibles.

###############################

HISTORIAS DE USUARIO

###############################

NUEVO EN PRACTICA3

############# GESTION DE MAQUINAS ################## 

HU1) Como usuario, quiero disponer de un formulario para poder reservar una maquina y sus nucleos en cualquier fecha.

HU2) Como administrador, quiero disponer de un formulario para poder reservar una maquina y sus nucleos en cualquier fecha.

HU3) Como usuario, quiero disponer de un formulario para poder modificar los datos de una reserva.

HU4) Como administrador, quiero disponer de un formulario para poder modificar los datos de una reserva.

HU5) Como usuario, quiero disponer de una lista de mis reservas para poder comprobar la informacion de las maquinas que tengo reservadas.

HU6) Como administrador, quiero ser capaz de obtener una lista de reservas para poder comprobar las reservas registradas en el sistema.

HU7) Como usuario, quiero cancelar una reserva para indicar la finalizacion del uso de una maquina que tengo reservada.

HU8) Como administrador, quiero cancelar una reserva para finalizar el uso de una maquina por parte de un usuario.

############################################



HU5) Como usuario, quiero disponer de toda la informacion sobre una reserva para comprobar la informacion almacenada de dicha reserva.

HU6) Como usuario, quiero ser capaz de obtener una lista de máquinas con recursos disponibles para comprobar cuales máquinas tienen recursos disponibles.

HU7) Como usuario, quiero ser capaz de obtener la información de una máquina para poder comprobar la información de la máquina.

HU8) Como usuario, quiero disponer de una lista de máquinas para obtener la información de todas las máquinas registradas en el sistema.

HU9) Como usuario, quiero ser capaz de obtener mi información personal para poder comprobar si mis datos registrados en el sistema son correctos.

HU10) Como usuario, quiero ser capaz de obtener la información de contacto de cualquier administrador del sistema para poder contactar con 
cualquier administrador.

HU11) Como administrador, quiero ser capaz de obtener los datos de una reserva para poder comprobar los datos de una reserva.

HU12) Como administrador, quiero ser capaz de obtener los datos de una reserva para poder modificar los datos de la reserva.

HU15) Como administrador con rol de gestión de máquinas, quiero ser capaz de obtener una lista de máquinas registradas para poder dar de alta a 
cualquier máquina.

HU16) Como administrador con rol de gestión de máquinas, quiero ser capaz de obtener una lista de máquinas registradas para poder comprobar las máquinas registradas en el sistema.

HU17) Como administrador con rol de gestión de máquinas, quiero ser capaz de obtener la información de una máquina para poder comprobar los datos de dicha máquina.

HU18) Como administrador con rol de gestión de máquinas, quiero ser capaz de obtener la información de una máquina para poder modificar los datos de dicha máquina.

HU19) Como administrador con rol de gestión de máquinas, quiero ser capaz de obtener una lista de máquinas registradas para poder eliminar la máquina del sistema.

HU20) Como administrador con rol de gestión de usuarios, quiero ser capaz de obtener un formulario de registro de usuario para poder registrar un nuevo usuario en el sistema.

HU21) Como administrador con rol de gestión de usuarios, quiero ser capaz de disponer de una lista de usuarios para comprobar los usuarios registrados en el sistema.

HU22) Como administrador con rol de gestión de usuarios, quiero disponer de la información de un usuario para poder comprobar los datos personales de un usuario.

HU23) Como administrador con rol de gestión de usuarios, quiero disponer de la información de un usuario para poder modificar los datos personales de un usuario.

HU24) Como administrador con rol de gestión de usuarios, quiero disponer de una lista de usuarios para poder eliminar a un usuario registrado del sistema.

###############################

CASOS DE USO

CU1: MostrarInformacionMaquina (usuario)

CU2: ModificarDatosMaquina (Administrador)

CU3: ListaMaquinasReservadasUsuario
 (usuario)

CU4: ListaReservasUsuario (usuario)

CU5: RealizarReserva (usuario)

CU6: ListaMaquinasLibres (usuario)

CU7: MostrarInformacionPersonalUsuario (administrador)

CU8: ModificarDatosUsuario (usuario)

CU9: MostrarReservaUsuario

CU10: ModificarReservaUsuario (usuario+administrador)

CU11: MostrarInformacionAdministrador (usuario)

CU12:  CancelarReserva (usuario/administrador)

CU13:  RegistrarUsuario (usuario/administrador)

CU14:  ListaUsuariosRegistrados (administrador)

CU15: ListaMaquinasRegistradas (usuario/administrador)

CU16: ListaReservasRegistradas (administrador)

CU17:  RegistrarMaquina (administrador)

CU18: EliminarMaquina (administrador)

#########################################################################################################################################

DIAGRAMA DE CLASES

TIPOS DE RELACIONES ENTRE CLASES

1. Asociación: Es una conexión funcional y de comunicación entre clases. Suele indicar la cardinalidad.
2. Dependencia: Tipo de asociación donde una clase utiliza otra clase, y la definición de una clase se ve influenciada por los cambios en la otra.
3. Herencia: Representan una relación entre una clase “padre�? y una o varias clases “hijas�?.
4. Realización: Indica cómo se debe realizar una implementación de una interfaz.
5. Agregación: Indica que una clase es parte de otra, pero tienen diferentes l�neas de vida.
6. Composición: Agregación donde la clase que forma parte de la otra no puede existir por s� misma.

###################################################################################################

MATRICES DE TRAZABILIDAD

TIPOS DE MATRICES

1. Requisitos funcionales frente a casos de uso

a) Cada requisito debe estar cubierto, como m�nimo, por un caso de uso.

b) Todo caso de uso debe dar respuesta a uno o más requisitos

c) Recomendación: realizarla al comienzo de la práctica, para as� poder refinar los casos de uso en caso de ser necesario.

2. Casos de uso frente a clases.

a) Cada clase debe tener correspondencia con uno o varios casos de uso

b) Todo caso de uso debe tener al menos una clase asociada

c) Recomendación: realizarla tras terminar el diagrama de clases.

#####################################################################################################

DIAGRAMAS DE SECUENCIA

1. ELEMENTOS

a) Actor: Agente externo que participa en la interacción

b) L�nea de vida:  Indica la presencia (o no) del objeto. El periodo durante el cual el objeto está activo se denomina “activación�?

c) Mensaje: Comunicación entre dos l�neas de vida. Deben ir numerados. 

2. TIPOS DE BLOQUES

a) Loop: Fragmento que se ejecuta varias veces

b) Alt: Secuencias alternativas, se ejecuta la que cumple la condición.

c) Opt: Fragmento opcional que se ejecuta solo si se cumple la condición.

