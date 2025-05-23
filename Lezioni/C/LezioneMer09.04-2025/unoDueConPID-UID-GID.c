/* Programma in C unoDueConPID-UID-GID.c che partendo dal programma unoDue.c aggiunge la stampa del Process IDentifier (PID) del processo che in esecuzione, del suo User IDentifier (UID) e del suo Group IDentifier (GID) */
/* FILE: unoDueConPID-UID-GID.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main ()
{
	/* l'unico processo (il padre) stampa la stringa "UNO ..." */
	printf("UNO. PID = %d, UID = %d, GID = %d\n", getpid(), getuid(), getgid());

	fork();			/* l'unico processo (il padre) crea un processo figlio */

	/* da qui in poi abbiamo due processi, il padre e il figlio che stampano la stringa DUE ... ma ognuno chiaramente con i propri valori recuperati dal Descrittore di Processo (PCB) */
	printf("DUE. PID = %d, UID = %d, GID = %d\n", getpid(), getuid(), getgid());

	exit(0);	/* entrambi i processi terminano */
}
