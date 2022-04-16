#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/// @brief Funcion que hace un descuento del 10% precio total ingresado por el usuario
///
/// @param precio
/// @return retorna el resultado del descuento realizado
float calcularDebito(float precio) {
	float precioFinal;

	precioFinal = (precio * 10) / 100;

	return precio - precioFinal;
}
/// @brief Funcion que suma el precio total ingresado por el usuario mas un interes del 25%
///
/// @param precio
/// @return retorna el resultado del interes sumado
float calcularCredito(float precio) {

	float precioFinal;

	precioFinal = (precio * 25) / 100;

	return precio + precioFinal;
}
/// @brief funcion que divide el precio total ingresado por el usario sobre el valor en pesos de un bitcoin
///
/// @param precio
/// @return retorna el resultado de lo que sale pagando con bitcoin
float calcularBtc(float precio) {
	float btc = 40000;
	float precioFinal = (precio / btc);

	return precioFinal;
}
/// @brief funcion que divide los datos pasados por parametros
///
/// @param precio
/// @param kilometros
/// @return retorna el resultado de la operacion
float calcularUnitario(float precio, int kilometros) {
	float precioUnitario;

	precioUnitario = precio / kilometros;

	return precioUnitario;
}
/// @brief funcion que resta los precios pasado por parametros
///
/// @param precio1
/// @param precio2
/// @return retorna el resultado de la resta
float calcularDiferencia(float precio1, float precio2) {
	float precioDiferencia = precio1 - precio2;
	if (precioDiferencia < 0) {
		precioDiferencia = precio2 - precio1;
	}
	return precioDiferencia;
}
