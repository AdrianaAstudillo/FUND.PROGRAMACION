Algoritmo Precios 
	//ENTRADA
	Definir precioUnitario1, precioUnitario2, precioUnitario3, precioCantidad1, precioCantidad2, precioCantidad3, DESCUENTO, IVA, Can1, can2, can3  Como Real
	Definir precio1, precio2, precio3 Como Caracter 
	DESCUENTO<-0.10
	IVA<-0.12 
	Escribir " Ingrese el los productos a comprar, la cantidad y el precio unitario de cada uno ",  precio1, precioUnitario1, can1, producto2, precioUnitario2, can2,  producto3, precioUnitario3, can3
	Leer  precio1, precioUnitario1, can1, producto2, precioUnitario2, can2,  producto3, precioUnitario3, can3
	//Proceso 
	precioCantidad1<-(precioUnitario1*can1)
	precioCantidad2<-(precioUnitario2*can2)
	precioCantidad3<-(precioUnitario3*can3)
	subtotal<-(precioCantidad1+ precioCantidad2+ precioCantidad3)
	subtotal<-(subtotal*DESCUENTO)-subtotal
	subtotal<- (subtotal*IVA)+subtotal
	//Salida 
	Imprimir "El producto es ", precio1, precio2, precio3, "el valor unitario es ",  precioUnitario1   , precioUnitario2  ,  precioUnitario3, " el precio es ", subtotal 
	
	
	
	
FinAlgoritmo



