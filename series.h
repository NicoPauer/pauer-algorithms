/* Autor: Nicolas Pauer
   Mail: nicolaspauer20@gmail.com
   Creacion: 17/06/2023
   Actualizacion: 18/06/2023
   Descripcion: Provee funciones para calcular series(sucesiones). 
*/


/* Defino archivo de cabecera SERIES_H sino lo 
   definió previamente el compilador para que se
   pueda usar como biblioteca al estar el headerfile definido */
#ifndef SERIES_H
	#define SERIES_H
#endif

double potencia_exponente_entera(double base, int exponente)
{
 /* Autor: Nicolas Pauer
   Mail: nicolaspauer20@gmail.com
   Creacion: 18/06/2023
   Actualizacion: 18/06/2023 */
  /* Calcula potencia real de base real a exponente entera */	
	if (exponente == 0)
	{
	  /* Caso base: Exponente es cero, entonces la potencia es 1 */
		return 1;
	}
	else
	{
	  /* Caso recursivo: Exponente distinta de cero, entonces la potencia
   	     es base por potencia de base a la exponente menos 1 */
		return (base * potencia_exponente_entera(base, (exponente - 1)));
	}
}

int factorial(int n)
{
/* Autor: Nicolas Pauer
   Mail: nicolaspauer20@gmail.com
   Creacion: 18/06/2023
   Actualizacion: 18/06/2023 
   Descricion: Usa recursividad para calcular el factorial de un numero entero.
   */
	if (n == 0)
	{
	    /* Caso base: si el numero es cero,
     	       entonces, devolver 1*/	
		return 1;
	}
	else
	{
	   /* Caso recursivo: si el numero distinto de cero
    	      el numero, entonces devolver el producto entre
	      el numero y el factorial del numero reducido en 1 */
		return (n * factorial(n - 1));
	}
}

int sumatoria_estandar(int n)
{
	/* 
		Autor: Nicolas Pauer
		Mail: nicolaspauer20@gmail.com
		Creacion: 17/06/2023
		Actualizacion: 17/06/2023
  
	  Permite calcular la sumatoria de n terminos entre si.
	 */
	 if (n == 1)
	 {
		 return 1;
	 }
	 else
	 {
		 return (sumatoria_estandar(n - 1) + n);
	 }
}	

int fibonacci(int n)
{
	/* 
		Autor: Nicolas Pauer
		Mail: nicolaspauer20@gmail.com
		Creacion: 17/06/2023
		Actualizacion: 17/06/2023
  
	  Permite calcular la sucesion de fibonacci en el termino entero que
	  recibe de parametro.
	 */
	 if ((n == 1) | (n == 2))
	 {
	  /* Caso base: Si es el primer o segundo termino, devuelve 1. */
		return 1;
	 }
	 else
	 {
	  /* Caso recursivo: Si es el tercer termino o posterior, suma los dos anteriores. */
	  /* Primero ejecuto la que tenga menos llamadas recursivas para que su uso de memoria
	     sea de menos memoria a mas así doy tiempo al sistema para que frene el programa si
	     está usando mucha memoria. */
		return (fibonacci(n - 2) + fibonacci(n - 1));
	 } 
}
