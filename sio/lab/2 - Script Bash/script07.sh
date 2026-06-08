#!/bin/bash
echo " **** TABLA DEL 6 ****"
i=1
res=0

#while loop
while [[ $i -lt 10 ]]
do
	let res=$i*6
	echo "$i * 6 = $res"
	i=$(expr "$i" + 1)
done
