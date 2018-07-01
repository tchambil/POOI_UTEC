Ejercicio polimorfismo
Escriba un programa que modele 2 veh�culos (autom�vil y cami�n) y simule la conducci�n y el reabastecimiento de combustible. Tanto el autom�vil como el cami�n tienen la cantidad de combustible, el consumo de combustible en litros por kil�metro y se pueden conducir a una distancia determinada y reabastecer con una determinada cantidad de combustible. Es verano, por lo que ambos veh�culos usan aires acondicionados y su consumo de combustible por km se incrementa en 0.9 litros para el autom�vil y con 1.6 litros para el cami�n. Adem�s, el cami�n tiene un peque�o orificio en su tanque y cuando se reabastece de combustible guarda solo el 95% del combustible dado. El autom�vil no tiene problemas y agrega todo el combustible dado a su tanque. Si un veh�culo no puede viajar a la distancia dada, su combustible no cambia.
Input 
�	En la primera l�nea: informaci�n sobre el autom�vil en el formato: "Automovil {fuel quantity} {liters per km}"
�	En la segunda l�nea - informaci�n sobre el cami�n en el formato: "Camion {fuel quantity} {liters per km}"
�	En la tercera l�nea: � la cantidad de comandos N que se dar�n en las siguientes N l�neas
�	En las siguientes N l�neas: comandos estan en el formato: 
?	"Drive Automovil {distance}"
?	"Drive Camion {distance}"
?	"Refuel Automovil {liters}"
?	"Refuel Camion {liters}"
Ouput
�	Despu�s de cada comando de Drive, si hab�a suficiente combustible, imprima en la consola un mensaje en el formato:
?	 " Automovil / Camion viaj� {distance} km "
�	Si no hab�a suficiente combustible, imprima: "El Automovil / Camion necesita reabastecimiento de combustible"
�	Despu�s del comando Finalizar, imprima el combustible restante para el autom�vil y el cami�n, redondeado a 2 d�gitos despu�s del punto flotante en el formato:
?	" Automovil: {liters}"
?	" Camion: {liters}"

Ejemplos:
Input	Output
Automovil 15 0.3
Camion 100 0.9
4
Drive Automovil 9
Drive Automovil 30
Refuel Automovil 50
Drive Camion 10	Automovil viaj� 9 km
Automovil necesita reabastecimiento de combustible
Camion viaj� 10 km
Automovil: 54.20
Camion: 75.00
Automovil 30.4 0.4
Camion 99.34 0.9
5
Drive Automovil 500
Drive Automovil 13.5
Refuel Camion 10.300
Drive Camion 56.2
Refuel Automovil 100.2	


Automovil necesita reabastecimiento de combustible
Automovil viaj� 13.5 km
Camion necesita reabastecimiento de combustible
Automovil: 113.05
Camion: 109.13
