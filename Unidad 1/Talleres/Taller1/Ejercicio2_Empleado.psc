Algoritmo Empleado 
	//Entrada 
	Definir nomEmpleado como caracter 
	Definir horasTrabajadas como Entero 
	Definir valHora, bono, salarioSemanal, total como Real 
	BONO<-0.05
	Escribir "Ingrese el nombre completo del empleado, las horas trabajadas por semana y el valor por hora" nomEmpleado, horasTrabajadas, valHora 
	leer nomEmpleado, horasTrabajadas, valHora 
	//Proceso 
	salarioSemanal<-(horasTrabajadas*valHora)
	total<- (salarioSemanal*BONO)+salarioSemanal
	salarioSemanal<-redon(salarioSemanal*100)/100
	total<-redon(total*100)/100
	//Salida
	Imprimir "El salario semanal es ", salarioSemanal, "; El salario más el 5% es ", total, "; El empleado del salario es " nomEmpleado 
FinAlgoritmo
