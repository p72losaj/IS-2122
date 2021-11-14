# IS-2122
Proyecto de IS

# Problema

1- Sistema de Gestion de los recursos informaticos para tareas de investigacion

2-Realizar reservas de maquinas y sus recursos para la ejecucion de experimentos, de modo que se tenga una planificacion

y distribucion justa de dichos recursos entre todos los usuarios.

###############################

# Requisitos del sistema

1-Funcionales:  Expresan que debe hacer el sistema; como debe reaccionar ante ciertas entradas.

Los requisitos funcionales obtenidos son los siguientes:

###############################

NUEVO EN LA PRACTICA3

RF1) El usuario debe ser capaz de realizar la reserva de cualquier maquina y sus nucleos.

RF2) El usuario debe ser capaz de modificar los datos de cualquiera de sus reservas.

RF3) El usuario debe ser capaz de obtener una lista con la informacion de todas sus reservas.

RF4) El usuario debe ser capaz de cancelar cualquiera de sus reservas.

RF5) El usuario debe ser capaz de obtener la informacion de cualquiera de sus reservas.

RF6) El usuario debe ser capaz de reservar una maquina en cualquier fecha.

RF7) El usuario debe ser capaz de obtener la informacion de las maquinas con recursos disponibles

RF8) El usuario debe ser capaz de obtener la informacin de cualquier maquina registrada en el sistema.

RF9) El usuario debe ser capaz de obtener una lista con la informacion de todas las maquinas registradas en el sistema

RF10) El usuario debe ser capaz de obtener toda su informacion personal.

RF11) El usuario debe ser capaz de obtener la informacion de contacto de cualquier administrador del sistema.

RF12) Cualquier administrador debe ser capaz de modificar los datos de cualquier reserva.

RF13) Cualquier administrador debe ser capaz de cancelar cualquier reserva.

RF14) Cualquier administrador debe ser capaz de obtener una lista con la informacion de todas las reservas registradas en el sistema.

RF15) Cualquier administrador debe ser capaz de obtener la informacion de una reserva concreta.

RF16) El administrador con rol de gestion de maquinas debe ser capaz de dar de alta a cualquier maquina.

RF17) El administrador con rol de gestion de maquinas debe ser capaz de obtener una lista con la informacion de todas las maquinas registradas

RF18) El administrador con rol de gestion de maquinas debe ser capaz de obtener la informacion de una maquina concreta

RF19) El administrador con rol de gestion de maquinas debe ser capaz de modificar los datos de cualquier maquina registrada

RF20) El administrador con rol de gestion de maquina debe ser capaz de eliminar cualquier maquina registrada

RF21) El administrador con rol de gestion de usuarios debe ser capaz de registrar los datos de cualquier usuario en el sistema

RF22) El administrador con rol de gestion de usuarios debe ser capaz de obtener una lista con los datos de todos los usuarios registrados

RF23) El administrador con rol de gestion de usuarios debe ser capaz de obtener la informacion de cualquier usuario registrado en el sistema.

RF24) El administrador con rol de gestion de usuarios debe ser capaz de modificar los datos de cualquier usuario.

RF25) El administrador con rol de gestion de usuarios debe ser capaz de eliminar a cualquier usuario registrado

###############################

2- Informacion: Detallan la informacion que necesita manejar el sistema y como se organiza.

Los requisitos de informacion obtenidos son los siguientes:

###############################

NUEVO EN PRACTICA3

RI1) El sistema debe almacenar informacion sobre el usuario que ha realizado la reserva, la maquina que se ha reservado, 
el numero de recursos de la m√°quina reservados y la fecha de reserva.

RI2)  El sistema debe almacenar la siguiente informacion personal del usuario espectador: Nombre,email,DNI, tipo de usuario, numero de nucleos
que puede reservar al mismo tiempo y limtite de tiempo de las reservas.

RI3)  El sistema debe almacenar la siguiente informacion de una maquina: identificador de la maquina y su numero de nucleos

RI4) El sistema debe almacenar la siguiente informacion de los administradores: Nombre,email,DNI,tipo de usuario, rol de administrador,  
numero de nucleos que puede reservar al mismo tiempo, limite de tiempo de las reservas.

RI5) El sistema debe almacenar la siguiente informacion de una reseva: Identificador de la reserva, identificador de la maquina,
dni del usuario que ha realizado la reserva y la fecha limite de la reserva.

###############################

3- No funcionales: Expresan como debe comportarse el programa

+ Indican restricciones al sistema que pueden afectar a la calidad del servicio

+  Pueden hacer referencia a consideraciones sobre el desarrollo del sistema

Los requisitos no funcionales obtenidos son los siguientes:

###############################

NUEVO EN PRACTICA3

