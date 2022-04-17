#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float calcularDebito(float precio) {
	float precioFinal;

	precioFinal = (precio * 10) / 100;

	return precio - precioFinal;
}

float calcularCredito(float precio) {

	float precioFinal;

	precioFinal = (precio * 25) / 100;

	return precio + precioFinal;
}

float calcularBtc(float precio) {
	float btc = 40000;
	float precioFinal = (precio / btc);

	return precioFinal;
}

float calcularUnitario(float precio, int kilometros) {
	float precioUnitario;

	precioUnitario = precio / kilometros;

	return precioUnitario;
}

float calcularDiferencia(float precio1, float precio2) {
	float precioDiferencia = precio1 - precio2;
	if (precioDiferencia < 0) {
		precioDiferencia = precio2 - precio1;
	}
	return precioDiferencia;
}
