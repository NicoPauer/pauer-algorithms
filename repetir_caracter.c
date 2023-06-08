/*
    
    Autor: Nico Pauer
    Fecha Creacion: 07/06/2023
    Fecha Actualizacion: 07/06/2023
    Version: 1.0
    Mail: nicolaspauer20@gmail.com
    Curso: UTN FRBB - Informatica I, comision 2B

  Descripcion:
    Dado un vector con cantidades mostrar tantas veces
    como indica ese caracter.
*/
#include <stdio.h>

int repeticiones[10] = {3, 4, 8, 1, 4, 1, 5, 3, 2, 9}; 

char caracter;

int main()
{
  /* Obtengo el caracter a repetir */
	printf("¿Con que caracter te gustaria que arme un patron: ");
	scanf("%c", &caracter);
  /* Uso for anidados para repetirlo tantas veces como indica el vector */
    for (int posicion = 0; posicion < 10; posicion++)
    {
	  /* Recorro cada una de las cantidadades que indica el vector
	     mientras mas sean mas se repetira el segundo for que
	     muestra dicho caracter con el que aramar un patron
	     de repeticion. */ 	
		for (int repetir = 0; repetir < repeticiones[posicion]; repetir++)
		{
			printf("%c", caracter);
		}
	  /* Hago nueva linea para que no se amontonen */
	    printf("\n");
	}
	
	return 0;
	
}
