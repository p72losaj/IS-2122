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
9) Como usuario, quiero crear una reserva para realizar la reserva de una maquina
10) Como usuario, quiero cancelar una reserva para indicar la finalizacion del uso de una maquina que tengo reservada.
11) Como usuario/administrador, quiero disponer de un formulario para poder registrarme en el sistema. 
12)  Como administrador/a quiero disponer de una lista de usuarios para comprobar la existencia de un usuario.
13)  Como administrador, quiero disponer de una lista de máquinas para comprobar la existencia de una máquina.
14)  Como administrador, quiero disponer de una lista de reservas para gestionar la reserva de una máquina por un usuario.
15) Como administrador, quiero disponer de la información personal de un usuario especifico para poder contactar con dicho usuario en caso de que sea necesario.
16) Como administrador, quiero disponer de un formulario para crear una nueva maquina.