RN1)  En caso de caida, debe solucionarse el problema en un tiempo maximo de 10/15 minutos.

RN2)  Un usuario no puede reservar si se supera su limite (numero de nucleos a reservar de una maquina al mismo tiempo no supera un maximo y 
el limite de tiempo de una reserva no supera un maximo ) o si la maquina no tiene recursos suficientes para el proyecto del usuario.

RN3)  El sistema debe registrar 2 tipos de usuarios: usuario normal y usuario administrador

RN4)  El sistema debe comprobar que el usuario y la maquina son unicos ( no deben repetirse).

RN5)  El lenguaje de programacion sera c++

RN6) El sistema debe registrar 2 tipos de administradores: administrador de usuarios y administrador de maquinas

RN7) El sistema debe recomendar al usuario, en caso de que una maquina no disponga de recursos disponibles, al menos una maquina con recursos disponibles.

###############################

HISTORIAS DE USUARIO

###############################

NUEVO EN PRACTICA3

############# GESTION DE RESERVAS ################## 

HU1) Como usuario, quiero disponer de un formulario para poder reservar una maquina y sus nucleos en cualquier fecha.

HU2) Como administrador, quiero disponer de un formulario para poder reservar una maquina y sus nucleos en cualquier fecha.

HU3) Como usuario, quiero disponer de un formulario para poder modificar los datos de una reserva.

HU4) Como administrador, quiero disponer de un formulario para poder modificar los datos de una reserva.

HU5) Como usuario, quiero disponer de una lista de mis reservas para poder comprobar la informacion de las maquinas que tengo reservadas.

HU6) Como administrador, quiero ser capaz de obtener una lista de reservas para poder comprobar las reservas registradas en el sistema.

HU7) Como usuario, quiero cancelar una reserva para indicar la finalizacion del uso de una maquina que tengo reservada.

HU8) Como administrador, quiero cancelar una reserva para finalizar el uso de una maquina por parte de un usuario.

HU9) Como usuario, quiero disponer de toda la informacion sobre una reserva para comprobar la informacion de mi reserva.

HU10) Como administrador, quiero ser capaz de obtener los datos de una reserva para poder comprobar los datos de una reserva.

############# GESTION DE MAQUINAS ################## 

HU11) Como usuario, quiero ser capaz de obtener la informacion de una maquina para poder comprobar la informacion de dicha maquina.

HU12) Como administrador con rol de gestion de maquinas, quiero ser capaz de obtener la informacion de una maquina para poder comprobar la informacion de dicha maquina.

HU13) Como usuario, quiero ser capaz de obtener una lista de maquinas con recursos disponibles para comprobar las maquinas con recursos disponibles.

HU14) Como administrador con rol de gestion de maquinas, quiero ser capaz de obtener una lista de maquinas con recursos disponibles para comprobar las maquinas con recursos disponibles.

HU15) Como usuario, quiero ser capaz de obtener una lista de maquinas para comprobar las maquinas registradas en el sistema.

HU16) Como administrador con rol de gestion de maquinas, quiero ser capaz de obtener una lista de maquinas para comprobar las maquinas registradas en el sistema.

HU17) Como administrador con rol de gestion de maquinas, quiero ser capaz de registrar los datos de una maquina para registrar una nueva maquina en el sistema.

HU18) Como administrador con rol de gestion de maquinas, quiero ser capaz de modificar los datos de una maquina para modificar los datos registrados de una maquina.

HU19) Como administrador con rol de gestion de maquinas, quiero ser capaz de eliminar maquina para eliminar los datos registrados de una maquina.

############# GESTION DE USUARIOS ################## 

HU20) Como usuario, quiero ser capaz de obtener mi informacion personal para poder comprobar si mis datos personales estan correctamente registrados en el sistema.

HU21) Como administrador con rol de gestion de usuarios, quiero ser capaz de obtener los datos registrados de un usuario para poder comprobar 
todos los datos del usuario

HU22) Como usuario, quiero ser capaz de modificar mis datos personales para poder corregir algun dato personal registrado erroneamente en el sistema.

HU23) Como administrador con rol de gestion de usuarios, quiero ser capaz de modificar los datos registrados de un usuario para poder modificar cualquier
dato registrado del usuario en el sistema

HU24) Como administrador con rol de gestion de usuarios, quiero ser capaz de modificar mis datos personales para poder corregir los datos
personales registrados erroneamente de un usuario en el sistema

HU25) Como usuario, quiero ser capaz de obtener la informacion de contacto de cualquier administrador del sistema para poder contactar con dicho administrador.

HU26) Como administrador con rol de gestion de usuarios, quiero ser capaz de obtener la informacion de contacto de cualquier administrador del 
sistema para poder contactar con dicho administrador.

