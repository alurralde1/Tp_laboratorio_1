/*
 * funciones.h
 *
 *  Created on: 6 abr 2022
 *      Author: Julian
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/// @brief Funcion que hace un descuento del 10% precio total ingresado por el usuario
///
/// @param precio
/// @return retorna el resultado del descuento realizado
float calcularDebito(float precio);
/// @brief Funcion que suma el precio total ingresado por el usuario mas un interes del 25%
///
/// @param precio
/// @return retorna el resultado del interes sumado
float calcularCredito(float precio);
/// @brief funcion que divide el precio total ingresado por el usario sobre el valor en pesos de un bitcoin
///
/// @param precio
/// @return retorna el resultado de lo que sale pagando con bitcoin
float calcularBtc(float precio);
/// @brief funcion que divide los datos pasados por parametros
///
/// @param precio
/// @param kilometros
/// @return retorna el resultado de la operacion
float calcularUnitario(float precio, int kilometros);
/// @brief funcion que resta los precios pasado por parametros
///
/// @param precio1
/// @param precio2
/// @return retorna el resultado de la resta
float calcularDiferencia(float precio1, float precio2);

#endif /* FUNCIONES_H_ */
