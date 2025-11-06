Algoritmo TrabajoExtra
	Definir menu, articulo1,pelis, dias Como Entero
	Definir costo1, total, presu Como Real
	Escribir "Menu Ejercicios"
	Escribir "1. Control Compra"
	Escribir "2. Presupuesto Anual"
	Escribir "3. Video tienda"
	Escribir "Ingrese el numero de ejercicio"
	Leer menu
	Segun menu Hacer
		1: 	Escribir "1. Control Compra"
			Escribir "Ingrese la cantidad de articulos a comprar"
			Leer articulo1
			total=0
			Para i=1 Hasta articulo1 Con Paso 1 Hacer
				Escribir "Ingrese El valor del Articulo"
				Leer costo1
				total=total+costo1
			FinPara
			Si articulo1<=3 y articulo1 > 0 Entonces
				Escribir "Pago en Efectivo"
				Imprimir "El Montot total es de ",total,"$"
			SiNo
				si articulo1>3
					Escribir "Pago con Tarjeta"
					Imprimir "El Montot total es de ",total,"$"
				SiNo
					Escribir "Cantidad no valida"
				FinSi
			FinSi
		2: 	Escribir "2. Presupuesto Anual"
			Escribir "Ingrese el presupuesto a repartir"
			Leer presu 
			Si presu > 0 Entonces
				ginecologia= presu*0.40
				trauma=presu*0.30
				pediatria=presu*0.30
				Imprimir "El presupuesto para cada area es de: ","Ginecologia: ", ginecologia," Traumatotlogia: ",trauma, " Pediatria: ", pediatria
			SiNo
				Escribir "Cantidad no valida"
			FinSi
		3: 		Escribir "3. Video tienda"
			Escribir "Ingrese la cantidad de peliculas a rentar"
			Leer pelis
			RENTA<-1.50
			si pelis>1 Entonces
				Escribir "Ingrese la cantidad de días a rentar"
				Leer dias
				Si dias > 0 Entonces
					total=RENTA*pelis*dias
					descuento=RENTA*dias
					total= total-descuento
					Escribir "El monto total es de ", total,"$ y su descuento es de: ",descuento,"$"
				SiNo
					Escribir "Cantidad no valida"
				FinSi
			SiNo
				si pelis >0 y pelis <=1 Entonces
					Escribir "Ingrese la cantidad de días a rentar"
					Leer dias
					Si dias >0 Entonces
						total=RENTA*pelis*dias
						Escribir "El monto total es de", total,"$"
					SiNo
						Escribir "Cantidad no valida"
					FinSi
				SiNo
					Escribir "Cantidad no valida"
				FinSi
			FinSi
		De Otro Modo:
			Escribir "Ejercicio no disponible"
	FinSegun
	
FinAlgoritmo
