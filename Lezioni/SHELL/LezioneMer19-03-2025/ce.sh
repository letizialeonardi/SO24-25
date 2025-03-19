#!/bin/sh
#file comandi ce.sh: invocazione ce.sh nomefile

case $# in	#controlliamo che sia stato passato un solo parametro
1) ;;
*) echo Errore: voglio un solo parametro, mentre ne hai passati $# 
   exit 1;;
esac

#se arriviamo qui siamo sicuri che sia stato passato esattamente un parametro
cd dcrea		#ci spostiamo in questa directory
while test ! -f $1	#se la condizione e' vera e cioe' non esiste ancora un file con il nome indicato
do
	sleep 10	#sospendiamo il processo per 10 secondi
done

echo il file $1 ESISTE	#appena la condizione sara' falsa e quindi il file esistera', lo segnaliamo all'utente
