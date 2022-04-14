/*
 * tp.h
 *
 *  Created on: 9 abr. 2022
 *      Author: aguslaurenti
 */

#ifndef TP_H_
#define TP_H_

float CalcularDescuentoLatam(float latam);

float CalcularDescuentoAero(float aero);

float CalcularInteresLatam(float latam);

float CalcularInteresAero(float aero);

float CalcularBTCLatam(float latam);

float CalcularBTCAero(float aero);

float CalcularUnitarioLatam(float latam, int km);

float CalcularUnitarioAero(float aero, int km);

void CargaForzada(float descuentoLatam,float descuentoAero,float interesLatam,float interesAero,float precioBTCLatam,float precioBTCAero,float unitarioLatam,float unitarioAero);

#endif /* TP_H_ */
