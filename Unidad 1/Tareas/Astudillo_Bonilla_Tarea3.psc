Algoritmo EjerciciosBucles
	Definir menu, num1, cont1,suma, posi,negati, ciro Como Entero
	Escribir "Menu ejercicios"
	Escribir "1.Pares hasta"
	Escribir "2.Serie descendente"
	Escribir "3.Numero mayor a 100"
	Escribir "4.Suma de rango"
	Escribir "5.Positivos, negativos y cero"
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
		De Otro Modo:
			Escribir "Ejercicio no disponible"
	FinSegun
	
FinAlgoritmo
