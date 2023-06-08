/*
    
    Autor: Nico Pauer
    Fecha Creacion: 07/06/2023
    Fecha Actualizacion: 07/06/2023
    Mail: nicolaspauer20@gmail.com
    Curso: UTN FRBB - Informatica I, comision 2B

  Descripcion:

     Cuenta cuantas veces se tiraron tres
     dados para que la suma de sus resultados
     dé el numero ingresado por el usuario.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado1, dado2, dado3, suma, objetivo, tiros;

int main()
{
  /* Incializo las variables */	
	tiros = 0;
  /* Semilla para aleatorios usando el tiempo del sistema */
	srand(time(NULL));
  /* ((rand() % ultimo) + inicio) crea aleatorios de numero de inicio al ultimo numero */	
	dado1 = ((rand() % 6) + 1);
	dado2 = ((rand() % 6) + 1);
	dado3 = ((rand() % 6) + 1);
  /* Obtengo que numero busca el usuario */
	printf("\nIngrese que numero buscas: ");
	scanf("%d", &objetivo);
  /* Cuento los tiros mientras la suma no sea lo ingresado por el usuario */	
	while (suma != objetivo)
	{
	  /* Cuento un tiro mas */	
		tiros += 1;
		printf("\n\tdado1 = %d,\tdado2 = %d,\tdado3 = %d.\n", dado1, dado2, dado3);
	  /* Actualizo variables */	
		dado1 = ((rand() % 6) + 1);
		dado2 = ((rand() % 6) + 1);
		dado3 = ((rand() % 6) + 1);
	 /* Actualizo variable que determina la continuidad o no del bucle */	
		suma = (dado1 + dado2 + dado3);
		
	} 	
  /* Muestro el resultado */
	printf("\nSe tiraron los dados %d veces: \n", tiros);
	printf("\tdado1 = %d,\tdado2 = %d,\tdado3 = %d.\n", dado1, dado2, dado3);
	
	return 0;
}
