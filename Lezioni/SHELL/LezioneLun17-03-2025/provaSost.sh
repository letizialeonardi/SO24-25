#!/bin/sh
y=3				#assegniamo a y un valore
#visualizziamo su standard output (N.B. con un unico comando echo) il valore della variabile y, della esecuzione del comando pwd e del metacarattere ASTERISCO
echo Valore della variabile y = $y e directory corrente = `pwd` e valore di asterisco = *
#PROCEDIAMO CON LA INIBIZIONE DI TUTTE LE SOSTITUZIONI, sempre usando il comando echo
echo 'Valore della variabile y = $y e directory corrente = `pwd` e valore di asterisco = *'
#ORA PROCEDIAMO CON LA INIBIZIONE SOLO DELL'ULTIMA SOSTITUZIONE, sempre usando il comando echo
echo "Valore della variabile y = $y e directory corrente = `pwd` e valore di asterisco = *"
