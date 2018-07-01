Ejercicio polimorfismo
Escriba un programa que modele 2 vehículos (automóvil y camión) y simule la conducción y el reabastecimiento de combustible. Tanto el automóvil como el camión tienen la cantidad de combustible, el consumo de combustible en litros por kilómetro y se pueden conducir a una distancia determinada y reabastecer con una determinada cantidad de combustible. Es verano, por lo que ambos vehículos usan aires acondicionados y su consumo de combustible por km se incrementa en 0.9 litros para el automóvil y con 1.6 litros para el camión. Además, el camión tiene un pequeño orificio en su tanque y cuando se reabastece de combustible guarda solo el 95% del combustible dado. El automóvil no tiene problemas y agrega todo el combustible dado a su tanque. Si un vehículo no puede viajar a la distancia dada, su combustible no cambia.
Input 
•	En la primera línea: información sobre el automóvil en el formato: "Automovil {fuel quantity} {liters per km}"
•	En la segunda línea - información sobre el camión en el formato: "Camion {fuel quantity} {liters per km}"
•	En la tercera línea: – la cantidad de comandos N que se darán en las siguientes N líneas
•	En las siguientes N líneas: comandos estan en el formato: 
?	"Drive Automovil {distance}"
?	"Drive Camion {distance}"
?	"Refuel Automovil {liters}"
?	"Refuel Camion {liters}"
Ouput
•	Después de cada comando de Drive, si había suficiente combustible, imprima en la consola un mensaje en el formato:
?	 " Automovil / Camion viajó {distance} km "
•	Si no había suficiente combustible, imprima: "El Automovil / Camion necesita reabastecimiento de combustible"
•	Después del comando Finalizar, imprima el combustible restante para el automóvil y el camión, redondeado a 2 dígitos después del punto flotante en el formato:
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
Drive Camion 10	Automovil viajó 9 km
Automovil necesita reabastecimiento de combustible
Camion viajó 10 km
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
Automovil viajó 13.5 km
Camion necesita reabastecimiento de combustible
Automovil: 113.05
Camion: 109.13