HU27) Como administrador con rol de gestion de usuarios, quiero registrar los datos de un usuario o administrador en el sistema para permitir a dicho usuario
o administrador utilizar el sistema.

HU28) Como administrador con rol de gestion de usuarios, quiero disponer de una lista de todos usuarios registrados en el sistema para poder comprobar 
los usuarios registrados

HU29) Como administrador con rol de gestion de usuarios, quiero eliminar un usuario para poder eliminar los datos del usuario del sistema.


###############################

CASOS DE USO

CU1: ReservarMaquina (espectador)

CU2: ReservarMaquina2 (administrador)

CU3: MostrarReserva (espectador)

CU4: MostrarReserva2 (administrador)

CU5: MostrarReservas (espectador)

CU6: MostrarReservas2 (administrador)

CU7: ModificarReserva (espectador)

CU8: ModificarReserva2 (administrador)

CU9: CancelarReserva (espectador)

CU10: CancelarReserva (administrador)

CU11: RegistrarMaquina (administrador con rol de gestion de maquinas)

CU12: MostrarMaquina (espectador)

CU13: MostrarMaquina (administrador con rol de gestion de maquinas)

CU14: MostrarMaquinas (espectador)

###############################

CU8: ListarMaquinas (usuario o administrador con rol de gestion de maquinas)

+ Se comprobara si el usuario/administrador esta registrado en el sistema

+ Caso administrador: Se comprobara si el administrador tiene rol de gestion de maquinas

+ Se mostrara una lista de las maquinas registradas en el sistema

###############################

CU9: ListarMaquinasDisponibles (usuario o administrador con rol de gestion de maquinas)

+ Se comprobara si el usuario/administrador esta registrado en el sistema

+ Se comprobara si el administrador tiene rol de gestion de maquinas

+ Se mostrara una lista de maquinas con recursos disponibles

###############################

CU10: ModificarMaquina (administrador con rol de gestion de maquinas)

+ Se comprobara si el administrador esta registrado en el sistema

+ Se comprobara si el administrador tiene rol de gestion de maquinas

+ Se mostrara una lista de maquinas registradas en el sistema

+ Se pedira el identificador de la maquina

+ Se comprobara si la maquina esta registrada en el sistema

+ Se mostrara los recursos de la maquina

+ Se pediran los nuevos recursos de la maquina

+ Se notificara si se ha realizado la modificacion de los recursos de la maquina

###############################

CU11: EliminarMaquina (administrador con rol de gestion de maquinas)

+ Se comprobara si el administrador esta registrado en el sistema

+ Se comprobara si el administrador tiene rol de gestion de maquinas

+ Se mostrara una lista de maquinas registradas en el sistema

+ Se pedira el identificador de la maquina

+ Se comprobara si la maquina esta registrada en el sistema

+ Se pedira confirmacion de eliminacion de la maquina

+ Se noficara si se ha realizado la eliminacion de la maquina

###############################

CU12: MostrarUsuario (usuario/administrador con rol de gestion de usuarios)

+ Se comprobara si el usuario/administrador esta registrado en el sistema

+ Se comprobara si el administrador tiene rol de gestion de usuarios

+ Caso administrador: Se mostrara una lista de los usuarios registrados en el sistema

+ Se pedira el dni del usuario

+ Se comprobara si el dni a buscar esta registrado en el sistema

+ Se comprobara si el dni buscado pertenece a un usuario o a un administrador

1. Dni pertenece a un usuario: Se mostrara la siguiente informacion -> Nombre,email,DNI, tipo de usuario, 

numero de n˙cleos que puede reservar al mismo tiempo, lÌmite de tiempo de las reservas.

2. DNI pertence a un administrador: Se mostrara la siguiente informacion -> Nombre,email,DNI,tipo de usuario, rol de administrador, 

numero de n˙cleos que puede reservar al mismo tiempo, lÌmite de tiempo de las reservas.

###############################

CU13: ModificarUsuario (usuario/administrador con rol de gestion de usuarios)

+ Se comprobara si el usuario/administrador esta registrado en el sistema

+ Se comprobara si el administrador tiene rol de gestion de usuarios

+ Se mostrara una lista de los usuarios registrados en el sistema

+ Se pedira el dni del usuario

+ Se comprobara si el dni a buscar esta registrado en el sistema

+ Se comprobara si el dni buscado pertenece a un usuario o a un administrador

1. DNI pertenece a un usuario:

+ Caso espectador: Podra modificar -> nombre, email

+ Caso de administrador: Podra modificar -> nombre, email, numero de nucleos que puede reservar al mismo tiempo, limite de tiempo de las reservas

2. DNI pertenece a un administrador:

