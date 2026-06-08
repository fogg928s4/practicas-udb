#!/bin/bash
echo "Calculador SIMPLE"
sum=0

# capture operands
echo "Operando 1"
read n1
echo "Operando 2"
read n2

# display menu
echo "1. Suma"
echo "2. Resta"
echo "3. Multiplicacion"
echo "4. Division"
echo "Ingrese opcion"
read ch

case $ch in
	1) sum=$(echo " $n1 + $n2" | bc -l)
		echo "SUMA es = $sum";;
	2) sum=$(echo " $n1 - $n2" | bc -l)
		echo "RESTA es =  $sum";;
	3) sum=$(echo " $n1 *  $n2" | bc -l)
		echo "MULTIPLICACION es =  $sum";;
	4) sum=$(echo " $n1 / $n2" | bc -l)
		echo "DIVISION es =  $sum";;
	*) echo "Invalido"
esac


