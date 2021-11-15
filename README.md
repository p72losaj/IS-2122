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

RF1) El usuario debe ser capaz de registrar los datos de una reserva

RF2) Cualquier administrador debe ser capaz de gestionar los datos de cualquier reserva (crear,modificar,eliminar,mostrar una reserva)

RF3) El usuario debe ser capaz de gestionar (mostrar,modificar,cancelar) cualquiera de sus reservas

RF4) El usuario debe ser capaz de obtener una lista de sus reservas.

RF5) Cualquier administrador debe ser capaz de obtener una lista de las reservas registradas.

RF6) El usuario debe ser capaz de obtener una lista de las máquinas con recursos disponibles 

RF7) El administrador con rol de gestion de maquinas debe ser capaz de obtener una lista de máquinas con recursos disponibles. 

RF8) El usuario debe ser capaz de obtener la información de cualquier máquina registrada en el sistema.

RF9) El administrador con rol de gestion de maquinas debe ser capaz de gestionar cualquier reserva (mostrar,registrar,modificar,eliminar)

RF10) El usuario debe ser capaz de obtener una lista de las maquinas registradas en el sistema

RF11) El administrador con rol de gestion de maquinas debe ser capaz de obtener una lista de las maquinas registradas

RF12) El usuario debe ser capaz de obtener sus datos personales.

RF13) El administrador con rol de gestion de usuarios debe ser capaz de gestionar la toda la informacion de un usuario (crear,mostrar,modificar,eliminar)

RF14) El usuario debe ser capaz de obtener los datos de contacto de un administrador

RF15) El usuario debe ser capaz de modificar sus datos personales.

RF16) El administrador con rol de gestion de usuarios debe ser capaz de obtener una lista de los usuarios registrados en el sistema

###############################

2- Informacion: Detallan la informacion que necesita manejar el sistema y como se organiza.

Los requisitos de informacion obtenidos son los siguientes:

###############################

NUEVO EN PRACTICA3

RI1) El sistema debe almacenar informacion sobre el usuario que ha realizado la reserva, la maquina que se ha reservado, 
el numero de recursos de la maquina reservados y la fecha de reserva.

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

CU10: CancelarReserva2 (administrador)

CU11: RegistrarMaquina (administrador con rol de gestion de maquinas)

CU12: MostrarMaquina (espectador)

CU13: MostrarMaquina2 (administrador con rol de gestion de maquinas)

CU14: MostrarMaquinas (espectador)

CU15: MostrarMaquinas2 (administrador con rol de gestion de maquinas)

CU16: MostrarMaquinasDisponibles (espectador)

CU17: MostrarMaquinasDisponibles2 (administrador con rol de gestion de maquinas)

CU18: ModificarMaquina (administrador con rol de gestion de maquinas)

CU19: EliminarMaquina (administrador con rol de gestion de maquinas)

CU20: MostrarUsuario (espectador)

CU21: MostrarUsuario2 (administrador con rol de gestion de usuarios)

CU22: ModificarUsuario (usuario)

CU23: ModificarUsuario2 (administrador con rol de gestion de usuarios)

CU24: RegistrarUsuario (administrador con rol de gestion de usuarios)

CU25: MostrarUsuarios (administrador con rol de gestion de usuarios)

CU26: EliminarUsuario (administrador con rol de gestion de usuarios)

CU27: MostrarAdministrador (usuario)

#################################

DIAGRAMA DE CLASES

TIPOS DE RELACIONES ENTRE CLASES

1. Asociacion: Es una conexion funcional y de comunicacion entre clases. Suele indicar la cardinalidad.
2. Dependencia: Tipo de asociacion donde una clase utiliza otra clase, y la definicion de una clase se ve influenciada por los cambios en la otra.
3. Herencia: Representan una relacion entre una clase padre y una o varias clases hijas
4. Realizacion: Indica como se debe realizar una implementacion de una interfaz.
5. Agregacion: Indica que una clase es parte de otra, pero tienen diferentes lineas de vida.
6. Composicion: Agregacion donde la clase que forma parte de la otra no puede existir por si misma.

#################################

MATRICES DE TRAZABILIDAD

TIPOS DE MATRICES

1. Requisitos funcionales frente a casos de uso

a) Cada requisito debe estar cubierto, como minimo, por un caso de uso.

b) Todo caso de uso debe dar respuesta a uno o mas requisitos

