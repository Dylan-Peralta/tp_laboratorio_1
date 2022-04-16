/*
 * calculos.c
 *      Author: Dylan Peralta
 */
#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

float tarjetaDebitoAerolineas(float precioAerolineas)
{
    float precioDebitoAerolineas;

    precioDebitoAerolineas = precioAerolineas - ((precioAerolineas*10)/100);
    return precioDebitoAerolineas;
}

float tarjetaDebitoLatam(float precioLatam)
{
    float precioDebitoLatam;
    precioDebitoLatam = precioLatam - ((precioLatam*10)/100);
    return precioDebitoLatam;
}

float tarjetaCreditoAerolineas(float precioAerolineas)
{
    float precioCreditoAerolineas;
    precioCreditoAerolineas = precioAerolineas + ((precioAerolineas*25)/100);
    return precioCreditoAerolineas;
}

float tarjetaCreditoLatam(float precioLatam)
{
    float precioCreditoLatam;
    precioCreditoLatam = precioLatam + ((precioLatam*25)/100);
    return precioCreditoLatam;
}

float precioValorBitcoinAerolineas(float precioAerolineas){
	float valorBitcoin;
	valorBitcoin = (precioAerolineas / 7566365.58);
	return valorBitcoin;
}

float precioValorBitcoinLatam(float precioLatam){
	float valorBitcoin;
	valorBitcoin = (precioLatam / 7566365.58);
	return valorBitcoin;
}

float precioUnitarioAerolineas(float precioAerolineas, float km){
	float unitarioAerolineas;
	unitarioAerolineas = precioAerolineas / km;
	return unitarioAerolineas;
}

float precioUnitarioLatam(float precioLatam , float km){
	float unitarioLatam;
	unitarioLatam = precioLatam / km;
	return unitarioLatam;
}

float diferenciaPrecios(float precioLatam, float precioAerolineas){
	float diferencia;
	diferencia = precioLatam - precioAerolineas;
	return diferencia;
}
