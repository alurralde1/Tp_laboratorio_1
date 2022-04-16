#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
/// @Funcion menu,la cual muestra un menu y solicita al usuario la opcion que desea ejecutar,guardando en una variable y retornando el valor.
///
/// @return retorna el numero de la opcion elegida
int menu() {
	int auxOpcion;

	printf("\n--------menu-------"
	"\n1.Ingresar Kilómetros: (km=x)"

			"\n2.Ingresar Precio de Vuelos: (Aerolíneas=y , Latam=z)"
			"\n\t-Precio vuelo Aerolineas:"
			"\n\t-Precio vuelo Latam:"

			"\n3.Calcular todos los costos:"
			"\n\ta)Tarjeta de débito (descuento 10)"
			"\n\tb)Tarjeta de credito (interés 25)"
			"\n\tc)Bitcoin (1 BTC -> 4606954.55 Pesos Argentinos)"
			"\n\td)Mostrar precio por km (precio unitario)"
			"\n\te)Mostrar diferencia de precio ingresada (Latam - Aerolíneas)"

			"\n4.Informar Resultados"
			"\n\tLatam:"
			"\n\ta)Precio con tarjeta de débito:"
			"\n\tb)Precio con tarjeta de crédito:"
			"\n\tc)Precio pagando con bitcoin:"
			"\n\td)Precio unitario:"
			"\n\tAerolineas:"
			"\n\ta)Precio con tarjeta de débito:"
			"\n\tb)Precio con tarjeta de crédito:"
			"\n\tc)Precio pagando con bitcoin:"
			"\n\td)Precio unitario:"
			"\n\tLa diferencia de precio es:"

			"\n5.Carga forzada de datos"
			"\n6.Salir\n"
	);

	scanf("%d", &auxOpcion);

	return auxOpcion;
}
