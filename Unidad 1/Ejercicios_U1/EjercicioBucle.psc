Algoritmo EjercicioBucle
	Definir menu Como Caracter
	Definir num1, num2, cont1, cont2 Como Entero
	Escribir "Menu Ejercicios Bucles"
	Escribir "A. Contar Pares e Impares"
	Escribir "B. Mostrar del 2 al 20 con incrementos de 3" //No usar Para
	Escribir "C. Suma consecutiva"
	cont1<-0
	cont2<-0
	menu<-Mayusculas(menu)
	Leer menu
	Segun menu Hacer
		"A": 	Escribir "A. Contar Pares e Impares"
			Escribir "Cuantos valores vas a ingresar"
			Leer num1
			Para i<-1 Hasta num1
				Escribir "Ingrese un numero entero"
				Leer num2
				si num2 % 2 =0 Entonces
					cont1=cont1+1
				SiNo
					cont2=cont2+1
				FinSi
			FinPara
			Escribir "Se ingreso ",cont1," numeros impares"
			Escribir "Se ingreso ",cont2," numeros pares"
		"B":	Escribir "B. Mostrar del 2 al 20 con incrementos de 3" //No usar Para
			cont1<-2
			//Mientras 
			Mientras cont1<= 20 Hacer
				Escribir "Valor: ",cont1
				cont1=cont1+3
			FinMientras
			//Repetir
			cont1<-2
			Repetir
				Escribir "Valor: ",cont1
				cont1=cont1+3
			Hasta Que cont1 >= 20
		"C": 	Escribir "C. Suma consecutiva"
		De Otro Modo:
			Escribir "Ejercicio no disponible"
	FinSegun
	
FinAlgoritmo
