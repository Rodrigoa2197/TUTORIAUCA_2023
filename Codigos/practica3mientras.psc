Algoritmo Numeros_Positivos_Hasta_Tener_Uno_Negativo
	x = 1
	// Condicion = while c++
	Mientras x > 0 Hacer
		Escribir "Escribe un numero"
		leer n
		
		si n > 0 Entonces
			contador = contador + 1
		SiNo
			x = 0
		FinSi	
	FinMientras
	Escribir "El total de numeros positivos es: ", contador
FinAlgoritmo
