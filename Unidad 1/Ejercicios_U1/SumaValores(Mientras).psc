Algoritmo SumaValores
	Definir cantNum, pares, impares, cont, num Como Entero
	Definir salir Como Logico
	pares<- 0
	impares<-0
	cont<- 1
	salir<-Falso
	Escribir "Ingresa la cantidad de números"
	Leer cantNum
	Mientras cont < cantNum y No (salir ) Hacer
		Escribir "Ingrese el número a consultar"
		Leer num
		SI num < 0 Entonces
			salir<-Verdadero
		SiNo
			Si num %2<>0
				impares=impares+num
			SiNo
				pares=pares+num
				
			FinSi
			cont<-cont+1
		FinSi
		
	FinMientras
	Escribir "Pares: ",pares," Impares: ",impares
	
FinAlgoritmo
