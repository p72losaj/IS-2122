# IS-2122
Proyecto de IS

# Problema

1- Sistema de Gestión de los recursos informáticos para tareas de investigación

2-Realizar reservas de máquinas y sus recursos para la ejecución de experimentos, de modo que se tenga una planificación

y distribución justa de dichos recursos entre todos los usuarios.

############################################################################################################################################
# Requisitos del sistema

1-Funcionales:  Expresan qué debe hacer el sistema; cómo debe reaccionar ante ciertas entradas.

Los requisitos funcionales obtenidos son los siguientes:

1)  El usuario debe ser capaz de reservar una máquina y sus núcleos.
2)  El sistema debe permitir al usuario modificar/eliminar sus reservas.
3)  El sistema debe permitir realizar reservas indefinidas y programadas.
4)  El administrador tiene permisos para modificar/eliminar una reserva
5)  El administrador dar de alta/eliminar una máquina 
7)  El administrador modificar las características de cualquier máquina.
8)  Si una máquina está reservada, el sistema debe aportar al usuario información sobre el tiempo de reserva y el número de núcleos de dicha máquina.

2- Información: Detallan la información que necesita manejar el sistema y cómo se organiza.

Los requisitos de informacion obtenidos son los siguientes:

1) El sistema debe almacenar información sobre el usuario que ha realizado la reserva, la máquina que se ha reservado, el número de recursos de la máquina reservados y la fecha de reserva.
2)  El sistema debe almacenar la siguiente información personal del usuario: Nombre,email,DNI, tipo de usuario.
3)  El sistema debe almacenar de una maquina su identificador y sus nucleos

3- No funcionales: Expresan cómo debe comportarse el programa

+ Indican restricciones al sistema que pueden afectar a la calidad del servicio

+  Pueden hacer referencia a consideraciones sobre el desarrollo del sistema

Los requisitos no funcionales obtenidos son los siguientes:

1)  En caso de caída, debe solucionarse el problema en un tiempo máximo de 10/15 minutos.
2)  Un usuario puede realizar un número máximo de recursos y cada reserva tiene un numero maximo de dias.
3)  Debe realizarse una copia de seguridad del sistema.
4)  El sistema debe registrar 2 tipos de usuarios: usuario normal y usuario administrador
5)  El sistema debe comprobar que el usuario y la máquina son únicos ( no deben repetirse).
6)  El lenguaje de programación será c++

##########################################################################################################################

HISTORIAS DE USUARIO

1) Como usuario, quiero disponer de toda la información sobre una máquina para comprobar si dicha máquina es compatible con mi proyecto.
2) Como usuario, quiero disponer de una lista de mis máquinas reservadas para gestionar todas mis maquinas reservadas.
3) Como usuario, quiero disponer de una lista de mis reservas para poder gestionar todas mis reservas.
4) Como usuario, quiero disponer de una lista de las máquinas no reservadas
5) Como usuario, quiero disponer de mi información personal para poder modificar mis datos registrados en caso de alguna información personal no correcta.
6) Como usuario, quiero disponer de toda la información sobre una reserva para comprobar la información almacenada de dicha reserva.
7) Como usuario, quiero disponer de información de contacto de un administrador para poder resolver dudas/problemas de cualquier máquina que tenga reservada.
8) Como usuario, quiero disponer del tiempo restante de una reserva propia para gestionar el tiempo restante para la realización de mi proyecto.
9) Como usuario, quiero disponer de un formulario para realizar la reserva de una maquina.
10) Como usuario, quiero cancelar una reserva para indicar la finalizacion del uso de una maquina que tengo reservada.
11) Como usuario/administrador, quiero disponer de un formulario para poder registrarme en el sistema. 
12)  Como administrador/a quiero disponer de una lista de usuarios para obtener la informacion de todos los usuarios registrados en el sistema.
13)  Como usuario/administrador, quiero disponer de una lista de máquinas para obtener la información de todas las máquinas registradas en el sistema.
14)  Como administrador, quiero disponer de una lista de reservas para obtener la información de todas las reservas registradas en el sistema.
15) Como administrador, quiero disponer de la información personal de un usuario especifico para obtener la información personal de dicho usuario.
16) Como administrador, quiero disponer de un formulario para añadir una nueva maquina en el sistema.


#########################################################################################################################################

CASOS DE USO

CU1: MostrarInformacionMaquina
CU2:  BuscarMaquina
CU3: ModificarDatosMaquina
5) ListaMaquinasReservadasUsuario
6) BuscarMaquinasReservadasUsuario
7) ListaReservasUsuario
8) BuscarReservasUsuario
9) ListaMaquinasLibres
10) MostrarInformacionPersonalUsuario
11) ModificarDatosUsuario
12) MostrarReservaUsuario
13) ModificarReservaUsuario
14) MostrarInformacionAdministrador
15) ReservarMaquina
16) CancelarReserva
17) RegistrarUsuario
18) ListaUsuariosRegistrados
19) ListaMaquinasRegistradas
20) ListaReservasRegistradas
21) RegistrarMaquina


#########################################################################################################################################

DIAGRAMA DE CLASES

TIPOS DE RELACIONES ENTRE CLASES

1. Asociación: Es una conexión funcional y de comunicación entre clases. Suele indicar la cardinalidad.
2. Dependencia: Tipo de asociación donde una clase utiliza otra clase, y la definición de una clase se ve influenciada por los cambios en la otra.
3. Herencia: Representan una relación entre una clase “padre” y una o varias clases “hijas”.
4. Realización: Indica cómo se debe realizar una implementación de una interfaz.
5. Agregación: Indica que una clase es parte de otra, pero tienen diferentes líneas de vida.
6. Composición: Agregación donde la clase que forma parte de la otra no puede existir por sí misma.

###################################################################################################

MATRICES DE TRAZABILIDAD

TIPOS DE MATRICES

1. Requisitos funcionales frente a casos de uso

a) Cada requisito debe estar cubierto, como mínimo, por un caso de uso.

b) Todo caso de uso debe dar respuesta a uno o más requisitos

c) Recomendación: realizarla al comienzo de la práctica, para así poder refinar los casos de uso en caso de ser necesario.

2. Casos de uso frente a clases.

a) Cada clase debe tener correspondencia con uno o varios casos de uso

b) Todo caso de uso debe tener al menos una clase asociada

c) Recomendación: realizarla tras terminar el diagrama de clases.

#####################################################################################################

DIAGRAMAS DE SECUENCIA

1. ELEMENTOS

a) Actor: Agente externo que participa en la interacción

b) Línea de vida:  Indica la presencia (o no) del objeto. El periodo durante el cual el objeto está activo se denomina “activación”

c) Mensaje: Comunicación entre dos líneas de vida. Deben ir numerados. 

2. TIPOS DE BLOQUES

a) Loop: Fragmento que se ejecuta varias veces

b) Alt: Secuencias alternativas, se ejecuta la que cumple la condición.

c) Opt: Fragmento opcional que se ejecuta solo si se cumple la condición.
