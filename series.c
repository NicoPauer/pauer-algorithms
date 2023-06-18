/* Autor: Nicolas Pauer
   Mail: nicolaspauer20@gmail.com
   Creacion: 17/06/2023
   Actualizacion: 17/06/2023
   Descripcion: calcula series(sucesiones). 
*/
#include <stdio.h>
#include "series.h"

void separar(int caracteres, char caracter)
{
  /* Imrpime n veces un caracter en una linea para separar texto. */
	if (caracteres == 1)
	{
	  /* Caso base: Si queda un caracter lo imprime y a otra linea. */	
		printf("%c\n", caracter);
	}
	else
	{
	  /* Caso recursivo: Si queda mas de caracter lo imprime, saco un caracter
	     de los que debo imrpimir y seguido sin espacios imprimo otro. */
	     printf("%c", caracter);
	     caracteres -= 1;
	   /* Ya esta reducido previamente por lo tanto no debo pasar una
	      expresion para reducir considera el ultimo que es la cantidad
	      de caracteres reducida en 1. */  
	     separar(caracteres, caracter);	
	}
}

void menu()
{
 /* Todo el programa es un menu para calcular series */	
	int opcion, termino;
  /* Defino cuantos caracteres tienen las lineas separadoras */
	int separadores = 42;
  /* Defino separador a usar por las lineas separadoras */
	char separador = '_';
  /* Pido una opcion */	
	printf("¿Que desea hacer? \n");
	separar(separadores, separador);
	printf("1) Calcular fibonacci. \n2) Calcular sumatoria de n terminos.\n3) Calcular otra cosa.\n4) Factorial de n.\n5) potencia a exponente entera.\n11) Salir del programa.\n");
	separar(separadores, separador);
	printf("\tIngrese opcion: ");
	scanf("%d", &opcion);
	separar(separadores, separador);
  /* Realizo una opcion distinta dependiendo de opcion */
	if (opcion == 3)
	{
	  /* Caso recursivo: Repite el programa para que el usuario calcule otra serie o la misma en otro termino. */
		printf("\n\t[CALCULEMOS OTRA COSA]\t\n");
		menu();
	}
	else
	{
	  /* Caso base: segun la opcion elegida hace algo distinto */
		switch(opcion)
		{
			case 1:
			  /* Calcula fibonacci */
				printf("\nIngrese que termino de fibonacci quieres(1-n): ");
				scanf("%d", &termino);
				separar((separadores + 8), separador);
				printf("\n\tFibonacci en el termino numero %d es %d.\n", termino, fibonacci(termino));
				separar((separadores + 8), separador);
			 break; 
			 
			case 2:
			  /* Cacula sumatoria del numero 1 al numero n */
			   printf("\nIngrese termino de 1 en adelante para hacer una sumatoria estandar: ");
			   scanf("%d", &termino);
			   separar(separadores, separador);
			   printf("La sumatoria del 1 al %d es %d.\n", termino, sumatoria_estandar(termino)); 
			   separar(separadores, separador);
			break;

			case 4:
			 /* Calcula factorial de n */
				int n;
			    /* Obtengo el numero */	
				printf("\nIngrese entero para calcular su factorial: ");
				scanf("%d", &n);
			   /* Muestro el resultado */
				printf("\nEl factorial de %d es %d.\n", n, factorial(n));
			break;

			case 5:
			  /* Calcula potencia de exponente entera */
				double base;
				int exponente;
			/* Obtengo los datos */	
				printf("\nIngrese base real: ");
				scanf("%lf", &base);
				printf("\nIngrese exponente entera: ");
				scanf("%d", &exponente);
			/* Muestro resultado */
				printf("\nbase %.2lf a exponente %d da de resultado %.2lf", base, exponente, potencia_exponente_entera(base, exponente));
			break;
		  /* Si la opcion es la ultima que se mostro sale del programa */	
			case 11: break; break;
		  /* Digo que ingrese opcion valida */
			default: 
				printf("\n[INGRESE OPCION VALIDA]\n");
				menu();
			break;	
		}	
	}
}

int main()
{
  /* Explico de que va el programa */
	printf("\n\t[CALCULA SERIES EN ALGUNO DE SUS TERMINOS]\t\n");
  /* Muestro el menu que permite realizar las acciones */	
	menu();
	return 0;
}
