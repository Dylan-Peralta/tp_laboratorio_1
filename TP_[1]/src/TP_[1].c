/*
 ============================================================================
 Name        : TP1
 Author      : Dylan Peralta
 Description : Trabajo Practico N 1 UTN
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "calculos.h"

int main() {
	setbuf(stdout, NULL);
	float km;
	float precioAerolineas;
	float precioLatam;
	float debitoAerolineas;
	float debitoLatam;
	float creditoAerolineas;
	float creditoLatam;
	float valorBitcoinAerolineas;
	float valorBitcoinLatam;
	float unitarioAerolineas;
	float unitarioLatam;
	float preciosConDiferencia;
	int bandera = 0;
	int bandera2 = 0;
	int bandera3 = 0;
	int banderaOpcSub = 0;
	int banderaKm = 0;
	int opciones;
	int opcionesSub;
	int menu;

	printf("BIENVENIDO\n\n");

	printf("1. Ingrese los datos \n");
	printf("2. Salir \n");
	scanf("%d", &menu);
	while (menu < 0 || menu > 2) {
		printf("Error, re ingrese la opcion(1; 2): ");
		scanf("%d", &menu);
	}

	switch (menu) {
	case 1:
		do {
			printf(
					"Ingrese los datos solicitados (Primero los KMs y luego los Precios)\n\n");

			printf("1. Ingresar KMs \n");
			printf("2. Ingresar Precios \n");
			printf("3. Salir \n");
			printf("Seleccione una opcion: ");
			scanf("%d", &opcionesSub);
			while (opcionesSub < 0 || opcionesSub > 3) {
				printf("Error, re ingrese la opcion(1; 2; 3): ");
				scanf("%d", &opcionesSub);
			}

			switch (opcionesSub) {
			case 1:
				bandera = 1;
				printf("Ingrese los kilometros: ");
				scanf("%f", &km);
				while (km <= 0) {
					printf("Error, re ingrese los kilometros: ");
					scanf("%f", &km);
				}
				banderaKm = 1;
				break;

			case 2:

				if (banderaKm == 1) {
					bandera2 = 1;
					banderaOpcSub = 1;
					printf("Ingrese el precio en Aerolineas: ");
					scanf("%f", &precioAerolineas);
					while (precioAerolineas <= 0) {
						printf(
								"Error, vuelva a ingresar el precio entre (el precio no puede ser 0): ");
						scanf("%f", &precioAerolineas);

					}
					printf("Ingrese el precio en Latam: ");
					scanf("%f", &precioLatam);
					while (precioLatam <= 0) {
						printf(
								"Error, vuelva a ingresar el precio entre (el precio no puede ser 0): ");
						scanf("%f", &precioLatam);
					}
				} else
					printf(
							"Ustede no ingreso lo KMs(Por favor, ingrese lo KMs primero)\n\n");
				break;

			case 3:
				return EXIT_SUCCESS;
				break;
			}
		} while (banderaOpcSub != 1);

		break;

	case 2:
		return EXIT_SUCCESS;
		break;
	}

	if (bandera != 0 && bandera2 != 0) {
		printf(
				"Por favor, calcule todos los costos antes de hacer un informe de resultados\n\n");
		do {
			printf("1 .Calcular todos los costos:\n  ");
			printf("a. Tarjeta de debito \n  ");
			printf("b. Tarjeta de credito \n  ");
			printf("c. Valor en Bitcoin \n  ");
			printf("d. Precio por Km \n  ");
			printf("e. Diferencia entre ambas \n\n");

			printf("2. Informe de resultados \n\n");
			printf("3. Salir \n");
			printf("Seleccione una opcion: ");
			scanf("%d", &opciones);
			while (opciones < 0 || opciones > 3) {
				printf("Error, re ingrese la opcion(1; 2; 3): ");
				scanf("%d", &opciones);
			}

			switch (opciones) {
			case 1:

				debitoAerolineas = tarjetaDebitoAerolineas(precioAerolineas);
				debitoLatam = tarjetaDebitoLatam(precioLatam);
				creditoAerolineas = tarjetaCreditoAerolineas(precioAerolineas);
				creditoLatam = tarjetaCreditoLatam(precioLatam);
				valorBitcoinAerolineas = precioValorBitcoinAerolineas(
						precioAerolineas);
				valorBitcoinLatam = precioValorBitcoinLatam(precioLatam);
				unitarioAerolineas = precioUnitarioAerolineas(precioAerolineas,
						km);
				unitarioLatam = precioUnitarioLatam(precioLatam, km);
				preciosConDiferencia = diferenciaPrecios(precioLatam,
						precioAerolineas);
				bandera3 = 1;
				printf("USTED A CALCULADO TODOS LOS COSTOS CON EXITO\n\n");
				break;

			case 2:
				if (bandera3 != 0) {
					printf("KMs ingresados: %.2f\n\n", km);

					printf("Latam:\n");
					printf(
							"El precio con 10 porciento de descuento es de: $ %.2f\n",
							debitoLatam);
					printf(
							"El precio con 25 porciento de interes es de: $ %.2f\n",
							creditoLatam);
					printf("El valor en Bitcoin es de: %f\n",
							valorBitcoinLatam);
					printf("El precio unitario de latam es: $ %.2f\n\n",
							unitarioLatam);

					printf("Aerolineas:\n");
					printf(
							"El precio con 10 porciento de descuento es de: $ %.2f\n",
							debitoAerolineas);
					printf(
							"El precio con 25 porciento de interes es de: $ %.2f\n",
							creditoAerolineas);
					printf("El valor en Bitcoin es de: %f\n",
							valorBitcoinAerolineas);
					printf("El precio unitario de Aerolineas es: $ %.2f\n\n",
							unitarioAerolineas);

					printf("La diferencia de precio es de: %.2f",
							preciosConDiferencia);

				} else
					printf(
							"Ustedes no calculo los costos(Por favor, calcule todos los costos)\n\n");
				break;

			case 3:
				return EXIT_SUCCESS;
				break;
			}
		} while (opciones != 3);
	} else {
		printf("Por favor, ingrese los datos solicitados (Kms y Precios)\n\n");
	}
	return EXIT_SUCCESS;
}
