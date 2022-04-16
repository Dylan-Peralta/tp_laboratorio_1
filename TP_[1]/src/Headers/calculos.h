/*
 * calculos.h

 *      Author: Dylan Peralta
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_
/// @fn float tarjetaDebitoAerolineas(float)
/// @brief calcula el descuento con tarjeta de debito en Aerolineas
///
/// @param precioAerolineas precio a calcular el descuento
/// @return retorna el precio con descuento con tarjeta de debito en Aerolineas
///
///
float tarjetaDebitoAerolineas(float precioAerolineas);
/// @fn float tarjetaDebitoLatam(float)
/// @brief calcula el descuento con tarjeta de debito en Latam
///
/// @param precioLatam precio a calcular el descuento
/// @return retorna el precio con descuento con tarjeta de debito en Latam
///
///
float tarjetaDebitoLatam(float precioLatam);
/// @fn float tarjetaCreditoAerolineas(float)
/// @brief calcula el interes con tarjeta de credito en Aerolineas
///
/// @param precioAerolineas precio a calcular el interes de Aerolineas
/// @return retorna el precio con interes en la tarjeta de credito de Aerolineas
///
///
float tarjetaCreditoAerolineas(float precioAerolineas);
/// @fn float tarjetaCreditoLatam(float)
/// @brief calcula el interes con tarjeta de credito en Latam
///
/// @param precioLatam precio a calcular el interes Latam
/// @return retorna el precio con interes de la tarjeta de credito de Latam
///
///
float tarjetaCreditoLatam(float precioLatam);
/// @fn float diferenciaPrecios(float, float)
/// @brief calcula la diferencia en entre precioLatam y precioAerolineas
///
/// @param precioLatam primer flotante a sacar diferencia
/// @param precioAerolineas segundo flotante a sacar diferencia
/// @return retorna la diferencia entre los flotantes ingresados
float diferenciaPrecios(float precioLatam, float precioAerolineas);
/// @fn float precioValorBitcoinAerolineas(float)
/// @brief calcula el precio en bitcoin de Aerolineas
///
/// @param precioAerolineas precio a transformar en Bitcoin de Aerolineas
/// @return retorna el valor en Bitcoin del precio en Aerolineas
float precioValorBitcoinAerolineas(float precioAerolineas);
/// @fn float precioValorBitcoinLatam(float)
/// @brief calcula el precio en bitcoin de Latam
///
/// @param precioLatam precioAerolineas precio a transformar en Bitcoin de Latam
/// @return retorna el valor en Bitcoin del precio en Latam
float precioValorBitcoinLatam(float precioLatam);
/// @fn float precioUnitarioAerolineas(float, float)
/// @brief calcula el precio por km de Aerolineas
///
/// @param precioAerolineas flotante a dividir
/// @param km flotante divisor
/// @return retorna el valor por km de Aerolineas
float precioUnitarioAerolineas(float precioAerolineas, float km);
/// @fn float precioUnitarioLatam(float, float)
/// @brief calcula el precio por km de Latam
///
/// @param precioLatam flotante a dividir
/// @param km flotante divisor
/// @return retorna el valor por km de Latam
float precioUnitarioLatam(float precioLatam , float km);


#endif /* CALCULOS_H_ */
