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
	Si target<array[1]O target>array[f] Entonces
		Escribir 'El numero esta fuera del rango'
	SiNo
		pos = posicion(array,target,i,f)
		Escribir "La posicion de " target " es: " pos
	FinSi
FinAlgoritmo

Función pos <- posicion(array,target,i,f)
Definir pos Como Entero
si i <= f Entonces  	 
	Definir t1, t2 Como Entero
	t1 = i + ((f -i)* 1/3)
	t2 = i + ((f-i)* 2/3)
	Escribir t1
	Escribir t2
	si array[t1] = target Entonces
		pos <- t1
	FinSi
	
	si array[t2] = target Entonces
		pos <- t2
	FinSi
	
	si target < array[t1] Entonces
		pos <- posicion(array, target, i ,t1 -1)
	FinSi
	
	si target > array[t2] Entonces
		pos <- posicion(array, target, t2 + 2, f)
	SiNo
		pos <- posicion(array, target, t1+ 1, t2-1)
	FinSi
FinSi	
FinFunción


