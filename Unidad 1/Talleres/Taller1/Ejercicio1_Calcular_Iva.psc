Algoritmo CalcularIva
	Definir precioSinIva, precioConIva, IVA Como Real
	IVA<-0.12
	Escribir "Ingrese el precio del producto sin IVA", precioSinIva
	Leer precioSinIva
	
	precioConIva<-((IVA*precioSinIva)+precioSinIva)
	precioConIva<- redon( precioConIva*100)/100
	Imprimir "El precio del producto con IVA es ",  precioConIva
FinAlgoritmo

