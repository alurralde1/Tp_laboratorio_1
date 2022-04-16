/*
 ============================================================================
 Name        : TP_1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);
	int option;
	int kilometros;
	float aerolineas;
	float latam;
	float debitoAerolineas;
	float debitoLatam;
	float creditoAerolineas;
	float creditoLatam;
	float btcAerolineas;
	float btcLatam;
	float unitarioAerolineas;
	float unitarioLatam;
	float diferenciaPrecio;

	int flag;

	kilometros = 0;
	flag = 0;
	do {
		/**
		 * La variable opcion , llama a la funcion menu, que va a imprimir el menu y solicitar la opcion que luego se asigna a la variable option
		 */
		option = menu();

		switch (option) {

		case 1:
			/**
			 * En el case 1, solicito al usuario que ingrese los kilometros, lo guardo en la variable y cambio el valor del flag,para poder entrar al ingreso de precios
			 */
			if (flag == 0) {
				printf("Ingrese los kilometros del viaje:");
				scanf("%d", &kilometros);
				while (kilometros <= 0) {
					printf("Error, ingrese correctamente los km del viaje:");
					scanf("%d", &kilometros);
				}
				flag = 1;
			}
			break;
		case 2:
			/**
			 * En el case 2, le digo que si flag vale uno puede entrar y le pide al usuario que ingrese los precios , luego cambio el valor del flag para decirle al programa que ya tengo los precios
			 */
			if (flag == 1) {

				printf("Debe ingresar el precio de vuelo en Aerolineas\n");
				scanf("%f", &aerolineas);
				while (aerolineas < 0) {
					printf(
							"Error, ingrese el precio de vuelo correcto(Aerolineas):");
					scanf("%f", &aerolineas);
				}
				printf("Debe ingresar el precio de vuelo en Latam\n");
				scanf("%f", &latam);
				while (latam < 0) {
					printf(
							"Error, ingrese el precio de vuelo correcto(Latam):");
					scanf("%f", &latam);
				}
				flag = 2;
			} else {
				printf("Debe ingresar los km primero...\n");
			}
			break;
		case 3:
			/**
			 * En el case 3, le digo al programa que si flag vale 2 quiere decir que tengo el kilometro y los precios de vuelos ,una vez que entra se realizan los calculos.Luego cambio el valor del flag
			 */
			if (flag == 2) {
				debitoAerolineas = calcularDebito(aerolineas);
				debitoLatam = calcularDebito(latam);
				creditoAerolineas = calcularCredito(aerolineas);
				creditoLatam = calcularCredito(latam);
				btcAerolineas = calcularBtc(aerolineas);
				btcLatam = calcularBtc(latam);
				unitarioAerolineas = calcularUnitario(aerolineas, kilometros);
				unitarioLatam = calcularUnitario(latam, kilometros);
				diferenciaPrecio = calcularDiferencia(aerolineas, latam);

				printf("Procesando...........\n calculo exitoso!");
				flag = 3;
			} else {
				printf("Debe ingresar los precios de vuelo...\n");
			}
			break;
		case 4:
			/**
			 * En el case 4, le digo al programa que si flag vale 3, quiere decir que tengo el kilometro,los precios de vuelos y los calculos realizado entonces entra y le pido que me muestre los resultados
			 */
			if (flag == 3) {
				printf("Kilometros ingresados: %d\n", kilometros);
				printf("El precio en Aerolineas es: %.2f\n", aerolineas);
				printf("El precio con tarjeta de debito es: %.2f\n",
						debitoAerolineas);
				printf("El precio con tarjeta de credito es: %.2f\n",
						creditoAerolineas);
				printf("El precio pagado con Bitcoin es: %f BTC\n",
						btcAerolineas);
				printf("El precio por km es de: %.2f\n\n", unitarioAerolineas);

				printf("El precio en Latam es: %.2f\n", latam);
				printf("El precio con tarjeta de debito es: %.2f\n",
						debitoLatam);
				printf("El precio con tarjeta de credito es: %.2f\n",
						creditoLatam);
				printf("El precio pagado con Bitcoin es: %f BTC\n", btcLatam);
				printf("El precio por km es de: %.2f\n\n", unitarioLatam);

				printf("La diferencia de precio es: %.2f\n", diferenciaPrecio);

			} else {
				printf(
						"Debe ingresar los precios de vuelo y calcular los costos...\n");
			}
			break;
		case 5:
			/**
			 * En el case 5 realizo una carga forzada, se le asigna los siguientes valores a las variables y se trabaja con ellos
			 */
			kilometros = 7090;
			aerolineas = 162965;
			latam = 159339;
			printf("carga forzada realizada con exito!!");
			flag = 2;
			break;
		case 6:
			/**
			 * en el case 5 me imprime el mensaje saliendo del programa y luego se detiene la ejecucion
			 */
			printf("saliendo del programa...");
			break;
		default:
			/**
			 * En caso de que el valor de option no sea un case valido,el default ejecutara de nuevo el switch
			 */
			printf("no es una opcion correcta");
		}
	} while (option != 6);
	return EXIT_SUCCESS;
}
