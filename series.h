/* Autor: Nicolas Pauer
   Mail: nicolaspauer20@gmail.com
   Creacion: 17/06/2023
   Actualizacion: 17/06/2023
   Descripcion: Provee funciones para calcular series(sucesiones). 
*/


/* Defino archivo de cabecera SERIES_H sino lo 
   definió previamente el compilador para que se
   pueda usar como biblioteca al estar el headerfile definido */
#ifndef SERIES_H
	#define SERIES_H
#endif

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
		return (fibonacci(n - 2)	+ fibonacci(n - 1));
	 } 
}
