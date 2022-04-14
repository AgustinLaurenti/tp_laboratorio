/*
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

/**
 * @brief funcion para calcular el debito/descuento de el precio ingresado para latam
 *
 * @param latam
 * @return el resultado de descuento con debito de latam
 */
float CalcularDescuentoLatam(float latam)
{
	float descuento;
	float descuentoFinal;

	descuento=(0.10*latam);
	descuentoFinal=latam-descuento;

	return descuentoFinal;
}

/**
 * @brief funcion para calcular el debito/descuento de el precio ingresado para aerolineas
 *
 * @param aero
 * @return el resultado de descuento con debito de latam
 */
float CalcularDescuentoAero(float aero)
{
	float descuento;
	float descuentoFinal;

	descuento=(0.10*aero);
	descuentoFinal=aero-descuento;

	return descuentoFinal;
}

/**
 * @brief funcion para calcular el credito/interes de el precio ingresado para latam
 *
 * @param latam
 * @return el resultado de interes con credito de latam
 */
float CalcularInteresLatam(float latam)
{
	float interes;
	float interesFinal;

	interes=(0.10*latam);
	interesFinal=latam+interes;

	return interesFinal;
}

/**
 * @brief funcion para calcular el credito/interes de el precio ingresado para aerolineas
 *
 * @param aero
 * @return el resultado de interes con credito de aerolineas
 */
float CalcularInteresAero(float aero)
{
	float interes;
	float interesFinal;

	interes=(0.10*aero);
	interesFinal=aero+interes;

	return interesFinal;
}

/**
 * @brief funcion para calcular el valor bitcoin con el precio de vuelo latam
 *
 * @param latam
 * @return el valor del bitcoin del precio de vuelo de latam
 */
float CalcularBTCLatam(float latam)
{
	float precioBTC;

	precioBTC=latam/4606954.55;

	return precioBTC;
}

/**
 * @brief funcion para calcular el valor bitcoin con el precio de vuelo aerolineas
 *
 * @param aero
 * @return el valor del bitcoin del precio de vuelo de aerolineas
 */
float CalcularBTCAero(float aero)
{
	float precioBTC;

	precioBTC=aero/4606954.55;

	return precioBTC;
}

/**
 * @brief funcion para calcular el valor del precio latam en kilometros
 *
 * @param latam
 * @param km
 * @return el resultado del precio latam en kilometros
 */
float CalcularUnitarioLatam(float latam, int km)
{
	float precioUnitario;

	precioUnitario=latam/km;

	return precioUnitario;
}

/**
 * @brief funcion para calcular el valor del precio aerolineas en kilometros
 *
 * @param aero
 * @param km
 * @return el resultado del precio aerolineas en kilometros
 */
float CalcularUnitarioAero(float aero, int km)
{
	float precioUnitario;

	precioUnitario=aero/km;

	return precioUnitario;
}

/**
 * @brief funcion para calcular la carga forzada
 *
 * @param descuentoLatam
 * @param descuentoAero
 * @param interesLatam
 * @param interesAero
 * @param precioBTCLatam
 * @param precioBTCAero
 * @param unitarioLatam
 * @param unitarioAero
 */
void CargaForzada(float descuentoLatam,float descuentoAero,float interesLatam,float interesAero,float precioBTCLatam,float precioBTCAero,float unitarioLatam,float unitarioAero)
{
	int kilometros;
	float latam;
	float aerolineas;

	kilometros=7090;
	latam=162965;
	aerolineas=159339;

	descuentoLatam=CalcularDescuentoLatam(latam);
	descuentoAero=CalcularDescuentoAero(aerolineas);

	interesLatam=CalcularInteresLatam(latam);
	interesAero=CalcularInteresAero(aerolineas);

	precioBTCLatam=CalcularBTCLatam(latam);
	precioBTCAero=CalcularBTCAero(aerolineas);

	unitarioLatam=CalcularUnitarioLatam(latam,kilometros);
	unitarioAero=CalcularUnitarioAero(aerolineas,kilometros);


	printf("Kilometros Ingresados: %d\n\n",kilometros);

	printf("Precio Latam: %.2f\n",latam);
	printf("Precio con tarjeta de débito: %.2f\n",descuentoLatam);
	printf("Precio con tarjeta de crédito: %.2f\n",interesLatam);
	printf("Precio pagando con bitcoin: %f\n",precioBTCLatam);
	printf("Precio unitario: %.2f\n\n",unitarioLatam);

	printf("Precio Aerolineas: %.2f\n",aerolineas);
	printf("Aerolíneas:\nPrecio con tarjeta de débito: %.2f\n",descuentoAero);
	printf("Precio con tarjeta de crédito: %.2f\n",interesAero);
	printf("Precio pagando con bitcoin: %f\n",precioBTCAero);
	printf("Precio unitario: %.2f\n\n",unitarioAero);

	printf("La diferencia de precio es: %.2f\n",latam-aerolineas);
}




