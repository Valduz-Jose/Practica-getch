#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int l,pisos;
	system("cls");
	system("color 0F");
	fflush(stdin);
	
	do{
		printf("\t\tIntrodusca cuantos pisos tiene el edificio: ");
		scanf("%d",&pisos);
		l=pisos*2;
		printf("\n\tEl doble es: %d",l);
		printf("\n\tPresione una tecla para volver a iniciar ");
		c=getch();/*recordando que getch no se ve y getche si*/ 
		system("cls");
	}
	while(c);
	printf("Hasta luego");
	return 0;
}
