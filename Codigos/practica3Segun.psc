Algoritmo CalculadoraConSegun
	
	Definir dato Como caracter
	Definir suma, resta, multi, div Como Real
	
	Escribir "MENU CALCULADORA BASICA"
	Escribir "Suma presione: + "
	Escribir "Resta presione: - "
	Escribir "Multiplicacion presione: * "
	Escribir "Division presione: / "
	leer dato
	
	Segun dato Hacer
		'+':
			Escribir "El primer dato: "
			leer a
			Escribir "El segundo dato: "
			leer b
			suma = a+b
			Escribir "La suma es: ", suma
		'-':
			Escribir "El primer dato: "
			leer a
			Escribir "El segundo dato: "
			leer b
			resta = a - b
			Escribir "La Resta es: ", resta
		'*':
			Escribir "El primer dato: "
			leer a
			Escribir "El segundo dato: "
			leer b
			multi = a * b
			Escribir "La Multiplicacion es: ", multi
		'/':
			Escribir "El primer dato: "
			leer a
			Escribir "El segundo dato: "
			leer b
			div = a / b
			Escribir "La Division es: ", div
		De Otro Modo:
			Escribir "La opcion no es valida"
	Fin Segun
FinAlgoritmo