+ Se comprobara si el dni pertenece al administrador

+ Se podra modificar -> nombre, email, numero de nucleos que puede reservar al mismo tiempo, limite de tiempo de las reservas

###################################

CU14: RegistrarUsuario (administrador con rol de gestion de usuarios)

+ Se comprobara si se desea registrar un espectador o un administrador

1. Registro de un espectador

+ Se comprobara si el administrador esta registrado

+ Se comprobara si el administrador tiene rol de gestion de recursos

+ Se pedira el dni del usuario a registrar

+ Se comprobara si el dni del nuevo usuario ya esta registrado

+ Se registraran los siguientes datos del usuario -> Nombre,email,DNI,tipo de usuario,

numero de n˙cleos que puede reservar al mismo tiempo, lÌmite de tiempo de las reservas.

+ Se notificara si se ha realizado el registro del usuario

2. Registro de un administrador

+ Se pedira el dni del nuevo administrador

+ Se comprobara si el dni del nuevo administrador esta registrado

+ Se registraran los siguientes datos del administrador -> Nombre,email,DNI,tipo de usuario, rol de administrador, 

numero de n˙cleos que puede reservar al mismo tiempo, lÌmite de tiempo de las reservas.

###################################

CU15: ListarUsuarios (administrador con rol de gestion de usuarios)

+ Se comprobara si el administrador esta registrado

+ Se comprobara si el administrador tiene rol de gestion de usuarios

+ Se mostrara una lista con los datos de los usuarios registrados en el sistema

###################################

CU16: EliminarUsuario (administrador con rol de gestion de usuarios)

+ Se comprobara si el administrador esta registrado

+ Se comprobara si el administrador tiene rol de gestion de usuarios

+ Se mostrara una lista con los datos de los usuarios registrados en el sistema

+ Se pedira el dni del usuario a eliminar

+ Se comprobara si el dni introducido esta registrado

+ Se comprobara si el dni pertenece a un espectador o a un administrador

1. Dni pertenece a un espectador

+ Se pedira confirmacion para eliminar los datos del usuario

+ Se notificara si se han eliminado los datos del usuario

2. Dni pertenece a un administrador

+ Se comprobara si el dni pertenece al administrador que ha accedido a la funcionalidad

+ Se pedira confirmacion para eliminar los datos del usuario

+ Se notificara si se han eliminado los datos del usuario

#################################

DIAGRAMA DE CLASES

TIPOS DE RELACIONES ENTRE CLASES

1. Asociaci√≥n: Es una conexi√≥n funcional y de comunicaci√≥n entre clases. Suele indicar la cardinalidad.
2. Dependencia: Tipo de asociaci√≥n donde una clase utiliza otra clase, y la definici√≥n de una clase se ve influenciada por los cambios en la otra.
3. Herencia: Representan una relaci√≥n entre una clase ‚Äúpadre‚Ä? y una o varias clases ‚Äúhijas‚Ä?.
4. Realizaci√≥n: Indica c√≥mo se debe realizar una implementaci√≥n de una interfaz.
5. Agregaci√≥n: Indica que una clase es parte de otra, pero tienen diferentes l√neas de vida.
6. Composici√≥n: Agregaci√≥n donde la clase que forma parte de la otra no puede existir por s√ misma.

###################################################################################################

MATRICES DE TRAZABILIDAD

TIPOS DE MATRICES

1. Requisitos funcionales frente a casos de uso

a) Cada requisito debe estar cubierto, como m√nimo, por un caso de uso.

b) Todo caso de uso debe dar respuesta a uno o m√°s requisitos

c) Recomendaci√≥n: realizarla al comienzo de la pr√°ctica, para as√ poder refinar los casos de uso en caso de ser necesario.

2. Casos de uso frente a clases.

a) Cada clase debe tener correspondencia con uno o varios casos de uso

b) Todo caso de uso debe tener al menos una clase asociada

c) Recomendaci√≥n: realizarla tras terminar el diagrama de clases.

#####################################################################################################

DIAGRAMAS DE SECUENCIA

1. ELEMENTOS

a) Actor: Agente externo que participa en la interacci√≥n

b) L√nea de vida:  Indica la presencia (o no) del objeto. El periodo durante el cual el objeto est√° activo se denomina ‚Äúactivaci√≥n‚Ä?

c) Mensaje: Comunicaci√≥n entre dos l√neas de vida. Deben ir numerados. 

2. TIPOS DE BLOQUES

a) Loop: Fragmento que se ejecuta varias veces

b) Alt: Secuencias alternativas, se ejecuta la que cumple la condici√≥n.

c) Opt: Fragmento opcional que se ejecuta solo si se cumple la condici√≥n.

