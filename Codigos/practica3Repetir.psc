Algoritmo cuantosAnimaleshayenlaveterinaria
	
	definir cantidadAnimales, contador, i Como Entero
	definir tamagnio Como Caracter
	definir contadorG, contadorMG, contadorP Como Entero
	definir peso, gramos, acumular Como Entero
	definir promedioGramos Como Real
	
	contador = 0
	contadorG = 0
	contadorMG = 0
	contadorP = 0
	acumular = 0
	
	Escribir "Cuantos animales hay en la veterinaria?: "
	leer cantidadAnimales;	
	//Mientras = while en c++
	//Mientras expresion_logica Hacer
	//	secuencia_de_acciones
	//Fin Mientras
	//Repetir = do while en c++
	Repetir
		contador = contador + 1
		Escribir "Ingresa tamanio para animal: ", contador
		Escribir "Miniatura, Pequenio, Mediana, Grande o Muy Grande"
		leer tamagnio
		Escribir ""
		Repetir
			Escribir "Ingresa peso para animal", contador
			Leer peso
		Hasta Que peso > 1
		
		Repetir
			Escribir "Ingrese cantidad de gramos que come el perro: ", contador
			Escribir "Recuerde que los gramos deben ser superior a 50"
			Leer gramos
		Hasta Que gramos > 50
		
		acumular = acumular + gramos
		
		si peso > 25 Entonces
			contadorP = contadorP + 1
		FinSi
		//|| = or 
		si tamagnio == "Grande" O tamagnio == "grande" O tamagnio == "GRANDE" Entonces
			contadorG = contadorG + 1
		SiNo
			si tamagnio == "Muy Grande" O tamagnio == "muy grande" O tamagnio == "MUY GRANDE" Entonces
				contadorMG = contadorMG + 1
			FinSi
		FinSi
	Hasta Que contador == cantidadAnimales
	
	promedioGramos = acumular/gramos
	
	Escribir "Existen", contadorG , "animales Grandes"
	Escribir "Existen", contadorMG , "animales Muy Grandes"
	Escribir "Existen", contadorP , "animales con peso sobre los 25 kilos"
	Escribir "El promedio de gramos que comen los perros es: ", promedioGramos
FinAlgoritmo
