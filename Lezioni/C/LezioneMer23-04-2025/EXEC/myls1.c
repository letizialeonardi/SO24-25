/* Programma in C myls1.c che non ha bisogno di parametri e mostra l'uso della primitiva execv per la esecuzione del comando ls */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main ()
{
   char *av[3]; 	/* array statico di puntatori a char che serve per passare i parametri alla execv */

   	/* per prima cosa riempiamo l'array e quindi il VETTORE di stringhe che verra' usato nel comando execv */
   	av[0]="ls"; 		/* av[0] e' un puntatore a char cui viene assegnato il puntatore alla stringa "ls" */
   	av[1]="-l";		/* av[1] e' un puntatore a char cui viene assegnato il puntatore alla stringa "-l" */
	av[2]= (char *)0;	/* av[2] e' un puntatore a char cui viene assegnato il valore 0 come puntatore a char */

	printf("DEBUG-Esecuzione di ls: prima versione\n");
	execv("/bin/ls", av);	/* controllare con il comando which se ls sia in effetti in /bin altrimenti cambiare la stringa utilizzata come primo parametro! */

	/* si esegue l'istruzione seguente SOLO in caso di fallimento della execv */
	printf("Errore in execv\n");
	exit(1);	/* torniamo quindi un valore diverso da 0 per indicare che ci sono stati dei problemi */
}
