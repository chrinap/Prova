/****************************************************************************
* Autore: Christian Napolitano                                              * 
* Programma che poi viene richiamato nel file batch che gestisce gli errori *
* Data di crezione: 02/11/2018                                              *
* Data ultima modifica: 02/11/2018                                          *
****************************************************************************/


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int scelta;
	printf("\t\t\tErrorlevel\n\n\n");
	printf("Digita un nuemro da 1 a 5\n");
	scanf("%d", &scelta);
	if(scelta < 1 || scelta > 5)
	{
		printf("Il numero inserito non e' corretto, inserire un numero tra 1 e 5\n");
		return 0;
	}
	else
	{
		switch(scelta)
			{
				case 1:
					printf("L'errore e' il numero 1!\n");
					return 1;
		
				case 2:
					printf("L'errore e' il numero 2!\n");
					return 2;
				
				case 3:
					printf("L'errore e' il numero 3!\n");
					return 3;
				
				case 4:
					printf("L'errore e' il numero 4!\n");
					return 4;
			
				case 5:
					printf("L'errore e' il numero 5!\n");
					return 5;
			
			}
	}
	system("PAUSE");
	return 7;
}

