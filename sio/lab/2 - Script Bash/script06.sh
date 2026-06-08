#!/bin/bash
# Estructura condicional if - else

str1="abc"
str2="abd"

if [ $str1 = $str2 ]; then
	echo "cadena 1 igual a cadena 2"
else
	echo "cadena 1 no es igual a cadena 2"
fi

if [ $str1 != $str2 ]; then
	echo "str 1 not same as str2"
else 
	echo "str same as str2"
fi

#same thing again


