Algoritmo ContVocales
	//Permitir al usuario ingresar N caracteres, finalizar el programa cuando se ingrese ?z?. Mostrar el número de vocales ingresadas .
	Definir letra Como Caracter
	Definir cont, numCaracter, contVocal Como Entero
	Definir carac Como Logico
	cont<-0
	vocalCont<- 0
	salir<-Falso
	Escribir " Ingrese la cantidad de letras "
	Leer numCaracter
	Repetir
		Escribir "Ingrese letras"
		Leer letra
		Si letra <> "z" Entonces
			Si letra == 'a' O letra == 'e' O letra == 'i' O letra == 'o' O letra == 'u' Entonces
				contVocal<- contVocal + 1
			FinSi
			cont<-cont+1
		SiNo
			salir<-Verdadero
		FinSi
	Hasta Que cont >= numCaracter o carac==verdadero
	Escribir "La cantidad de vocales es: ", contVocal

FinAlgoritmo
