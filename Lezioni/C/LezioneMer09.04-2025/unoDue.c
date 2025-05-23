/* Programma in C unoDue.c che non ha bisogno di parametri e mostra il primo uso della primitiva fork per la creazione di un processo figlio */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main ()
{
	printf("UNO\n");	/* l'unico processo (il padre) stampa la stringa "UNO" */

	fork();			/* l'unico processo (il padre) crea un processo figlio */

	printf("DUE\n");	/* che succede dopo la fork e, quindi, quanti processi eseguono questa printf? */

	exit(0);		/* quanti processi eseguono questa exit? */
}