c) Recomendacion: realizarla al comienzo de la practica, para asi poder refinar los casos de uso en caso de ser necesario.

2. Casos de uso frente a clases.

a) Cada clase debe tener correspondencia con uno o varios casos de uso

b) Todo caso de uso debe tener al menos una clase asociada

c) Recomendacion: realizarla tras terminar el diagrama de clases.

#################################

DIAGRAMAS DE SECUENCIA

1. ELEMENTOS

a) Actor: Agente externo que participa en la interaccion

b) Linea de vida:  Indica la presencia (o no) del objeto. El periodo durante el cual el objeto esta activo se denomina â€œactivaciÃ³nâ€?

c) Mensaje: Comunicacion entre dos lineas de vida. Deben ir numerados. 

2. TIPOS DE BLOQUES

a) Loop: Fragmento que se ejecuta varias veces

b) Alt: Secuencias alternativas, se ejecuta la que cumple la condicion.

c) Opt: Fragmento opcional que se ejecuta solo si se cumple la condicion.


###DIAGRAMAS DE CLASE#############


CLASE USUARIO: Almacena la informacion principal de los usuarios, ademas de ser la clase padre de los distintos tipos de usuarios
(usuario normal, administrador).

Atributos:

- Nombre:String -> Nombre del usuario

- Email: String -> Email del usuario

- DNI: String -> Dni del usuario (unico)

- TipoUsuario: enum -> Tipo de usuario (normal o administrador)

- NucleosReservables: int -> Numero de nucleos de máquina que puede reservar al mismo tiempo el usuario

- TiempoReserva: int -> Limite de tiempo en dias de las reservas del usuario

Operaciones:

+ getNombre(): String -> Obtiene el nombre del usuario

+ setNombre(): void -> Modifica el nombre del usuario

* nombre: string -> Nuevo nombre del usuario

+ getEmail(): String -> Obtiene el email del usuario

+ setEmail(): void -> Modifica el email del usuario

* email: string -> Nuevo email del usuario

+ getDni(): String -> Obtiene el dni del usuario

+ setDni(): void -> Modifica el dni del usuario

* dni: string -> Nuevo dni del usuario

+ getTipoUsuario(): enum -> Obtiene el tipo del usuario

+ setUsuario(): void -> Modifica el tipo del usuario

* tipo: enum -> Nuevo tipo del usuario

+ getNucleosUsuario(): int -> Obtiene el numero de nucleos de maquina que puede reservar al mismo tiempo del usuario

+ setNucleosUsuario(): void -> Modifica el numero de nucleos de maquina reservables al mismo tiempo del usuario

* nuecleos: int -> Nuevo numero de nucleos de maquina reservables del usuario

+ getTiempoReserva(): int -> Obtiene el limite de tiempo en dias de las reservas del usuario

+ setTiempoReserva(): void  -> Modifica el limite de tiempo en dias de las reservas del usuario

* dia: int -> Nuevo tiempo limite de reserva en dias

+ registrarReserva(): void -> Realiza el registro de una reserva

* dni: String -> Dni del usuario

* idMaquina: int -> Identificador de la maquina a reservar

* nucleosMaquina: int -> Numero de nucleos a reservar de la maquina

* fecha: Date -> Fecha limite de la reserva (dd/mm/yyyy)

+ mostrarReserva(): void -> Muestra la informacion de una reserva

* idMaquina: int -> Identificador de la maquina

* dni: string -> dni del usuario

+ mostrarReservas(): void -> Muestra una lista de reservas

+ modificarReserva(): void -> Modifica los datos de una reserva

* idMaquina: int -> Identificador de la maquina

* dni: string -> dni del usuario

+ cancelarReserva(): void -> Elimina los datos de una reserva y libera los recursos de la maquina reservados

* idMaquina: int -> Identificador de la maquina

* dni: string -> dni del usuario

#################################

CLASE USUARIO_NORMAL : clase que gestiona los datos unicos de un usuario normal y da acceso a sus reservas, ademas de permitir comprobar sus reservas activas

-> Hereda de la clase USUARIO

Operaciones:

+ mostrarMaquina(): void -> Muestra la informacion de una maquina

* idMaquina: int -> Identificador de la maquina

+ mostrarMaquinas(): void -> Muestra una lista de maquinas

+ mostrarMaquinasDisponibles(): void -> Muestra una lista de las maquinas con recursos disponibles

