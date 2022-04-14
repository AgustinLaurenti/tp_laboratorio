/*
Agustin Laurenti
1-c
Trabajo Practico 1:
Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar Kilómetros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir
 */

#include <stdio.h>
#include <stdlib.h>
#include "tp.h"

int main(void)
{
	setbuf(stdout, NULL);

	int opciones;
	int kilometros;
	float aerolineas;
	float latam;
	float descuentoLatam;
	float descuentoAero;
	float interesLatam;
	float interesAero;
	float precioBTCLatam;
	float precioBTCAero;
	float unitarioLatam;
	float unitarioAero;

	kilometros=0;
	aerolineas=0;
	latam=0;

	do
	{
		printf("\n1)Ingresar Kilómetros: %d\n",kilometros);
		printf("2) Ingresar Precio de Vuelos: (Aerolíneas=%.2f, Latam=%.2f)\n",aerolineas,latam);
		printf("3) Calcular todos los costos: \n");
		printf("4) Informar Resultados: \n");
		printf("5) Carga forzada de datos: \n");
		printf("6) Salir: \n\n");
		scanf("%d",&opciones);

		switch(opciones)
		{
			case 1:
				printf("Ingrese los kilometros: \n");
				scanf("%d",&kilometros);

				if(kilometros<1)
				{
					printf("¡¡¡Ingrese un numero mayor a 0!!!\n");
				}
			break;

			case 2:
				printf("Ingrese los precios de vuelos: \n");
				printf("-Precio vuelo Aerolíneas: \n");
				scanf("%f",&aerolineas);
				printf("-Precio vuelo Latam: \n");
				scanf("%f",&latam);
			break;

			case 3:
				if(kilometros==0 || aerolineas==0 || latam==0)
				{
					printf("¡¡¡Ingrese primero los valores!!!\n");
				}
				else
				{
					descuentoLatam=CalcularDescuentoLatam(latam);
					descuentoAero=CalcularDescuentoAero(aerolineas);

					interesLatam=CalcularInteresLatam(latam);
					interesAero=CalcularInteresAero(aerolineas);

					precioBTCLatam=CalcularBTCLatam(latam);
					precioBTCAero=CalcularBTCAero(aerolineas);

					unitarioLatam=CalcularUnitarioLatam(latam,kilometros);
					unitarioAero=CalcularUnitarioAero(aerolineas,kilometros);

					printf("...Se a registrado y calculado\n");
				}
			break;

			case 4:
				if(kilometros==0 || aerolineas==0 || latam==0)
				{
					printf("¡¡¡Ingrese primero los valores!!!\n");
				}
				else
				{
					printf("Latam: %.2f\n",latam);
					printf("Precio con tarjeta de débito: %.2f\n",descuentoLatam);
					printf("Precio con tarjeta de crédito: %.2f\n",interesLatam);
					printf("Precio pagando con bitcoin: %f\n",precioBTCLatam);
					printf("Precio unitario: %.2f\n\n",unitarioLatam);

					printf("Aerolineas: %.2f\n",aerolineas);
					printf("Precio con tarjeta de débito: %.2f\n",descuentoAero);
					printf("Precio con tarjeta de crédito: %.2f\n",interesAero);
					printf("Precio pagando con bitcoin: %f\n",precioBTCAero);
					printf("Precio unitario: %.2f\n\n",unitarioAero);

					printf("La diferencia de precio es: %.2f\n",latam-aerolineas);
				}
			break;

			case 5:
				CargaForzada(descuentoLatam, descuentoAero, interesLatam, interesAero, precioBTCLatam, precioBTCAero, unitarioLatam, unitarioAero);
			break;

			case 6:
				printf("Finalizando...");
			break;

			default:
				printf("Opcion incorrecta, ingrese un numero del 1 al 6\n");
			break;
		}

	}while(opciones!=6);

	return 0;
}
