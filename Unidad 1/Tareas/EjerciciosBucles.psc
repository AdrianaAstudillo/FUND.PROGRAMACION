Algoritmo EjerciciosBucles
	Definir menu, num1, cont1, cont2, num, suma, sumaPar, sumaImpar, posi,negati, ciro, inicio, final, i, num2 Como Entero
	Definir vocales,contrasenaIngresada, contrasenaSistema Como Caracter
	Escribir "Menu ejercicios"
	Escribir "1.Pares hasta"
	Escribir "2.Serie descendente"
	Escribir "3.Numero mayor a 100"
	Escribir "4.Suma de rango"
	Escribir "5.Positivos, negativos y cero"
	Escribir "6.Número negativos dentro del rango"
	Escribir "7.Cuántos numero pares e imapres ingreso"
	Escribir "8.Suma de los dígitos pares e impares ingresados"
	Escribir "9.Vocales ingresadas"
	Escribir "10.Contraseña del sistema"
	Escribir "Ingrese en Ejercicio a realizar"
	Leer menu
	Segun menu Hacer
		1: 	Escribir "1.Pares hasta"
			Escribir "Ingrese el un numero a alcanzar"
			Leer num1
			cont1<- 2
			Si num1> 2 Entonces
				Repetir
					Escribir "Valor: ", cont1
					cont1<- cont1 + 2
				Hasta Que cont1>num1
			SiNo
				Escribir "El numero debe ser mayor a 2"
			FinSi
		2: 	Escribir "2.Serie descendente"
			Para i<-10 Hasta 1 Hacer
				Escribir "Valor: ",i
			FinPara
		3: 	Escribir "3.Numero mayor a 100"
			Repetir 
				Escribir "Ingrese un numero (numero mayor a 100 para terminar)"
				Leer num1
			Hasta Que num1>=100
			Escribir "Valor Final: ", num1
		4:	Escribir "4.Suma de rango"
			cont1<-5
			suma<-0
			Mientras cont1<=12 Hacer
				suma=suma+cont1
				cont1=cont1+1
			FinMientras
			Escribir "Suma:", suma
		5: 	Escribir "5.Positivos, negativos y cero"
			posi<-0
			negati<-0
			ciro<-0
			Repetir
				Escribir "Ingrese un numero (Escriba un negativo para terminar)"
				Leer num1
				Si num1>0
					posi=posi+1
				SiNo
					Si num1==0
						ciro=ciro+1
					SiNo
						negati=negati+1
					FinSi
				FinSi
			Hasta Que num1<0
			Escribir "Positivos: ",posi
			Escribir "Negativos: ",negati
			Escribir "Cero: ",ciro
		6: 	
			Escribir "6.Número negativos dentro del rango"
			Escribir "Ingrese un inicio del rango "
			Leer inicio
			Escribir "Ingrese el final de su rango"
			Leer final
			Para i <- inicio Hasta final Hacer
				Si i MOD 2 <> 0 Entonces
					Escribir i
				FinSi
			FinPara
		7:
			Escribir "7.Cuántos numero pares e imapres ingreso"
			Escribir "Ingrese el valor de números a evaluar"
			Leer num
			cont1<- 0
			cont2<-0
			Para i <- 1 Hasta num Hacer
				Escribir "Ingrese el número ", i, ":"
				Leer num1
				Si num1 MOD 2 == 0 Entonces
					cont1 <- cont1 + 1
				Sino
					cont2<- cont2 + 1
				FinSi
			FinPara
			
			Escribir "Cantidad de números pares: ", cont1
			Escribir "Cantidad de números impares: ", cont2
		8:	
			Escribir "8.Suma de los dígitos pares e impares ingresados"
			sumaPar<- 0
			sumaImpar<- 0
			Repetir 
				Escribir "Ingrese un número entero (negativo para terminar):"
				Leer num
				Si num >= 0 Entonces
					num1 <- num
					Mientras num1 > 0 Hacer
						num2 <- num1 MOD 10
						
						Si digito MOD 2 = 0 Entonces
							sumaPar <- sumaPar + num2
						Sino
							sumaImpar <- sumaImpar + num2
						FinSi
						num1 <- trunc(num1/ 10)
					FinMientras
				FinSi
			Hasta Que num < 0
			Escribir "Suma total de dígitos pares: ", sumaPar
			Escribir "Suma total de dígitos impares: ", sumaImpar
		9:
			Escribir "9.Vocales ingresadas"
			cont1<- 0
			Escribir "Ingrese vocales (presione z para terminar)"
			Leer vocales 
			Mientras vocales <> 'z' Hacer
				Si vocales == 'a' O vocales == 'e' O vocales == 'i' O vocales == 'o' O vocales == 'u' Entonces
					cont1 <- cont1 + 1
				FinSi
				Leer vocales 
			FinMientras
			Escribir "Número de vocales ingresadas: ", cont1
		10:
			Escribir "10.Contraseña del sistema"
			contrasenaSistema <- "10112025"
			Repetir
				Escribir "Ingrese la contraseña del sistema:"
				Leer contrasenaIngresada
				Si contrasenaIngresada <> contrasenaSistema Entonces
					Escribir "Contraseña incorrecta"
				FinSi
			Hasta Que contrasenaIngresada = contrasenaSistema
			Escribir "Contraseña correcta. Bienvenido al sistema."
		De Otro Modo:
			Escribir "Ejercicio no disponible"
	FinSegun
	
FinAlgoritmo
