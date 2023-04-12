Algoritmo PedirDosNumerosPorTecladoYMostrarTodosLosNumerosComprendidosEnTresAmbos
	Escribir "Escribe un numero"
	leer a
	b = 0
	
	Mientras a >= b Hacer
		Escribir "Escribe un numero mayor al primero"
		leer b
	FinMientras
	
	Mientras b >= a Hacer
		Escribir b
		b = b - 1
	FinMientras
FinAlgoritmo
