 Algoritmo main
	Escribir 'Ingresa el tamanio del arreglo'
	Definir f Como Entero
	Leer f
	Escribir 'Ingresa los elementos del arreglo en orden ascendente'
	Dimensionar array(f)
	Para i<-1 Hasta f Con Paso 1 Hacer
		Leer array[i]
	FinPara
	Escribir 'Ingresa el numero a buscar'
	Definir target Como Entero
	Leer target
	pos = posicion(array, target, 0 ,f)
	si pos <> -1 Entonces
		Escribir "La posicion del numero es: " pos
	SiNo
		Escribir target	" no esta en la lista"
	FinSi
FinAlgoritmo

Función pos <- posicion(array,target,i,f)
si i <= f Entonces  	 
	Definir t1, t2 Como Entero 
	t1 = (i + ((f -i)* 1/3))
	t2 = (i + ((f-i)* 2/3))
	
	Escribir t1
	Escribir t2
	
	si array[t1] == target Entonces
		pos <- t1
		
	FinSi
	
	si array[t2] == target Entonces
		pos <- t2
		
	FinSi
	
	si target < array[t1] Entonces
		pos <- posicion(array, target, i ,t2 -1)
	FinSi
	
	si target > array[t2] Entonces
		pos <- posicion(array, target, t1 + 2, f)
	SiNo
		pos <- posicion(array, target, t1+ 1, t2-1)
	FinSi
	pos <- -1
FinSi	
FinFunción


