Algoritmo MenuEjercicios
	Definir menu, num1, HORA, cantidad, edad como Entero
	Definir lado, precio, mes1, mes2, mes3, nume1, nume2, nume3, wats, horas, valorHora, nota Como Real
	Escribir "Menu Ejercicios"
	Escribir "Ejercicios secuenciales"
	Escribir "1. Calcular el doble y el triple"
	Escribir "2. Area y Perimetro"
	Escribir "3. Convercion de tiempo"
	Escribir "4. Costo Manzanas"
	Escribir "5. Consumo Agua"
	Escribir "Ejercicios Condicionales"
	Escribir "16.Clasificaci�n edad"
	Escribir "17. Mayor de tres"
	Escribir "18. Consumo Energetico"
	Escribir "19.Salario Extra"
	Escribir "20. Calificacion Cualitativa"
	Escribir "Seleccione el ejercicio a ejecutar"
	Leer menu
	Segun menu Hacer
		1: 	Escribir "1. Calcular el doble y el triple"
			Escribir "Ingrese el numero a calcular"
			Leer num1
			doble = num1 * 2
			triple = num1 * 3
			Escribir "El doble de  ", num1, "  es  ", doble
			Escribir "El triple de  ", num1, "  es  ", triple
		2: 	Escribir "2. Area y Perimetro"
			Escribir "Ingrese la medida de el lado del cuadrado"
			Leer lado
			area= lado ^ 2
			perimetro= lado * 4
			Escribir "El Area de un cuadrado cuyo lado tiene ", lado, " unidades de medida es  ", area
			Escribir "El Perimetro de un cuadrado cuyo lado tiene ", lado, " unidades de medida es  ", perimetro
		3: 	Escribir "3. Convercion de tiempo"
			Escribir "Ingrese los minutos a convertir en horas"
			Leer num1 
			HORA=60
			convert= num1 / HORA
			Escribir "Los ",num1," minutos equivalen a ", convert, " horas" 
		4: 	Escribir "4. Costo Manzanas"
			Escribir "Ingrese el precio por kg"
			Leer precio
			Escribir "Ingrese la cantidad de manzanas a comprar"
			Leer cantidad
			costo = precio * cantidad
			Escribir "El costo total por ",cantidad, " de manzanas es ",costo, "$"
		5: 	Escribir "5. Consumo Agua"
			Escribir "Ingrese el consumo de agua (en m3) del primer mes"
			Leer mes1
			Escribir "Ingrese el consumo de agua (en m3) del segundo mes"
			Leer mes2
			Escribir "Ingrese el consumo de agua (en m3) del tercer mes"
			Leer mes3
			promedio= (mes1 + mes2 + mes3)/3
			promedio = redon(promedio)
			Escribir "El consumo promedio en los 3 meses es de ", promedio," m^3"
		16: Escribir "16.Clasificaci�n edad"
			Escribir "Ingrese la edad de la persona"
			Leer edad
			Si edad > 0 y edad <=12 Entonces
				Escribir "La persona de ",edad, " anios es un Ni�o"
			SiNo
				Si edad <= 17
					Escribir "La persona de ",edad, " anios es un Adolecente"
				SiNo
					si edad <= 64
						Escribir "La persona de ",edad, " anios es un Adulto"
					SiNo
						Si edad > 65
							Escribir "La persona de ",edad, " anios es un Adulto Mayor"
						FinSi
					FinSi
				FinSi
			FinSi
		17: Escribir "17. Mayor de tres"
			Escribir "Ingrese los numeros a comparar"
			Leer nume1
			Leer nume2
			Leer nume3
			Si nume1 > nume2 y nume1 > nume3 Entonces
				Escribir "El numero mayor es ", nume1
			SiNo
				si nume2> nume1 y nume2 > nume3
					Escribir "El numero mayor es ", nume2
				SiNo
					Escribir "El numero mayor es ", nume3
				FinSi
			FinSi
		18: Escribir "18. Consumo Energetico"
			Escribir "Ingrese los kWh Consumidos"
			Leer wats 
			Si wats <= 100 Entonces
				costo = wats * 0.10
				Escribir "El total a pagar es de ", costo
			SiNo
				si wats > 100 y wats <= 300
					costo = wats * 0.15
					Escribir "El total a pagar es de ",costo
				Sino 
					costo = wats * 0.20
					Escribir "El total a pagar es ", costo
				FinSi
			FinSi
		19: Escribir "19.Salario Extra"
			Escribir "Ingrese las horas trabajadas"
			Leer horas
			Escribir "Ingrese el monto que recibe por hora trabajada"
			Leer valorHora
			Si horas > 40 Entonces
				pago = 40 * valorHora
				horaextra = (horas - 40)
				pago= pago + (horaextra*(2*valorHora))
			Sino 
				pago = hora * valorHora
			FinSi
			Escribir "El sueldo total es igual a ", pago, " Las horas extra trabajadas fueron ",horaextra
		20: Escribir "20. Calificacion Cualitativa"
			Escribir "Ingrese su calificacion"
			Leer nota
			si 90 < nota y nota < 100 Entonces
				Escribir "La nota ",nota, " es Excelente"
			SiNo
				si nota > 80 y nota <=89 Entonces
					Escribir "La nota ",nota, " es Muy Bueno"
				SiNo
					Si nota> 70 y nota <= 79
						Escribir "La nota ",nota, " es Bueno"
					SiNo
						Si nota > 60 y nota <= 69 Entonces
							Escribir "La nota ",nota, " es Regular"
						SiNo
							Escribir "La nota ",nota, " es Deficiente"
						FinSi
					FinSi
				FinSi
			FinSi
		De Otro Modo:
			Escribir "No Disponible"
	FinSegun
	
FinAlgoritmo