+ mostrarUsuario(): void -> Muestra la informacion personal del usuario (nombre,dni,email,tipoUsuario)

* dni: string -> dni del usuario

+ modificarUsuario(): void -> Modifica los datos personales del usuario (nombre,email)

* dni: string -> dni del usuario

+ mostrarAdministrador(): void -> Muestra los datos de contacto de un administrador (dni,rolAdministrador,email)

* dni: string -> dni del administrador

#################################

CLASE ADMINISTRADOR : Clase que gestiona los datos unicos de un administrador y da acceso a las reservas registradas en el sistema, ademas de permitir gestionar 
las reservas registradas en el sistema.
-> Hereda de la clase usuario

Atributos:

- rolAdministrador: enum -> Rol del administrador

Operaciones:

+ getRol(): enum -> Obtiene el rol del administrador

+ setRol(): void -> Modifica el rol del administrador

* rol: enum -> Nuevo rol del administrador



#################################

CLASE ADMINISTRADOR_USUARIOS: Clase que gestiona las funcionalidades sobre los usuarios.
-> Hereda de la clase administrador

Operaciones:

+ mostrarUsuario(): void -> Muestra toda la informacion registrada de un usuario

* dni: string -> dni del usuario

+ modificarUsuario(): void -> Modifica los datos registrados de un usuario

* dni: string -> dni del usuario

+ registrarUsuario(): void -> Registra los datos de un nuevo usuario

* dni: string -> dni del usuario a registrar

+ mostrarUsuarios(): void -> Muestra una lista de los usuarios registrados

#################################

CLASE ADMINISTRADOR_MAQUINA : Clase que gestiona las funcionalidades sobre una maquina
-> Hereda de la clase administrador

Operaciones:

+ registrarMaquina(): void -> Registra los datos de una maquina

* idMaquina: int -> Identificador de la maquina. debe ser unico

* nucleos: int -> Numero de nucleos de la maquina

+ mostrarMaquina(): void -> Muestra la informacion de una maquina

* idMaquina: int -> Identificador de la maquina

+ mostrarMaquinas(): void -> Muestra una lista de maquinas

+ mostrarMaquinasDisponibles(): void -> Muestra una lista de las maquinas con recursos disponibles

+ modificarMaquina(): void -> Modifica los datos de una maquina

* idMaquina: int -> Identificador de la maquina

* recursos: int -> Nuevo numero de recursos de la maquina

+ eliminarMaquina(): void -> Elimina los datos de una maquina

* idMaquina: int -> Identificador de la maquina

#################################

CLASE MAQUINA: Clase que almacena la informacion de una maquina

Atributos:

- idMaquina: Identificador de la maquina (unico)

- nNucleos: Numero de nucleos de la maquina

Operaciones:

+ getIdMaquina(): int -> Obtiene el identificador de la maquina

+ setIdMaquina(): void -> Modifica el identificador de la maquina

* id: int -> Nuevo identificador de la maquina.

+ getNucleos(): int -> Obtiene el numero de nucleos de la maquina

+ setNucleos(): void -> Modifica el numero de nucleos de la maquina

* nucleos: int -> Nuevo numero de nucleos de la maquina

#################################

CLASE RESERVA: Clase que almacena la informacion de una reserva.
-> Depende de la existencia de la clase usuario y de la clase maquina
Atributos:

- dniUsuario: String -> dni del usuario autor de la reserva

- idMaquina: int -> Identificador de la maquina reservada.

- nRecursos: int -> Numero de recursos reservados de la maquina

- fecha: Date -> Fecha limite de la reserva (dd/mm/yyyy)

Operaciones:

+ getDni():string -> Obtiene el dni del autor de la reserva

+ setDni(): void -> Modifica el dni del autor de la reserva

* dni: string -> nuevo dni del usuario

+ getIdMaquina(): int -> Obtiene el identificador de la maquina

+ setIdMaquina(): void -> Modifica el identificador de la maquina

* id: int -> Nuevo identificador de la maquina

+ getRecursos(): int -> Obtiene el numero de recursos reservados de la maquina

+ setRecursos(): void -> Modifica el numero de recursos reservados de la maquina

* recursos: int -> Nuevos recursos reservados de la maquina

+ getFecha(): date -> Obtiene la fecha limite de la reserva

+ setFecha(): void -> Modifica la fecha limite de la reserva

* nFecha: Date -> Nueva fecha limite de la reserva